def solution(numbers: list, hand: str) -> str:
    '''
    번호 리스트와 주손잡이 정보를 매개변수로 받고
    주어진 규칙에 의하여 누른 손을 str형태로 누적하는 함수

    Args:
        numbers: 순서대로 누를 번호가 담긴 배열
        hand: 왼손잡이인지 오른손잡이인 지를 나타내는 문자열 hand

    Returns:
        번호를 누른 엄지손가락이
        왼손인 지 오른손인 지를 나타내는 연속된 문자열 형태로 return

    '''
    answer = ''
    # 왼손과 오른손의 위치 *은 10 #은 12로 계산함.
    L_pos = 10
    R_pos = 12

    # 입력 받은 number list를 순환한다.
    for num in numbers:
        # 0의 위치는 11로 하여 계산함.
        if num == 0:
            num = 11
        # 왼손과 오른손의 차이를 계산함.
        L_diff = abs(L_pos - num)
        R_diff = abs(R_pos - num)

        # 현재 위치와 눌러야할 번호의 차이가 위아래로 옆으로 한 칸씩 움직일 때 총 움직일 수 있는 step을 계산해봄.
        L_step = L_diff // 3 + L_diff % 3   # 몫은 위아래로 움직일 수 있는 step, 나머지는 옆으로 움직일 수 있는 step
        R_step = R_diff // 3 + R_diff % 3

        # 1,4,7 left hand use
        if num in [1, 4, 7]:
            answer += 'L'
            L_pos = num
        # 3,6,9 right hand use
        elif num in [3, 6, 9]:
            answer += 'R'
            R_pos = num
        # 오른손 입력이 유리할 때
        elif L_step > R_step:
            answer += 'R'
            R_pos = num
        # 왼손 입력이 유리할 때
        elif L_step < R_step:
            answer += 'L'
            L_pos = num
        # 왼손 오른손이 동일할 때 주손을 사용함.
        else:
            if hand.upper()[0] == 'L':
                answer += 'L'
                L_pos = num
            else:
                answer += 'R'
                R_pos = num

    return answer