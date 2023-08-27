import numpy as np
import random
import csv

ranks = dict()
for x in range(0, 65):
    ranks[x] = 0

for i in range(0, 65536):
    if i % 1000 == 0:
        print(i)
    rows = list()
    file_name = "matrixes-xoodyak/test" + str(i) + ".txt"
    with open(file_name, "r") as fd:
        reader = csv.reader(fd, delimiter=" ")
        for row in reader:
            row.remove("")
            cols = list()
            for el in row:
                cols.append(int(el))
            rows.append(cols)
    mat = np.array(rows)
    rank = np.linalg.matrix_rank(mat)
    ranks[rank] += 1

print(ranks)
