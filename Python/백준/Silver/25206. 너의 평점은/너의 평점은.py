import sys
score_sum = 0
major = 0
for _ in range(20):
    list = sys.stdin.readline().split()
    if list[2] == "A+":
        score = 4.5
    elif list[2] == "A0":
        score = 4.0
    elif list[2] == "B+":
        score = 3.5
    elif list[2] == "B0":
        score = 3.0
    elif list[2] == "C+":
        score = 2.5
    elif list[2] == "C0":
        score = 2.0
    elif list[2] == "D+":
        score = 1.5
    elif list[2] == "D0":
        score = 1.0
    elif list[2] == "F":
        score = 0.0
    elif list[2] == "P":
        continue
    
    major += float(list[1])*score
    score_sum += float(list[1])
print(major/score_sum)
