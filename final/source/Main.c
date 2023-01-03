#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "string.h"

int main()
{
    char ch,ch2, in[200],in2[200];
    char c[999],c2[999];
    int klloud = 1;
    int i = 0, j = 0, ints[] = { 0 }, includes[] = { 0 }, whiles[] = { 0 }, ifs[] = { 0 }, fors[] = { 0 }, elses[] = { 0 }, printfs[] = { 0 }, imports[] = { 0 };
    int mode;
    //FILE* NMSL;
    printf("注意事項:\n");
    printf("1.請放在與本程式同目錄\n");
    printf("2.需輸入副檔名Ex:test.cpp\n");
    printf("請輸入模式(1.統計 2.比較):");
    scanf("%d", &mode);
    //	printf("%s\n",in);
    switch (mode)
    {
        case 1:
            {
            FILE* NMSL;
            printf("注意事項:\n");
            printf("1.請放在與本程式同目錄\n");
            printf("2.需輸入副檔名Ex:test.cpp\n");
            printf("請輸入檔名:");
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
            printf("int有:%d\n", ints[0]);
            printf("include有:%d\n", includes[0]);
            printf("while有:%d\n", whiles[0]);
            printf("if有:%d\n", ifs[0]);
            printf("for有:%d\n", fors[0]);
            printf("else有:%d\n", elses[0]);
            printf("printf有:%d\n", printfs[0]);
            printf("import有:%d\n", imports[0]);
            getch();
            break;
            }
        case 2:
            {
            
                FILE* NMSL;
                printf("注意事項:\n");
                printf("1.請放在與本程式同目錄\n");
                printf("2.需輸入副檔名Ex:test.cpp\n");
                printf("請輸入檔名1:");
                scanf("%s", &in);
                printf("請輸入檔名2:");
                scanf("%s", &in2);
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
                printf("第%d個檔案int有:%d個\n", klloud, ints[klloud]);
                printf("第%d個檔案include有:%d個\n", klloud, includes[klloud]);
                printf("第%d個檔案while有:%d個\n", klloud, whiles[klloud]);
                printf("第%d個檔案if有:%d個\n", klloud, ifs[klloud]);
                printf("第%d個檔案for有:%d個\n", klloud, fors[klloud]);
                printf("第%d個檔案else有:%d個\n", klloud, elses[klloud]);
                printf("第%d個檔案printf有:%d個\n", klloud, printfs[klloud]);
                printf("第%d個檔案import有:%d個\n", klloud, imports[klloud]);
                getch();
                
                
                FILE* NMSL2;
                NMSL2 = fopen(in2, "r");
                ch2 = fgetc(NMSL2);

                while (ch2 != EOF)
                {

                    c2[i] = ch2;
                    ch2 = fgetc(NMSL2);
                    i++;
                }
                fclose(NMSL2);

                for (j = 0; j < i; j++)
                {
                    if (c2[j - 3] == 'i' && c2[j - 2] == 'n' && c2[j - 1] == 't' && c2[j] == ' ')
                    {
                        ints[klloud+1]++;
                    }
                    else if (c2[j - 6] == 'i' && c2[j - 5] == 'n' && c2[j - 4] == 'c' && c2[j - 3] == 'l' && c2[j - 2] == 'u' && c2[j - 1] == 'd' && c2[j] == 'e')
                    {
                        includes[klloud+1]++;
                    }
                    else if (c2[j - 4] == 'w' && c2[j - 3] == 'h' && c2[j - 2] == 'i' && c2[j - 1] == 'l' && c2[j] == 'e')
                    {
                        whiles[klloud+1]++;
                    }
                    else if (c2[j - 1] == 'i' && c2[j] == 'f')
                    {
                        ifs[klloud+1]++;
                    }
                    else if (c2[j - 2] == 'f' && c2[j - 1] == 'o' && c2[j] == 'r')
                    {
                        fors[klloud+1]++;
                    }
                    else if (c2[j - 3] == 'e' && c2[j - 2] == 'l' && c2[j - 1] == 's' && c2[j] == 'e')
                    {
                        elses[klloud+1]++;
                    }
                    else if (c2[j - 5] == 'p' && c2[j - 4] == 'r' && c2[j - 3] == 'i' && c2[j - 2] == 'n' && c2[j - 1] == 't' && c2[j] == 'f')
                    {
                        printfs[klloud+1]++;
                    }
                    else if (c2[j - 5] == 'i' && c2[j - 4] == 'm' && c2[j - 3] == 'p' && c2[j - 2] == 'o' && c2[j - 1] == 'r' && c2[j] == 't')
                    {
                        imports[klloud+1]++;
                    }
                }
                printf("第%d個檔案int有:%d個\n", klloud + 1, ints[klloud]);
                printf("第%d個檔案include有:%d個\n", klloud + 1, includes[klloud]);
                printf("第%d個檔案while有:%d個\n", klloud + 1, whiles[klloud]);
                printf("第%d個檔案if有:%d個\n", klloud + 1, ifs[klloud]);
                printf("第%d個檔案for有:%d個\n", klloud + 1, fors[klloud]);
                printf("第%d個檔案else有:%d個\n", klloud + 1, elses[klloud]);
                printf("第%d個檔案printf有:%d個\n", klloud + 1, printfs[klloud]);
                printf("第%d個檔案import有:%d個\n", klloud + 1, imports[klloud]);
                getch();
                
                klloud = klloud - 1;
            }
            break;
            
    }
}
