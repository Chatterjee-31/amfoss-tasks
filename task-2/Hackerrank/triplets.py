a=raw_input().split()
b=raw_input().split()
c=0
d=0
R=[]
for i in range (len(a)):
      if int(a[i])>int(b[i]):
          c=c+1
      if int(a[i])<int(b[i]): 
          d=d+1
R.append(c)
R.append(d)
print(R)
