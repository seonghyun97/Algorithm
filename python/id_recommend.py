def solution(new_id):

    # 1단계
    new_id = new_id.lower()

    # 2단계
    okay = ['-', '_', '.']
    deny = []
    for n in new_id:
        if n.isalpha() or n.isdigit() or n in okay:
            pass
        else:
            deny.append(n)
    for d in deny:
        new_id = new_id.replace(d, '')

    # 3단계
    new_id = list(new_id)
    cnt = 0
    for i in range(len(new_id)):
        if new_id[i] == '.':
            cnt += 1
        else:
            cnt = 0
        if cnt >= 2:
            new_id[i - 1] = '?'
            cnt = 1
    new_id = ''.join(new_id)
    new_id = new_id.replace('?', '')

    # 4단계
    new_id = list(new_id)
    if new_id:
        while new_id[0] == '.' or new_id[-1] == '.':
            if new_id[0] == '.':
                new_id[0] = '?'
            elif new_id[-1] == '.':
                new_id[-1] = '?'
            else:
                pass
        new_id = ''.join(new_id)
        new_id = new_id.replace('?', '')

    # 5단계
    if not new_id:
        new_id = 'a'

    # 6단계
    if len(new_id) > 15:
        new_id = new_id[:15]
        while new_id[-1] == '.':
            new_id = new_id[:len(new_id) - 1]

    # 7단계
    while len(new_id) < 3:
        new_id += new_id[-1]

    answer = new_id
    return answer