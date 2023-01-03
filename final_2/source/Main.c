#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "string.h"

int main()
{
    int mode;
    char* key[] = { "int","char","float","for","while","if","print","scanf" };
    printf("歡迎使用關鍵字偵測與比較器\n");
    printf("模式1為單獨偵測，模式2為兩個檔案比較，模式3為跳出\n");

    do
    {
        printf("請選擇模式:");
        scanf("%d", &mode);

        switch (mode)
        {
        case 1 :
            {
                char name1[100]={0};
                printf("請輸入檔案名稱(含副檔名!):");
                scanf("%s", &name1);
                int key_counter[8] = { 0 };
                char code1[2000] = { 0 };
                FILE* fpt1 = fopen(name1, "r");
            
                if (fpt1 == NULL)
                    {
                        printf("檔案無法開啟，請檢察檔名是否輸入正確!\n");
                        return 0;
                    }
            
                while (fgets(code1, sizeof(code1), fpt1) != NULL)
                    {
                        for (int i = 0; i < 8; i++)
                            {
                                if (strstr(code1, key[i]) != NULL)
                                    {
                                        key_counter[i]++;
                                    }
                            }
                    }

                fclose(fpt1);
                printf("在第一個程式中:\n");
                for (int i = 0; i < 8; i++)
                    {
                        printf("%20s有:%10d個\n", key[i], key_counter[i]);
                    }
                break;
            }
        case 2:
            {
            char name1[100] = { 0 },name2[100]={0};
            printf("請輸入檔案第一個名稱(含副檔名!):");
            scanf("%s", &name1);
            printf("請輸入檔案第二個名稱(含副檔名!):");
            scanf("%s", &name2);
            int key_counter1[8] = { 0 },key_counter2[8]={0};
            char code1[2000]={0}, code2[2000] = {0};
            
            FILE* fpt1 = fopen(name1, "r");

            if (fpt1 == NULL)
            {
                printf("檔案無法開啟，請檢察檔名是否輸入正確!\n");
                return 0;
            }

            while (fgets(code1, sizeof(code1), fpt1) != NULL)
            {
                for (int i = 0; i < 8; i++)
                {
                    if (strstr(code1, key[i]) != NULL)
                    {
                        key_counter1[i]++;
                    }
                }
            }

            fclose(fpt1);
            printf("在第一個程式中:\n");
            for (int i = 0; i < 8; i++)
            {
                printf("%20s有:%10d個\n", key[i], key_counter1[i]);
            }

            FILE* fpt2 = fopen(name2, "r");

            if (fpt2 == NULL)
            {
                printf("檔案無法開啟，請檢察檔名是否輸入正確!\n");
                return 0;
            }

            while (fgets(code2, sizeof(code2), fpt2) != NULL)
            {
                for (int i = 0; i < 8; i++)
                {
                    if (strstr(code2, key[i]) != NULL)
                    {
                        key_counter2[i]++;
                    }
                }
            }

            fclose(fpt2);
            printf("在第二個程式中:\n");
            for (int i = 0; i < 8; i++)
            {
                printf("%20s有:%10d個\n", key[i], key_counter2[i]);
            }
            break;
            }
        default:
            break;
        }
        
    } while (mode !=3);
}
