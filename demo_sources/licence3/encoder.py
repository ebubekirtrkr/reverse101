
import random
operations="+-*"
OP_LENGTH=30
key= list(map(ord,"AUCC-CYBER-CLUB-LICENCE"))
"key[i] op1 key[j] op2 key[k]"
print("int check_key(char *key){")
print(f"\tif(strlen(key)!={len(key)})\n\t\treturn 0;")
dist=[0]*len(key)
for __ in range(OP_LENGTH):
    op1,op2,op3 = random.choices(operations,k=3)
    i,j,k,l = random.sample(range(0, len(key)), 4)
    dist[i]+=1
    dist[j]+=1
    dist[k]+=1
    dist[l]+=1
    line=f"key[{i}] {op1} key[{j}]  {op2}  key[{k}] {op3}  key[{l}]"
    res=eval(line)
    print(f"\tif ({line} != {res})"+"\n\t\treturn 0;")
print("\treturn 1;")
print("}")
print(f"// {dist}")