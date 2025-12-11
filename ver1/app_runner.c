#include <stdio.h>
#include <stdbool.h>
#include "app_runner.h"
#include "book_features.h" // Level 1의 기능을 여기서 불러옵니다.

void run_program(void) {
  int n = 0; // 유저가 선택한 메뉴

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
      // 남은 입력 비우기
      int c;
      while ((c = getchar()) != '\n' && c != EOF) {}
      continue;
    }
    switch (n)
    {
      case 1:
      add_book(); // book_features의 함수 호출
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
      return; // void 함수이므로 return 0가 아니라 그냥 return
      
      default:
      printf("1~5 사이의 번호를 입력하세요.\n");
      break;
    }
    
    printf("\n"); // 보기 좋게 줄 띄우기
    }
}