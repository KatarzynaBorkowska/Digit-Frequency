#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int n;
    for(n = 0;s[n] != 0;n++)
        ;
    int tab[] = {0,0,0,0,0,0,0,0,0,0};
    
    for(int i = 0;i < 10;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(s[j] == (i%10)+48)
                tab[i]++;
        }
    }
    for(int i = 0;i < 10;i++)  
        printf("%d ",tab[i]);
    return 0;
}
