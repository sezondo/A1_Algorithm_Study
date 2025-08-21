/*
카지노에서 제일 인기 있는 게임 블랙잭의 규칙은 상당히 쉽다. 카드의 합이 21을 넘지 않는 한도 내에서, 카드의 합을 최대한 크게 만드는 게임이다. 블랙잭은 카지노마다 다양한 규정이 있다.

한국 최고의 블랙잭 고수 김정인은 새로운 블랙잭 규칙을 만들어 상근, 창영이와 게임하려고 한다.

김정인 버전의 블랙잭에서 각 카드에는 양의 정수가 쓰여 있다. 그 다음, 딜러는 N장의 카드를 모두 숫자가 보이도록 바닥에 놓는다. 그런 후에 딜러는 숫자 M을 크게 외친다.

이제 플레이어는 제한된 시간 안에 N장의 카드 중에서 3장의 카드를 골라야 한다. 블랙잭 변형 게임이기 때문에, 플레이어가 고른 카드의 합은 M을 넘지 않으면서 M과 최대한 가깝게 만들어야 한다.

N장의 카드에 써져 있는 숫자가 주어졌을 때, M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 구해 출력하시오.
}
*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>


using namespace std;

int main(){

    int cardChose;
    int cardNumber;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(10, 300000);

    std::cout << "카드 갯수를 선정해주세요" << std::endl;
    std::cin >> cardNumber;

    vector<int> arr(cardNumber);

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = dist(gen);
        std::cout << arr[i] << std::endl;
    }

    std::cout << "딜러는 카드를 뽑아주세요" << std::endl;
    
    std::cin >> cardChose; // 해당카드는 10 <= 카드 <= 300000

    for (int i = 0; i < arr.size();)
    {
        if (arr[i] == cardChose)
        {
            arr.erase(arr.begin() + i);
        }else
        {
            //std::cout << arr[i] << std::endl;
            ++i;
        }
        
    }

    int chose[arr.size][arr.size][arr.size];
    int sum[arr.size][arr.size][arr.size];

    for (size_t i = 0; i < arr.size(); i++)
    {
        for (size_t j = 0; j < arr.size(); j++)
        {
            for (size_t k = 0; k < arr.size(); k++)
            {
                sum[i][j][k] = chose[arr[i]] + chose[arr[j]] + chose[arr[k]];
            }
        }
    }
    
    
    


    return 0;
}
/*
std::random_device rd;        // ① OS가 주는 엔트로피(난수 비트)를 '한 번' 얻는 도구. 주 용도 = 시드(source).
std::mt19937 gen(rd());       // ② 위 rd()로 얻은 값으로 MT 엔진을 '시드'해서 초기화. 이후 gen은 '결정적' PRNG.
std::uniform_int_distribution<int> dist(10, 300000); // ③ [10, 300000] 구간의 균등(정수) 분포 객체. 범위를 '정확히' 지정.
arr[i] = dist(gen);           // ④ dist가 gen에서 비트를 뽑아와 구간 안의 정수 하나로 '매핑'해 반환.



*/


