10816 - 숫자 카드2
==========

[개요]
--
> * 상근이가 N개의 숫자카드를 가지고 있다.
> * M개의 정수가 주어진다.
> * N개의 카드 중 M개의 각 정수들이 몇개 있는지 구하라.

[아이디어]
--
> * 받을 수 있는 최대 정수의 크기는 -10,000,000 ~ 10,000,000 까지이다.
> * 따라서, 음의 정수 / 양의 정수를 담을 10,000,001 크기 배열을 만들어 개수를 세어주면 된다.

[풀이방법]
--
> 1. 음의 정수 / 양의 정수를 담을 '10000001' 크기의 static int 배열을 2개 만들고 0으로 초기화 시킨다.
> 2. N 카드 개수만큼 반복문을 돌리면서 x를 받아오고, x를 배열의 idx로 사용하여 해당 idx에 값을 1씩 올려준다.
> 3. M개 만큼 반복문을 돌리면서 x를 받아오고, x를 배열의 idx로 사용하여 해당 idx의 값을 출력한다.

[유의사항]
--
> * 해당 문제에서 시간초과로 인해 2번 실패했다.
> * 시간 초과를 해결하기 위해 입/출력을 빠르게 해줄 필요가 있다.
> * 'std::endl' 대신 '\n'을 사용하면 출력이 빨라지는 효과가 있다.
> * 또한, ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); 과 같은 함수를 사용하여 입/출력을 최적화 시켜줄 필요가 있다.
