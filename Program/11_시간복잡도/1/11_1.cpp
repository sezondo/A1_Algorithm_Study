/*
오늘도 서준이는 알고리즘의 수행시간 수업 조교를 하고 있다. 아빠가 수업한 내용을 학생들이 잘 이해했는지 문제를 통해서 확인해보자.

입력의 크기 n이 주어지면 MenOfPassion 알고리즘 수행 시간을 예제 출력과 같은 방식으로 출력해보자.

MenOfPassion 알고리즘은 다음과 같다.

MenOfPassion(A[], n) {
    i = ⌊n / 2⌋;
    return A[i]; # 코드1
}
*/

#include <stdio.h>
#include <iostream>
#include <string>

int MenOfPassion(int n){

    int i = n/2;
    return 1;
}

int main(){

    int num;
    int num2;

    std::cout << "숫자 입력 : " << std::endl;
    std::cin >> num;  

    num2 = MenOfPassion(num);

        std::cout << num2 << std::endl;


    return 0;
}



