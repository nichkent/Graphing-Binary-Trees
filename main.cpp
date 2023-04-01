#include "AVLTree.h"
#include "SplayTree.h"
#include <vector>
#include <iostream>
#include "Survey.h"
#include "tree_functions.h"

using namespace std;
const string python = "python3";



int main() {
    /// Get contents from CSV file and create the vector
    // Create Survey object with default constraints
    Survey s;
    // Create Survey vector
    vector<Survey> survey_vector;
    // getFileContents method call
    getFileContents("../Survey.csv", survey_vector);

    // Call all tree functions
    binary_tree_functions(survey_vector);
    avl_tree_functions(survey_vector);
    splay_tree_functions(survey_vector);

    string command = python + " ../render.py " + "output_avl.txt";
    system(command.c_str());
    return 0;
}