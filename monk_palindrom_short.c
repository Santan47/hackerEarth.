#include<stdio.h>
#include<string.h>
int main(){
int w,i,length,j,t;
char str[100000],strr[100000];
scanf("%d",&t);
for(w=0;w<t;w++){
    scanf("%s",str);
    strcpy(strr,str);
    length=strlen(str);
        j=0;
        for(i=length-1;i>=0;i--){
                strr[j]=str[i];
        j++;
        }
        if(strcmp(str,strr)!=0){
            printf("NO\n");
        }
        else if(strcmp(str,strr)==0){
             if(length%2==0){
                 printf("YES EVEN\n");
             }
              else if(length%2==1){
                  printf("YES ODD\n");
              }
        }
        /*
    if(length%2==0){
        if(strcmp(str,strr)==0strcmp(str,strr)==0){
            printf("YES EVEN\n");
        }
        else
        printf("NO\n");
    }
    else if(length%2==1){
        if(strcmp(str,strr)==0){
            printf("YES ODD\n");
        }
        else
        printf("NO\n");
    }
    */
}
return 0;
}
