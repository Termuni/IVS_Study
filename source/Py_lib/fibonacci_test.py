def Fibonacci(n):
    """
    매개변수(인수)로 들어온 n값 미만의 피보나치 수열을 출력하는 함수
    ex. 인수로 10 -> 0, 1, 1, 2, 3, 5, 8
    """
    a, b = 0, 1   #내부적으로 튜플 (a, b) = (0, 1)로 할당됨
    while a < n:
        print(a, end='. ')
        a, b = b, a + b
    print()  #개행용 빈 프린트
    print(__name__)
if __name__ == '__main__':
    Fibonacci(100)
    print(__name__, "에서 테스트함")