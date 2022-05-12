#include "stdio.h"
#include "stdlib.h"
int main(void){
    int count=0;
    char s[21];
    FILE *fp;
    if((fp=fopen("file.txt","r"))==NULL){
        printf("打开文件失败...\n");
        exit(0);
    }
    while(fscanf(fp,"%s",s)!=EOF)
        count++;
    fclose(fp);
    printf("==========该文件里一共有%d个单词==========\n",count);
    return 0;
}