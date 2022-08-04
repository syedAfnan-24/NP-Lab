#include<stdio.h>             
#include<string.h>         
int main(){
        char a[20],b[20];
        int i,n,j;
        char f,s;
        n=0;
        printf("Enter the size of the frame : ");
        scanf("%d",&n);
        printf("\nEnter the characters in frame : \n");
        for(i=0;i<=n;i++)
                scanf("%c",&a[i]);
        printf("\n FRAME \n ");
        for(i=0;i<=n;i++)
                printf("%c",a[i]);
        j=0;
        for(i=0;i<=n;i++)
        {
                if(a[i]=='f')
                {
                        b[j]='s';
                        j++;
                        b[j]=a[i];

                }
                else if(a[i]=='s')
                {
                        b[j]='s';
                        j++;
                        b[j]=a[i];
                }
                else
                        b[j]=a[i];

                j++;
        }
        printf("\n RESULT: f");
        for(i=0;i<=(j/2);i++)
        {
                printf("%c",b[i]);
        }
        printf("f"); 
        for(i=(j/2)+1;i<j;i++)
        {
                printf("%c",b[i]);
        }
        printf("f");
}


