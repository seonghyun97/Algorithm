def solution(s: str) -> int:

    '''
    aplphabet과 digit이 섞여있는 문자열 s가 매개변수로 주어집니다.
    s가 의미하는 원래 숫자를 return 하도록 solution 함수

    Args:
        s: aplphabet과 digit이 섞여있는 문자열 s

    Returns:
        s가 의미하는 원래 숫자를 return

    '''

    # 문자열로 되어있는 단어들을 replace 함수를 사용하여 숫자로 바꿔준다.
    s = s.replace('zero', '0')
    s = s.replace('one', '1')
    s = s.replace('two', '2')
    s = s.replace('three', '3')
    s = s.replace('four', '4')
    s = s.replace('five', '5')
    s = s.replace('six', '6')
    s = s.replace('seven', '7')
    s = s.replace('eight', '8')
    s = s.replace('nine', '9')

    # 문자열 s을 answer을 정수형 자료형으로 바꿔준다.
    answer = int(s)

    return answer