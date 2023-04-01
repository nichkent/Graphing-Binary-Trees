import sys
import matplotlib.pyplot as plt
import os
import platform
import subprocess
from subprocess import Popen, PIPE, check_output
import time

filename = sys.argv[1]

#Avl normal integers
ax = plt.subplot(111)
sizes = range(1000, 10001, 1000)
num = []
junk = []

file = open('../data/output_avl.txt', 'r')
content = file.readlines()
i = 0

for line in content:
    if i <= 101:
        i = i+1
        junk.append(line.rstrip('\n'))
for val in junk:
    if val.isdigit():
        digit = int(val)
        num.append(digit)

x = range(0, len(num))
ax.scatter(x, num, color='b')
plt.gcf().canvas.manager.set_window_title('test')
plt.title('AVL Normal Integers')
plt.xlabel('Vector index')
plt.xticks(range(0, 101, 5))
plt.ylabel('Depth')
plt.savefig('../images/Normal_AVL.png')
plt.show()
file.close()

#avl random integers
ax = plt.subplot(111)
num2 = []
junk2 = []

file = open('../data/output_avl.txt', 'r')
content2 = file.readlines()
i = 0

for line in content2:
    i = i+1
    if i <= 204:
        if i >= 104:
            junk2.append(line.rstrip('\n'))
for val in junk2:
    if val.isdigit():
        digit = int(val)
        num2.append(digit)

x2 = range(0, len(num2))
ax.scatter(x2, num2, color='b')
plt.gcf().canvas.manager.set_window_title('test')
plt.title('AVL Random integers')
plt.xlabel('Vector index')
plt.xticks(range(0, 101, 5))
plt.ylabel('Depth')
plt.savefig('../images/Random_avl.png')
plt.show()
file.close()

#avl Survey
ax = plt.subplot(111)
num3 = []
junk3 = []

file = open('../data/output_avl.txt', 'r')
content3 = file.readlines()
i = 0

for line in content3:
    i = i+1
    if i <= 1465:
        if i >= 206:
            junk3.append(line.rstrip('\n'))
for val in junk3:
    if val.isdigit():
        digit = int(val)
        num3.append(digit)

x3 = range(0, len(num3))
ax.scatter(x3, num3, color='b')
plt.gcf().canvas.manager.set_window_title('AVL Survey')
plt.title('AVL Survey')
plt.xlabel('Vector index')
plt.xticks(range(0, 1260, 100))
plt.ylabel('Depth')
plt.savefig('../images/Survey_avl.png')
plt.show()
file.close()

#Binary normal integers
ax = plt.subplot(111)
num4 = []
junk4 = []

file = open('../data/output_binary.txt', 'r')
content4 = file.readlines()
i = 0

for line in content4:
    i = i+1
    if i <= 102:
        if i >= 0:
            junk4.append(line.rstrip('\n'))
for val in junk4:
    if val.isdigit():
        digit = int(val)
        num4.append(digit)

x4 = range(0, len(num4))
ax.scatter(x4, num4, color='b')
plt.gcf().canvas.manager.set_window_title('Binary Normal integers')
plt.title('Binary tree normal integers')
plt.xlabel('Vector index')
plt.xticks(range(0, 105, 5))
plt.ylabel('Depth')
plt.savefig('../images/Binary_Normal.png')
plt.show()
file.close()

#Binary Random integers
ax = plt.subplot(111)
num5 = []
junk5 = []

file = open('../data/output_binary.txt', 'r')
content5 = file.readlines()
i = 0

for line in content4:
    i = i+1
    if i <= 204:
        if i >= 104:
            junk5.append(line.rstrip('\n'))
for val in junk5:
    if val.isdigit():
        digit = int(val)
        num5.append(digit)

x5 = range(0, len(num5))
ax.scatter(x5, num5, color='b')
plt.gcf().canvas.manager.set_window_title('Binary Random integers')
plt.title('Binary tree Random integers')
plt.xlabel('Vector index')
plt.xticks(range(0, 105, 5))
plt.ylabel('Depth')
plt.savefig('../images/Binary_Random.png')
plt.show()
file.close()

#Binary Survey integers
ax = plt.subplot(111)
num6 = []
junk6 = []

file = open('../data/output_binary.txt', 'r')
content6 = file.readlines()
i = 0

for line in content6:
    i = i+1
    if i <= 1465:
        if i >= 206:
            junk6.append(line.rstrip('\n'))
for val in junk6:
    if val.isdigit():
        digit = int(val)
        num6.append(digit)

x6 = range(0, len(num6))
ax.scatter(x6, num6, color='b')
plt.gcf().canvas.manager.set_window_title('Binary Survey integers')
plt.title('Binary tree Survey integers')
plt.xlabel('Vector index')
plt.xticks(range(0, 1470, 100))
plt.ylabel('Depth')
plt.savefig('../images/Binary_Survey.png')
plt.show()
file.close()

#splay tree normal integers
ax = plt.subplot(111)
num7 = []
junk7 = []

file = open('../data/output_splay.txt', 'r')
content7 = file.readlines()
i = 0

for line in content7:
    i = i+1
    if i <= 102:
        if i >= 0:
            junk7.append(line.rstrip('\n'))
for val in junk7:
    if val.isdigit():
        digit = int(val)
        num7.append(digit)

x7 = range(0, len(num7))
ax.scatter(x7, num7, color='b')
plt.gcf().canvas.manager.set_window_title('Splay Tree Normal integers')
plt.title('Splay tree Normal integers')
plt.xlabel('Vector index')
plt.xticks(range(0, 102, 5))
plt.ylabel('Depth')
plt.savefig('../images/Splay_Normal.png')
plt.show()
file.close()

#splay tree Random integers
ax = plt.subplot(111)
num8 = []
junk8 = []

file = open('../data/output_splay.txt', 'r')
content8 = file.readlines()
i = 0

for line in content8:
    i = i+1
    if i <= 204:
        if i >= 104:
            junk8.append(line.rstrip('\n'))
for val in junk8:
    if val.isdigit():
        digit = int(val)
        num8.append(digit)


x8 = range(0, len(num8))
ax.scatter(x8, num8, color='b')
plt.gcf().canvas.manager.set_window_title('Splay Tree Random integers')
plt.title('Splay tree Random integers')
plt.xlabel('Vector index')
plt.xticks(range(0, 105, 5))
plt.ylabel('Depth')
plt.savefig('../images/Splay_Random.png')
plt.show()
file.close()

#splay tree Survey
ax = plt.subplot(111)
num9 = []
junk9 = []

file = open('../data/output_splay.txt', 'r')
content9 = file.readlines()
i = 0

for line in content9:
    i = i+1
    if i <= 1465:
        if i >= 206:
            junk9.append(line.rstrip('\n'))
for val in junk9:
    if val.isdigit():
        digit = int(val)
        num9.append(digit)

x9 = range(0, len(num9))

ax.scatter(x9, num9, color='b')
plt.gcf().canvas.manager.set_window_title('Splay Tree Survey')
plt.title('Splay tree Survey')
plt.xlabel('Vector index')
plt.xticks(range(0, 1270, 100))
plt.ylabel('Depth')
plt.savefig('../images/Splay_Survey.png')
plt.show()
file.close()