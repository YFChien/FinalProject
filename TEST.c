#include <stdio.h>
#include <string.h>

int main(void) {
  
  char in[80] ;  
  printf("注意事項:\n");
  printf("1.請放在與本程式同目錄\n");
  printf("2.需輸入副檔名Ex:test.cpp\n");
  printf("請輸入檔名:");
  scanf("%s",&in);  // 要讀取的文件名輸入 
  char *keywords[] = {"int", "char", "float","include","for","while"};  // 關鍵字列表
  int keyword_counts[6] = {0};  // 用來記錄每個關鍵字出現的次數
  char line[1024];  // 用來讀取文件中的一行

  FILE *fp = fopen(in, "r");  // 打開文件 
  if (fp == NULL) 
  {
    printf("無法打開文件 %s\n", in);
    return 1;
  }

    while (fgets(line, sizeof(line), fp) != NULL) // 逐行讀取文件中的內容
  {
    
    for (int i = 0; i < 6; i++) // 逐個關鍵字檢查是否出現在讀取到的行中
	{
     
      if (strstr(line, keywords[i]) != NULL)  // 如果出現，就把計數器加 1
	  {
        keyword_counts[i]++;
      }
    }
  }

    fclose(fp);  // 關閉文件
  
  printf("在文件 %s 中，int 共出現 %d 次，char 共出現 %d 次，float 共出現 %d 次，include 共出現 %d 次，for 共出現 %d 次，while 共出現 %d 次\n",
         in, keyword_counts[0], keyword_counts[1], keyword_counts[2],keyword_counts[3],keyword_counts[4],keyword_counts[5]);  // 印出結果

  return 0;
}

