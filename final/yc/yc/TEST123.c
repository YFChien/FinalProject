#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "string.h"

int main()
{
    char ch,in[80];
    char c[999];
    int i = 0, j = 0, ints = 0, includes = 0, whiles = 0, ifs = 0, fors = 0, elses = 0, printfs = 0,imports=0;
    FILE *NMSL;
    printf("�`�N�ƶ�:\n");
    printf("1.�Щ�b�P���{���P�ؿ�\n");
    printf("2.�ݿ�J���ɦWEx:test.cpp\n");
    printf("�п�J�ɦW:");
	scanf("%s",&in);
//	printf("%s\n",in);
    NMSL = fopen(in, "r");
    ch = fgetc(NMSL);

    while (ch != EOF)
    {

        c[i] = ch;
        ch = fgetc(NMSL);
        i++;
    }
    fclose(NMSL);

    for (j = 0; j < i; j++)
    {
        if (c[j - 3] == 'i' && c[j - 2] == 'n' && c[j - 1] == 't' && c[j] == ' ')
        {
            ints++;
        }
        else if (c[j - 6] == 'i' && c[j - 5] == 'n' && c[j - 4] == 'c' && c[j - 3] == 'l' && c[j - 2] == 'u' && c[j - 1] == 'd' && c[j] == 'e')
        {
            includes++;
        }
        else if (c[j - 4] == 'w' && c[j - 3] == 'h' && c[j - 2] == 'i' && c[j - 1] == 'l' && c[j] == 'e')
        {
            whiles++;
        }
        else if (c[j - 1] == 'i' && c[j] == 'f')
        {
            ifs++;
        }
        else if (c[j - 2] == 'f' && c[j - 1] == 'o' && c[j] == 'r')
        {
            fors++;
        }
        else if (c[j - 3] == 'e' && c[j - 2] == 'l' && c[j - 1] == 's' && c[j] == 'e')
        {
            elses++;
        }
        else if (c[j - 5] == 'p' && c[j - 4] == 'r' && c[j - 3] == 'i' && c[j - 2] == 'n' && c[j - 1] == 't' && c[j] == 'f')
        {
            printfs++;
        }
        else if (c[j - 5] == 'i' && c[j - 4] == 'm' && c[j - 3] == 'p' && c[j - 2] == 'o' && c[j - 1] == 'r' && c[j] == 't')
        {
            imports++;
        }
    }
    printf("int��:%d\n", ints);
    printf("include��:%d\n", includes);
    printf("while��:%d\n", whiles);
    printf("if��:%d\n", ifs);
    printf("for��:%d\n", fors);
    printf("else��:%d\n", elses);
    printf("printf��:%d\n", printfs);
    printf("import��:%d\n", imports);
    getch();
}
