#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "string.h"

int main()
{
    int mode;
    char* key[] = { "int","char","float","for","while","if","print","scanf" };
    printf("�w��ϥ�����r�����P�����\n");
    printf("�Ҧ�1����W�����A�Ҧ�2������ɮפ���A�Ҧ�3�����X\n");

    do
    {
        printf("�п�ܼҦ�:");
        scanf("%d", &mode);

        switch (mode)
        {
        case 1 :
            {
                char name1[100]={0};
                printf("�п�J�ɮצW��(�t���ɦW!):");
                scanf("%s", &name1);
                int key_counter[8] = { 0 };
                char code1[2000] = { 0 };
                FILE* fpt1 = fopen(name1, "r");
            
                if (fpt1 == NULL)
                    {
                        printf("�ɮ׵L�k�}�ҡA���˹��ɦW�O�_��J���T!\n");
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
                printf("�b�Ĥ@�ӵ{����:\n");
                for (int i = 0; i < 8; i++)
                    {
                        printf("%20s��:%10d��\n", key[i], key_counter[i]);
                    }
                break;
            }
        case 2:
            {
            char name1[100] = { 0 },name2[100]={0};
            printf("�п�J�ɮײĤ@�ӦW��(�t���ɦW!):");
            scanf("%s", &name1);
            printf("�п�J�ɮײĤG�ӦW��(�t���ɦW!):");
            scanf("%s", &name2);
            int key_counter1[8] = { 0 },key_counter2[8]={0};
            char code1[2000]={0}, code2[2000] = {0};
            
            FILE* fpt1 = fopen(name1, "r");

            if (fpt1 == NULL)
            {
                printf("�ɮ׵L�k�}�ҡA���˹��ɦW�O�_��J���T!\n");
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
            printf("�b�Ĥ@�ӵ{����:\n");
            for (int i = 0; i < 8; i++)
            {
                printf("%20s��:%10d��\n", key[i], key_counter1[i]);
            }

            FILE* fpt2 = fopen(name2, "r");

            if (fpt2 == NULL)
            {
                printf("�ɮ׵L�k�}�ҡA���˹��ɦW�O�_��J���T!\n");
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
            printf("�b�ĤG�ӵ{����:\n");
            for (int i = 0; i < 8; i++)
            {
                printf("%20s��:%10d��\n", key[i], key_counter2[i]);
            }
            break;
            }
        default:
            break;
        }
        
    } while (mode !=3);
}
