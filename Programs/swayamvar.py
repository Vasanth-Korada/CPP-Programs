n = int(input())

f = input()
m = input()

cnt_r = m.count('r')
cnt_m = m.count('m')

lst1 = [i for i in f]

for i in f:
  if i == 'r':
    if cnt_r ==0:
      print(len(lst),end="")
      break
    cnt_r -=1
    lst1.pop(0)
  elif i == 'm':
    if cnt_m == 0:
      print(len(lst1),end = "")
      break
    cnt_m -= 1
    lst1.pop(0)
else:
  print(0,end = " ")