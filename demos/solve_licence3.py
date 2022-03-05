from z3 import *
solver = Solver()

key = [BitVec(f"flag_{i:02}", 8) for i in range(0, 23)]


solver.add(key[5] * key[1]  +  key[8] -  key[19] == 5695)
solver.add(key[16] + key[4]  *  key[1] *  key[10] == 172201)
solver.add(key[2] * key[5]  *  key[22] +  key[4] == 309786)
solver.add(key[17] - key[6]  *  key[20] *  key[1] == -589997)
solver.add(key[8] + key[18]  +  key[13] *  key[19] == 6001)
solver.add(key[0] + key[13]  *  key[17] *  key[4] == 279290)
solver.add(key[15] + key[3]  -  key[1] +  key[2] == 94)
solver.add(key[14] - key[3]  +  key[10] -  key[19] == -25)
solver.add(key[18] * key[21]  *  key[5] *  key[14] == 19850358)
solver.add(key[17] * key[10]  -  key[22] *  key[7] == -1269)
solver.add(key[19] + key[0]  -  key[8] +  key[10] == 110)
solver.add(key[21] - key[4]  *  key[14] -  key[22] == -2972)
solver.add(key[2] - key[4]  +  key[22] -  key[3] == 24)
solver.add(key[3] + key[12]  *  key[21] *  key[1] == 432887)
solver.add(key[13] - key[16]  *  key[10] +  key[18] == -3268)
solver.add(key[2] - key[14]  +  key[18] -  key[16] == -8)
solver.add(key[11] - key[19]  +  key[16] +  key[15] == 119)
solver.add(key[9] + key[4]  *  key[7] -  key[21] == 2985)
solver.add(key[17] + key[5]  -  key[19] *  key[0] == -4345)
solver.add(key[10] + key[22]  -  key[12] -  key[4] == -7)
solver.add(key[22] - key[21]  *  key[15] +  key[8] == -2877)
solver.add(key[12] + key[22]  *  key[8] *  key[19] == 328585)
solver.add(key[15] * key[3]  -  key[17] -  key[16] == 2866)
solver.add(key[16] - key[6]  *  key[14] -  key[10] == -5843)
solver.add(key[18] - key[2]  *  key[22] *  key[0] == -300428)
solver.add(key[15] * key[22]  +  key[4] *  key[2] == 6120)
solver.add(key[18] * key[22]  *  key[1] *  key[4] == 17682975)
solver.add(key[8] - key[6]  *  key[15] +  key[1] == -3851)
solver.add(key[15] * key[2]  +  key[21] *  key[8] == 7638)
solver.add(key[19] - key[7]  *  key[10] -  key[5] == -2968)

solver.check()
m = solver.model()


solution = sorted([(d, m[d]) for d in m], key=lambda x: str(x[0]))
filtered_solution = [x for x in solution if str(x[0]).startswith("flag")]
flag = ''.join(map(lambda x: chr(int(str(x[1]), 10)), filtered_solution))

print(flag)