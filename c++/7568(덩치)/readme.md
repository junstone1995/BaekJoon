https://www.acmicpc.net/problem/7568
---
* pair 클래스
 > <utility> 헤더에 존재
 `template <class T1,class T2>struct pair;`
 > 사용법
 > pair <[type1],[type2]> p
 > p.first : p 의 첫번째 인자 반환
 > p.second : p 의 두번째 인자 반환
 > make_pair(변수1,변수2) : 변수 1과 변수 2가 들어간 pair를 생성
 > operator로 (==,!=,<,>,<=,=>)가 정의 되어있어서 사용이 가능하다.
 *sort 알고리즘에 의해 정렬이 가능하다.*
