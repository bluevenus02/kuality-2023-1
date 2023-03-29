## Week 03 [Call by value & Call by reference]

### Call by value (값에 의한 호출)

> 함수가 호출될 때, 메모리 공간 안에서는 함수를 위한 별도의 임시공간이 생성된다. (종료시 사라짐)
> Call by value 방식은 함수 호출 시 전달되는 인자의 값이 매개변수에 복사한다.
> 이때, 복사된 인자의 값은 지역적으로 사용되기 때문에, 함수 안에서 인자 값이 변경되더라도 외부 변수의 값은 변경되지 않는다.

+ 예시
 ``` C
#include <stdio.h>

func1(int n)
{
	n = 20;
	printf("func1 n = %d\n", n);
}


int main()
{
	int n = 100;
	printf("Before func1 : %d\n", n);
	func1(n);
	printf("After func1 : %d\n", n);

}
```

------
### Call by reference (참조에 의한 호출)

> Call by reference 방식도 인자의 값이 매개변수에 복사되는 것은 동일하다. 다만, 복사되는 값이 데이터의 주소 값이라는 차이점이 있다.

+ 예시
``` C
#include <stdio.h>

func1(int *n)
{
	*n = 20;
	printf("func1 n = %d\n", *n);
}


int main()
{
	int n = 100;
	printf("Before func1 : %d\n", n);
	func1(&n);
	printf("After func1 : %d\n", n);

}
```
> 따라서, value 방식과는 다르게 n의 값이 변경되는 것을 알 수 있다.
