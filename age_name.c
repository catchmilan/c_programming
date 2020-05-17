# include <stdio.h>

int main()
{
    char c,name[100];
    int age,i;
    printf("Your name is:\n");
    for(i=0; (c = getchar())!='\n'; i++)
        name[i]=c;
    name[i]='\0';
    printf("Enter the age:");
    scanf("%d",&age);
    printf("Hello %s, next year you will be %d. . The message is from git hub cloud.",name, age+1);
    return 0;
}
