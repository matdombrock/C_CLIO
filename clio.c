#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX_LIMIT 32

const char* ask(char* que, char* res)
{
   printf("%s", que);
   printf("%s", "\n>>");
   fgets(res, MAX_LIMIT, stdin);
   return res; 
}

void say(char * str, bool nl){
    printf("%s", str);
    if(nl){
        printf("\r\n");
    }
}

bool contains(char * str1, char * str2){
    return strstr(str1, str2) != NULL;
}

int main()
{
    char res[MAX_LIMIT];
    ask("Question?(y/n)", res);
    char * yes = "y\n";
    if(contains(res, "y")){
        say("You said yes",1);
    }else{
        say("you said no",1);
    }
    //printf("%d",strcmp(res, "y"));
    //printf(res);
    return 0;
}