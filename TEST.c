#include <stdio.h>
#include <string.h>

int main(void) {
  
  char in[80] ;  
  printf("�`�N�ƶ�:\n");
  printf("1.�Щ�b�P���{���P�ؿ�\n");
  printf("2.�ݿ�J���ɦWEx:test.cpp\n");
  printf("�п�J�ɦW:");
  scanf("%s",&in);  // �nŪ�������W��J 
  char *keywords[] = {"int", "char", "float","include","for","while"};  // ����r�C��
  int keyword_counts[6] = {0};  // �ΨӰO���C������r�X�{������
  char line[1024];  // �Ψ�Ū����󤤪��@��

  FILE *fp = fopen(in, "r");  // ���}��� 
  if (fp == NULL) 
  {
    printf("�L�k���}��� %s\n", in);
    return 1;
  }

    while (fgets(line, sizeof(line), fp) != NULL) // �v��Ū����󤤪����e
  {
    
    for (int i = 0; i < 6; i++) // �v������r�ˬd�O�_�X�{�bŪ���쪺�椤
	{
     
      if (strstr(line, keywords[i]) != NULL)  // �p�G�X�{�A�N��p�ƾ��[ 1
	  {
        keyword_counts[i]++;
      }
    }
  }

    fclose(fp);  // �������
  
  printf("�b��� %s ���Aint �@�X�{ %d ���Achar �@�X�{ %d ���Afloat �@�X�{ %d ���Ainclude �@�X�{ %d ���Afor �@�X�{ %d ���Awhile �@�X�{ %d ��\n",
         in, keyword_counts[0], keyword_counts[1], keyword_counts[2],keyword_counts[3],keyword_counts[4],keyword_counts[5]);  // �L�X���G

  return 0;
}

