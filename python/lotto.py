import array


def solution(lottos: array, win_nums: array)->array:
    """

    Args:
        lottos: 민우가 구매한 로또 번호를 담은 배열 lottos
        win_nums: 당첨 번호를 담은 배열 win_nums

    Returns:
        당첨 가능한 최고 순위와 최저 순위를 차례대로 배열에 담아서 return

    """
    zeros = lottos.count(0)     # lotto 번호 중에서 지워진 번호(0)의 개수를 count한다.
    correct = 0                 # lotto 번호 중에서 맞은 번호가 몇개인지 count한다.

    for w in win_nums:          # win_nums 을 순회하면 맞은 것이 몇 개인지 누적해서 correct에 담는다.
        if w in lottos:
            correct += 1
    max_ = 7 - (correct + zeros)# 7에서 자기가 최고로 맞을 수 있는 갯수(지워진 값도 맞았다고 할 때)를 빼주면 최고 등수가 나옴.
    min_ = 7 - correct          # 7에서 맞은 갯수를 빼주면 최저 등수가 나옴.
    if max_ >= 7:               # 단 한개도 맞추지 못할 경우 탈락이니 7등은 6등과 동일함.
        max_ =6
    if min_ >= 7:
        min_ =6
    answer = [max_, min_]       # 최고 등수와 최저 등수를 answer list에 담아서 return해줌.

    return answer