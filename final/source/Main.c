#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "string.h"

int main()
{
    char ch, in[200];
    char c[999];
    int i = 0, j = 0, ints[] = { 0 }, includes[] = { 0 }, whiles[] = { 0 }, ifs[] = { 0 }, fors[] = { 0 }, elses[] = { 0 }, printfs[] = { 0 }, imports[] = { 0 };
    int mode;
    FILE* NMSL;
    printf("�`�N�ƶ�:\n");
    printf("1.�Щ�b�P���{���P�ؿ�\n");
    printf("2.�ݿ�J���ɦWEx:test.cpp\n");
    printf("�п�J�Ҧ�(1.�έp 2.���):");
    scanf("%d", &mode);
    //	printf("%s\n",in);
    switch (mode)
    {
        case 1:
            {
            FILE* NMSL;
            printf("�`�N�ƶ�:\n");
            printf("1.�Щ�b�P���{���P�ؿ�\n");
            printf("2.�ݿ�J���ɦWEx:test.cpp\n");
            printf("�п�J�ɦW:");
            scanf("%s", &in);
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
                    ints[0]++;
                }
                else if (c[j - 6] == 'i' && c[j - 5] == 'n' && c[j - 4] == 'c' && c[j - 3] == 'l' && c[j - 2] == 'u' && c[j - 1] == 'd' && c[j] == 'e')
                {
                    includes[0]++;
                }
                else if (c[j - 4] == 'w' && c[j - 3] == 'h' && c[j - 2] == 'i' && c[j - 1] == 'l' && c[j] == 'e')
                {
                    whiles[0]++;
                }
                else if (c[j - 1] == 'i' && c[j] == 'f')
                {
                    ifs[0]++;
                }
                else if (c[j - 2] == 'f' && c[j - 1] == 'o' && c[j] == 'r')
                {
                    fors[0]++;
                }
                else if (c[j - 3] == 'e' && c[j - 2] == 'l' && c[j - 1] == 's' && c[j] == 'e')
                {
                    elses[0]++;
                }
                else if (c[j - 5] == 'p' && c[j - 4] == 'r' && c[j - 3] == 'i' && c[j - 2] == 'n' && c[j - 1] == 't' && c[j] == 'f')
                {
                    printfs[0]++;
                }
                else if (c[j - 5] == 'i' && c[j - 4] == 'm' && c[j - 3] == 'p' && c[j - 2] == 'o' && c[j - 1] == 'r' && c[j] == 't')
                {
                    imports[0]++;
                }
            }
            printf("int��:%d\n", ints[0]);
            printf("include��:%d\n", includes[0]);
            printf("while��:%d\n", whiles[0]);
            printf("if��:%d\n", ifs[0]);
            printf("for��:%d\n", fors[0]);
            printf("else��:%d\n", elses[0]);
            printf("printf��:%d\n", printfs[0]);
            printf("import��:%d\n", imports[0]);
            getch();
            break;
            }
        case 2:
            {
            for (int klloud = 0; klloud < mode; klloud++)
                {
                FILE* NMSL;
                printf("�`�N�ƶ�:\n");
                printf("1.�Щ�b�P���{���P�ؿ�\n");
                printf("2.�ݿ�J���ɦWEx:test.cpp\n");
                printf("�п�J�ɦW:");
                scanf("%s", &in);
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
                        ints[klloud]++;
                    }
                    else if (c[j - 6] == 'i' && c[j - 5] == 'n' && c[j - 4] == 'c' && c[j - 3] == 'l' && c[j - 2] == 'u' && c[j - 1] == 'd' && c[j] == 'e')
                    {
                        includes[klloud]++;
                    }
                    else if (c[j - 4] == 'w' && c[j - 3] == 'h' && c[j - 2] == 'i' && c[j - 1] == 'l' && c[j] == 'e')
                    {
                        whiles[klloud]++;
                    }
                    else if (c[j - 1] == 'i' && c[j] == 'f')
                    {
                        ifs[klloud]++;
                    }
                    else if (c[j - 2] == 'f' && c[j - 1] == 'o' && c[j] == 'r')
                    {
                        fors[klloud]++;
                    }
                    else if (c[j - 3] == 'e' && c[j - 2] == 'l' && c[j - 1] == 's' && c[j] == 'e')
                    {
                        elses[klloud]++;
                    }
                    else if (c[j - 5] == 'p' && c[j - 4] == 'r' && c[j - 3] == 'i' && c[j - 2] == 'n' && c[j - 1] == 't' && c[j] == 'f')
                    {
                        printfs[klloud]++;
                    }
                    else if (c[j - 5] == 'i' && c[j - 4] == 'm' && c[j - 3] == 'p' && c[j - 2] == 'o' && c[j - 1] == 'r' && c[j] == 't')
                    {
                        imports[klloud]++;
                    }
                }
                printf("��%d���ɮ�int��:%d��\n", klloud+1, ints[klloud]);
                printf("��%d���ɮ�include��:%d��\n", klloud+1, includes[klloud]);
                printf("��%d���ɮ�while��:%d��\n", klloud+1, whiles[klloud]);
                printf("��%d���ɮ�if��:%d��\n", klloud+1, ifs[klloud]);
                printf("��%d���ɮ�for��:%d��\n", klloud+1, fors[klloud]);
                printf("��%d���ɮ�else��:%d��\n", klloud+1, elses[klloud]);
                printf("��%d���ɮ�printf��:%d��\n", klloud+1, printfs[klloud]);
                printf("��%d���ɮ�import��:%d��\n", klloud+1, imports[klloud]);
                getch();
                c{} = NULL;
                }
            
            }
            break;
            
    }
}
