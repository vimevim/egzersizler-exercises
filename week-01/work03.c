#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    char userInput[200];
    printf("Type something:");
    scanf("%s",&userInput);
    for(counter=0;counter<10;counter++)
    {
        printf("%d. %s",counter,userInput);
    }
    return 0;
}
