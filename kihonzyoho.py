# 2分探索
def search(data, target):
    start, end = 0, len(data) #探索するデータの始点startと終点endを指定
    while start <= end: #探索するデータがある間は繰り返す
        i = (start + end) // 2 #真ん中のデータをiとする
        if data[i] == target: #目的のものが見つかったらその位置iを返す
            return i
        elif data[i] < target:
            start = i + 1
        elif data[i] > target:
            end = i - 1
    return -1 #見つからなかったら-1を返す

# bubblesort
def sort(data):
    for i in range(len(data)-1, 0, -1): #後ろから比較していく
        for j in range(i): #未整列の部分を比較する
            if data[j] > data[j+1]: #隣り合う要素で後ろの方が大きい場合
                data[j], data[j+1] = data[j+1], data[j] #要素を入れ替える。

# 挿入ソート
def sonyu(data):
    for i in range(0, len(data)): #最初から順に整列させていく
        for j in range(i-1, -1, -1): #一番後ろの要素を挿入する場所を探す
