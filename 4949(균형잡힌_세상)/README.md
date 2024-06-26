4949 - 균형잡힌_세상
==========

[개요]
--
> * 문자열을 받아 "()" "[]" 가 짝을 이루는지 체크하라
> * 짝을 이루면 "yes"를 출력하고 아니면 "no"를 출력하라.

[아이디어]
--
> * 특정 여는 괄호가 나오게 되면 재귀문을 들어가서 조건에 따라 특정 닫는 괄호가 나오거나 문자열의 끝에 닿을때 까지 반복하면 체크하면 된다.
> * 다시 여는 괄호가 나오면 한번 더 재귀를 들어가서 탐색해보자.
> * 다른 여는 괄호가 나오면 해당 괄호를 체크하는 재귀를 들어가자.
> * 탐색이 끝나게 되면 true or false를 return하게 한다.

[풀이방법]
--
> 1. getline함수를 사용하여 문자열을 1줄씩 받는다.
> 2. 받은 문자열을 for문을 통해 각 문자를 하나씩 체크한다.
> 3. 만약 '(' or '[' 가 나오게 되면 해당 괄호의 닫는 괄호 or '\0'가 나올때까지 문제 없는지 확인하는 재귀문을 호출한다.
> 4. 재귀문은 true or false를 return 하며, 특정 조건에 따라 작동한다.
> 5. 조건 1 - 재귀문에 들어온 조건과 같은 모양의 닫는 괄호가 나오면 true를 return 한다.
> 6. 조건 2 - 재귀문에 들어온 조건과 다른 모양의 닫는 괄호 or 문자열의 끝에 다다르면 false를 return 한다.
> 7. 조건 3 - 특정 모양의 여는 괄호가 나오면, 해당 괄호를 체크하는 재귀문을 호출하여 해당 재귀문에 false를 return 하는 경우 false를 return 하고, true를 return 하게 되면 다시 재귀문을 반복한다.
> 8. 아무런 조건에 해당 되지 않으면 재귀문을 return하여 계속 반복한다.
> 9. 모든 재귀문을 빠져나오게 되면 true, false에 따라 flg를 1, 0으로 초기화한다.
> 10. 문자열을 모두 체크한 후, flg를 확인하여 1이면 true / 0이면 false를 출력한다.
> 11. 온점만 들어올 때 까지 위의 과정을 계속 반복한다.
