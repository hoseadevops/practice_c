#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLS 20
#define MAX_INPUT 1000

int read_column_numbers( int columns[], int max );
void rearrange( char *output, char const *input, int n_columns, int const columns[] );

int main(void){
    int n_columns;          /* 进行处理的列标号 */
    int columns[MAX_COLS];  /* 要处理的列数 */
    char input[MAX_INPUT];  /* 容纳输入行的数组 */
    char output[MAX_INPUT]; /* 容纳输出行的数组 */    

    /*读取该串列标号*/
    n_columns = read_column_numbers(columns, MAX_COLS);
    
    printf( "read_column_numbers : %d\n", n_columns );

    /*读取打印剩余的输入行*/
    while( gets( input ) != NULL ){
        printf( "original input : %s\n", input );
        rearrange( output, input, n_columns, columns) ;
        printf("rearrange line : %s\n", output);
    }

    return EXIT_SUCCESS;
}


int read_column_numbers( int columns[], int max )
{
    int num = 0;
    int ch;

    /*取出列标号 如果小于0则停止*/
    while( num < max && scanf( "%d", &columns[num] ) ==1 && columns[num] >= 0 )
        num += 1;
     
    if( num % 2 != 0 )
    {
        puts(" last column number is not paired." );
        exit( EXIT_FAILURE );
    }

    while( (ch = getchar()) != EOF && ch != '\n' )
         ;

    return num;
}


void rearrange( char *output, char const *input, int n_columns, int const columns[] )
{
    int col;
    int output_col;
    int len;

    len        = strlen( input );
    output_col = 0;
    
    for( col = 0; col <= n_columns; col +=2 )
    {
        int nchars = columns[col+1] - columns[col] + 1;

        if( columns[col]>=len || output_col == MAX_INPUT -1 )
            break;

        if( output_col + nchars > MAX_INPUT -1 )
            nchars = MAX_INPUT - output_col -1;
        
        strncpy( output + output_col, input + columns[col], nchars );
        output_col +=nchars;
    }
    
    output[output_col] = '\0';
}

