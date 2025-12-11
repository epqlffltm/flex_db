/*
2025-12-11
flex_db ver1
기능:
  1)배열로 입력, 출력 받기 test
*/

#include <stdio.h>
#include <stdbool.h>

#define NAME 30 // 책 제목, 저자, 출판사 이름 길이

int add_book(char *book_name, char *auto_name, char *publ_name);

void search_book(void);

void rent_book(void);

void return_book(void);

// -----------------------------------------------------------
// 메인 함수
// -----------------------------------------------------------

int main(void)
{
  int n = 0;      // 유저가 선택한 메뉴
  int result = 0; // 함수 실행 결과(에러 코드) 저장용

  // 데이터를 저장할 변수 (나중에는 구조체 배열로 변경 예정)
  char book_name[NAME];
  char auto_name[NAME];
  char publ_name[NAME];

  while (true)
  {
    printf("도서 관리 프로그램 \n");
    printf("메뉴를 선택하세요 \n");
    printf("1. 책을 새로 추가하기 \n");
    printf("2. 책을 검색하기 \n");
    printf("3. 책을 빌리기 \n");
    printf("4. 책을 반납하기 \n");
    printf("5. 프로그램 종료 \n");
    printf("선택: ");
    
    if (scanf("%d", &n) != 1)
    {
      printf("숫자를 입력하세요.\n");
      // 잘못된 입력 버퍼 비우기
      int c;
      while ((c = getchar()) != '\n' && c != EOF) {}
      continue;
    }
    
    switch (n)
    {
      case 1:
      result = add_book(book_name, auto_name, publ_name);
      if (result == -1) 
      {
        printf("입력 중 오류가 발생했습니다.\n");
      }
      break;
      
      case 2:
      search_book();
      break;
      
      case 3:
      rent_book();
      break;
      
      case 4:
      return_book();
      break;
      
      case 5:
            printf("good bye\n");
            return 0;
        default:
            printf("1~5 사이의 번호를 입력하세요.\n");
            break;
        }

        printf("\n"); // 보기 좋게 줄 띄우기
    }

    return 0;
}

int add_book(char *book_name, char *auto_name, char *publ_name)
{
  printf("추가할 책의 제목 : ");
  if (scanf("%s", book_name) != 1)
  return -1;

  printf("추가할 저자의 이름 : ");
  if (scanf("%s", auto_name) != 1)
  return -1;

  printf("추가할 출판사의 이름 : ");
  if (scanf("%s", publ_name) != 1)
  return -1;

  printf("[확인] 입력 완료: %s / %s / %s\n", book_name, auto_name, publ_name);
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