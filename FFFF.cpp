#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
int main()
{
    char Stack[100];
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++){
        scanf("%s", Stack);
        int l = 0, len = strlen(Stack), flag = 1;
        for(int j=0; j<len; j++){
            if(Stack[j]=='S')
                l++;
            else
                l--;
            if(l < 0 || l > M){
                printf("NO\n");
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            if(l == 0)
                printf("YES\n", l);
            else
                printf("NO\n", l);
        }
 
    }
}
