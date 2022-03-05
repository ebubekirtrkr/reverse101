key= "AUCC-1337-CYBER-CLUB"
for i,k in enumerate(key):
    if i%2==0:
        print(hex(ord(k)^13)+",",end=" ")
    else:
        print(hex(ord(k)^37)+",",end=" ")

print()