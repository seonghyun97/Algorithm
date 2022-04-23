def solution(n: int, lost: list, reserve: list) -> int:
    """
       전체 학생의 수 n, 체육복을 도난당한 학생들의 번호가 담긴 배열 lost, 
       여벌의 체육복을 가져온 학생들의 번호가 담긴 배열 reserve가 매개변수로 주어질 때, 
       체육수업을 들을 수 있는 학생의 최댓값을 return 하도록 solution 함수를 작성 
    Args:
        n: 전체 학생의 수
        lost: 체육복을 도난당한 학생들의 번호가 담긴 배열
        reserve: 여벌의 체육복을 가져온 학생들의 번호가 담긴 배열

    Returns:
         체육수업을 들을 수 있는 학생의 최댓값을 return
    """

    # doub list를 만들어준다. double 두번 겹친다는 의미임. reserve와 lost사이에 겹치는 요소를 저장하는 역할을 한다.
    doub = []

    for r in reserve:       # reserve를 순회하면서 lost와 같은 값이 있으면 doub에 추가한다.
        if r in lost:
            doub.append(r)

    for d in doub:          # doub을 순회하면서 겹치는 값이 있으면 삭제해준다.
        reserve.remove(d)
        lost.remove(d)

    # 전체 학생 수에서 도난 당한 학생의 수를 빼서 현재 체육복을 가지고 있는 사람의 수를 answer에 저장한다.
    answer = n - len(lost)

    lost.sort()             # lost와 reserve를 sort해준다.
    reserve.sort()

    for l in lost:          # lost를 l이 순회 한다.
        # l의 앞뒤 학생이 reserve에 있나 확인을 한다. 확인 후 reserve에서 지워준다. 그리고 체육복을 챙겨주었으니 answer을 하나 증가시켜준다.
        if l - 1 in reserve:
            reserve.remove(l-1)
            answer += 1
            continue        # 여분옷을 받았다면 밑에 코드를 시행하지 않고 바로 for문으로 돌아간다.

        if l + 1 in reserve:
            reserve.remove(l+1)
            answer += 1
    return answer
