# Graphing-Binary-Trees

## Summary Of Program:
This program's purpose is to graph the results of the tree binary trees. The three types of binary trees in this program
include: Binary Search Tree, AVL Tree, and Splay Tree which is also the order by which the program works through the tree's
data. Firstly, the program reads from survey.csv. This file is filled with survey results from a mental health survey conducted
across several tech companies. The fields from the data include:
  - Age
  - Gender
  - Country
  - state
  - treatment
  - remote_work
  - phys_health_consequence
  - mental_health_interview
  - phys_health_interview
    Original Source: https://osmhhelp.org/research
    Kaggle: https://www.kaggle.com/datasets/osmi/mental-health-in-tech-survey

The program then creates a vector of Survey objects from the data collected from survey.csv. These objects have the same fields
as the ones listed in the file. Once, the vector is created it then passes that vector into three separate functions located in
tree_functions.h. All the functions have the same logical function except they call to the three trees separately. Within the
functions three objects of each type of tree are created. The first object (Labeled with a 1), holds the values 0-99 in the respective
tree. The second object holds the contents given from a random vector with 100 integers in the respective tree. Finally, the 
last object holds the 1259 Survey objects in the respective tree.

After setting up each tree, the find function (contained in BinarySearchTree.h, AVLTree.h, and SplayTree.h) are called on all
three objects. The find method finds the depth of each object present in the tree and writes it to a file output_binary.txt,
output_avl.txt, or output_splay.txt respectively.

With all the data written to their respective file, main.cpp passes a command to the command line to run render.py. Within
render.py each txt file is read through and the information held within a list called num. This list is then given to the
library matplotlib which is used to graph the data for that trees information. This is done for each object and is then displayed 
to the user's screen where the data can be viewed.

#### Languages used: C++, Python

## Files authored by me
- main.cpp
- Survey.h
- tree_functions.h
- render.py (coauthored by me and my partner Brent Chandler)

## Files not authored by me
- AVLTree.h
- BinarySearchTree.h
- SplayTree.h
All of which were authored by my lovely teacher Lisa Dion of University of Vermont.