#include <stdio.h>
#include <string.h>


void abc(char *a)
{
    int i;
    for(i=0;i<15;i++)
   {
        if(a[i]>=65&&a[i]<=90)
       {
        a[i]=a[i]+32;
       }
        else if(a[i]>=97&&a[i]<=122)
       {
        a[i]=a[i]-32;
       }
   }
}

void stringuppercase(char *s)
{
	int i;
    	for(i=0;s[i];i++)  
        {
          if(s[i]>=97 && s[i]<=122)
          s[i]-=32;
 	    }
}


void stringlowercase(char *s)
{
	int i;
    	for(i=0;s[i];i++)  
        {
          if(s[i]>=65 && s[i]<=90)
          s[i]+=32;
 	    }
}

int main (void)
{
    char a[15];
    char s[1000];  
    int i;
    char menu_option;

    do{
    printf("Main Menu\n");
    printf("1. Uppercase.\n");
    printf("2. Lowercase.\n");
    printf("3. Switching.\n");
    printf("4. exit.\n");
    printf(" Please enter an option from the main menu: ");
    scanf("%c",&menu_option);

    switch(menu_option){

    case '1':
    printf("Enter  the string in lower case: ");
    scanf("%s",s);
    // gets(s);
    stringuppercase(s);    
    printf("string in uppercase ='%s'\n",s);
    getchar();
    return 0;
    break;

    case '2':
    printf("Enter  the string: ");
    scanf("%s",s);
    // gets(s);
    stringlowercase(s);
    printf("string in lowercase ='%s'\n",s);
    getchar();
    return 0;
    break;

    case'3':
        printf("Input the sentence: ");
        scanf("%s",a);
        abc(a);
        printf("Hasil: %s\n",a);
    getchar();
    break;
    case'4':
    printf("you have been exit from the menu :)");
        break;
    default:
        break;
    }

    }while(menu_option !='4');
}