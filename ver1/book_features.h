#ifndef BOOK_FEATURES_H
#define BOOK_FEATURES_H

#define NAME 30 // 헤더에 정의해두면 모든 파일이 공유 가능

// char * : 문자열(배열)의 주소를 받겠다는 뜻
int add_book(char *book_name, char *auto_name, char *publ_name);
void search_book(void);
void rent_book(void);
void return_book(void);

#endif