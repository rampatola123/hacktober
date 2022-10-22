#include <stdio.h>

int main(void) {
    int n,i,j,btime[20],tatime[20],wtime[20];
    float awtime=0,atatime=0;
    printf("enter total no of process-->");
    scanf("%d",&n);
    printf("\nenter process burst time-->\n");
    for(i=0;i<n;i++){
        printf("p[%d]-->",i+1);
        scanf("%d",&btime[i]);
    }
    wtime[0]=0;
    for(i=0;i<n;i++)
    {
        wtime[i]=0;
        for(j=0;j<i;j++)
            wtime[i]+=btime[j];
        tatime[i]=wtime[i]+btime[i];
        awtime+=wtime[i];
        atatime+=tatime[i];
        printf("%d\t %d\t\t%d\t\t%d\n",i+1,btime[i],wtime[i],tatime[i]);
            
        
    }
    awtime =awtime/n;
    atatime=atatime/n;
    printf("Average waiting time =%f\n",awtime);
    printf("Average turnaround time=%f\n",atatime);
	return 0;
}
