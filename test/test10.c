# include <stdio.h>

# define MAXLINE 1000 /* 允许输入最大的行 */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int maxLen;

    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
}


int getline(char s[], int lim)
{
    int c, i;

    for(i=0; i<= lim && (c=getchar()) !=EOF && c != '\n'; i++)
    {
        s[i] = c; 
    }

    
}
