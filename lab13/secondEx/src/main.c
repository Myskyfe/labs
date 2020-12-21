#include <string.h>
#include <stdio.h>

int main(void)
{
	char text[] = "Ермаков,Ленин,Ефимов,Ленин,Ефимов,Косторышев";

	printf("%s\n", text);

    char finalString[sizeof(text)/sizeof(char)-4];

    printf("\n\n");
    printf("Изначальный список фамилий: \n");
    printf("%s ", text);

	char *find = strrchr(text, ',');

	while (1 == 1)
	{
        find = strrchr(text, ',');

        if (find != NULL)
        {
        
            if (strstr(finalString, find + 1) == NULL)
            {
                strcat(finalString, find + 1);
                strcat(finalString, ", ");
                memset(find, '\0', sizeof(find));

            }
            else 
            {
                memset(find, '\0', sizeof(find));
            }
        }	
        else{  
            
            break;
            
        }
	}
	if (strstr(finalString, text) == NULL)
	{
	    strcat(finalString, text);
	}

    printf("\n\n");
    printf("Конечный список фамилий: \n");
	printf("%s\n", finalString);
return 0;
}














