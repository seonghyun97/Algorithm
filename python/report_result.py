def solution(id_list: list, report: list, k: int) -> list:
    """

    Args:
        id_list: 이용자의 ID가 담긴 문자열 배열
        report: 각 이용자가 신고한 이용자의 ID 정보가 담긴 문자열 배열
        k: 정지 기준이 되는 신고 횟수

    Returns: 각 유저별로 처리 결과 메일을 받은 횟수를 배열 return

    """
    report = list(set(report))                          # 중복되는 신고를 정리한다.
    check = [[] for _ in range(len(id_list))]           # check list를 만든다. 사용자가 누구를 신고했는지 담는 리스트
                                                        # idlist의 순서대로 각 리스트에 신고한 사용자의 index가 들어간다.
    reportsum = [0 for _ in range(len(id_list))]        # 사용자별로 신고를 당한 횟수를 누적한다.
    answer = []                                         # 각 사용자별로 처리 결과 메일을 받은 횟수 배열

    for r in report:
        a, b = r.split(' ')                             # a, b 문자열을 받아서 index로 바꾼다.
        a = id_list.index(a)
        b = id_list.index(b)
        check[a].append(b)                              # 사용자가 신고한 index를 list에 담는다.
        reportsum[b] += 1                               # 신고당한 사람은 신고당한 횟수를 누적한다.

    for spams in check:                                 # 자신이 신고한 사람이 각 리스트로 담겨있는 리스트를 순회한다.
        alarms = 0
        for spam in spams:
            if reportsum[spam] >= k:                    # 자신이 신고한 사람이 정지 기준을 충족하면 사용자가 받게되는 alarm의 수를 정해준다.
                alarms += 1
        answer.append(alarms)

    return answer
