/*=============================================================*/
/* 배열 (Array)                                                */
/* 정의: 연속된 메모리 공간에 동일한 타입의 데이터를 저장하는 구조  */
/* 장점                                                        */
/*  - 인덱스를 통해 빠른 임의 접근 가능 (O(1) 시간복잡도)         */
/*  - 단순한 구조와 구현이 용이함                                */
/* 단점                                                        */
/*  - 고정된 크기로 인해 크기 변경이 어려움                       */
/*  - 요소 삽입/삭제 시 큰 비용이 발생 (O(n) 시간복잡도)          */
/*=============================================================*/

#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};  // 배열 초기화
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);  // 배열 출력
    }
    return 0;
}