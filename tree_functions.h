#ifndef PROJECT1_TREE_FUNCTIONS_H
#define PROJECT1_TREE_FUNCTIONS_H

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include "BinarySearchTree.h"
#include "AVLTree.h"
#include "SplayTree.h"

vector<int> randomize_vector()
{
    // Vector of integers 1 - 100
    vector<int> rand_vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
                            26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48,
                            49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71,
                            72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
                            95, 96, 97, 98, 99, 100};

    // Create random variable
    auto rng = default_random_engine{};

    // Returns randVec in random order
    shuffle(rand_vec.begin(), rand_vec.end(), rng);

    return rand_vec;
}

void binary_tree_functions(vector<Survey> survey_vector)
{
    // Create Trees
    BinarySearchTree<int> bst1;
    BinarySearchTree<int> bst2Rand;
    BinarySearchTree<Survey> bst3Survey;

    // Create depth var
    int depth = 0;
    int *depthPointer = &depth;

    // Create random vector
    vector<int> random_vector = randomize_vector();

    // Add to objects
    for(int i = 0; i < 100; i++)
    {
        bst1.add(i);
        bst2Rand.add(random_vector[i]);
    }

    // Add all the objects from the survey vector into the Survey tree
    for (int i = 0; i < survey_vector.size(); i++)
    {
        bst3Survey.add(survey_vector[i]);
    }

    /// Binary Tree Loops
    // Create outfile object
    ofstream outFile;

    // Open the file
    outFile.open("../data/output_binary.txt");

    outFile << endl << "bst1 output (normal integers): " << endl;

    // Loop to use the find function on the binary search tree
    for(int j = 0; j < 100; j++)
    {
        // Find in the binary tree
        bst1.find(j, depthPointer);
        outFile << depth << endl;
    }

    outFile << endl << "bst2Rand output (random integers): " << endl;

    // Loop to use the find function on the random binary search tree
    for(int o = 0; o < 100; o++)
    {
        // Find in the binary tree
        bst2Rand.find(o, depthPointer);
        outFile << depth << endl;
    }

    outFile << endl << "bst3Survey output (Survey): " << endl;

    // Loop to use the find function on the Survey binary search tree
    for(int m = 0; m < survey_vector.size(); m++)
    {
        // Find in the binary tree
        bst3Survey.find(survey_vector[m], depthPointer);
        outFile << depth << endl;
    }

    // Close the file
    outFile.close();

    // Destroy the trees
    bst1.timber();
    bst2Rand.timber();
    bst3Survey.timber();
}

void avl_tree_functions(vector<Survey> survey_vector)
{
    // Create Trees
    AVLTree<int> avl1;
    AVLTree<int> avl2Rand;
    AVLTree<Survey> avl3Survey;

    // Create depth var
    int depth = 0;
    int *depthPointer = &depth;

    // Create random vector
    vector<int> random_vector = randomize_vector();

    // Add to objects
    for(int i = 0; i < 100; i++)
    {
        avl1.add(i);
        avl2Rand.add(random_vector[i]);
    }

    // Add all the objects from the survey vector into the Survey tree
    for (int i = 0; i < survey_vector.size(); i++)
    {
        avl3Survey.add(survey_vector[i]);
    }

    /// AVL tree loops
    ofstream outFile;

    // Open file
    outFile.open("../data/output_avl.txt");

    outFile << endl << "avl1 output (normal integers): " << endl;

    // Loop to use the find function on the AVL tree
    for(int u = 0; u < 100; u++)
    {
        // Find in the avl tree
        avl1.find(u, depthPointer);
        outFile << depth << endl;
    }

    outFile << endl << "avl2Rand output (random integers): " << endl;

    // Loop to use the find function on the random AVL tree
    for(int b = 0; b < 100; b++)
    {
        // Find in the avl tree
        avl2Rand.find(b, depthPointer);
        outFile << depth << endl;
    }

    outFile << endl << "avl3Survey output (Survey): " << endl;

    // Loop to use the find function on the Survey AVL tree
    for(int g = 0; g < survey_vector.size(); g++)
    {
        // Find in the avl tree
        avl3Survey.find(survey_vector[g], depthPointer);
        outFile << depth << endl;
    }

    // Close the file
    outFile.close();

    // Destroy trees
    avl1.timber();
    avl2Rand.timber();
    avl3Survey.timber();
}

void splay_tree_functions(vector<Survey> survey_vector)
{
    // Create Trees
    SplayTree<int> st1;
    SplayTree<int> st2Rand;
    SplayTree<Survey> st3Survey;

    // Create depth var
    int depth = 0;
    int *depthPointer = &depth;

    // Create random vector
    vector<int> random_vector = randomize_vector();

    // Add to objects
    for(int i = 0; i < 100; i++)
    {
        st1.add(i);
        st2Rand.add(random_vector[i]);
    }

    // Add all the objects from the survey vector into the Survey tree
    for (int i = 0; i < survey_vector.size(); i++)
    {
        st3Survey.add(survey_vector[i]);
    }

    /// Splay tree loops
    ofstream outFile;

    // Open file
    outFile.open("../data/output_splay.txt");

    outFile << endl << "st1 output (normal integers): " << endl;

    // Loop to use the find function on the Splay tree
    for(int k = 0; k < 100; k++)
    {
        // Find in the splay tree
        st1.find(k, depthPointer);
        outFile << depth << endl;
    }

    outFile << endl << "st2Rand output (random integers): " << endl;

    // Loop to use the find function on the random Splay tree
    for(int a = 0; a < 100; a++)
    {
        // Find in the splay tree
        st2Rand.find(a, depthPointer);
        outFile << depth << endl;
    }

    outFile << endl << "st3Survey output (Survey): " << endl;

    // Loop to use the find function on the Survey Splay tree
    for(int l = 0; l < survey_vector.size(); l++)
    {
        // Find in the splay tree
        st3Survey.find(survey_vector[l], depthPointer);
        outFile << depth << endl;
    }

    outFile << endl << "st3Survey output (Finds the same object 5 times): " << endl;

    // Loop to use the find function 5 on the Survey Splay tree
    for(int i = 0; i < survey_vector.size(); i++)
    {
        for(int j = 0; j < 5; j++)
        {
            st3Survey.find(survey_vector[i], depthPointer);
            outFile << depth << endl;
        }
    }

    // Close file
    outFile.close();

    // Destroy the Trees
    st1.timber();
    st2Rand.timber();
    st3Survey.timber();
}

#endif //PROJECT1_TREE_FUNCTIONS_H