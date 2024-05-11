#include<cstdio>
#include<cstring>

int main(){
    char s1[] = {'H','e','l','l','o'};
    char s2[] = {'W','o','r','l','d'};
    char s3[] = "Hello World";
    printf("%d\n",strlen(s1));
    printf("%d\n",strlen(s3));
    printf("%d\n",strcmp(s1,s2));
    printf("%d\n",strchr(s3,'W'));
    printf("%d\n",strrchr(s3,'o'));
    strcat(s1,s2);
    printf("%s\n",s1);
    char c = 'c';
    strcpy(s1,&c);
    printf("%s\n",s1);
    strncpy(s2,&c,2);
    printf("%s\n",s2);
    return 0;
}