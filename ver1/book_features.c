#include <stdio.h>
#include "book_features.h"

// 배열은 포인터(char *)로 받으면 됩니다.
int add_book(char *book_name, char *auto_name, char *publ_name)
{
  printf("추가할 책의 제목 : ");
  scanf("%s", book_name); // %S -> %s로 변경, 배열 이름이 곧 주소이므로 & 불필요

  printf("추가할 저자의 이름 : ");
  scanf("%s", auto_name);

  printf("추가할 출판사의 이름 : ");
  scanf("%s", publ_name);

  return 0; // 성공 시 0 반환
}

void search_book(void) 
{
  printf("[디버깅] 책 검색 기능 호출\n");
}

void rent_book(void) 
{
  printf("[디버깅] 책 대여 기능 호출\n");
}

void return_book(void) 
{
  printf("[디버깅] 책 반납 기능 호출\n");
}