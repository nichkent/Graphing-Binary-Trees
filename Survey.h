/*
 * Nicholas Kent
 * CS 124
 * Section A
 */

#ifndef PROJECT1_SURVEY_H
#define PROJECT1_SURVEY_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using std::cout, std:: endl, std::ifstream, std::string, std::vector, std::getline, std::ostream;

/**
 * Class representing entries by participants into a survey conducted to assess tech companies mental health care plans.
 * See: https://www.kaggle.com/datasets/osmi/mental-health-in-tech-survey
 *
 * age: An integer indicating the age of each participant.
 * gender: A string indicating what the participants entered as their gender.
 * country: A string indicating the participants country of origin.
 * state: A string indicating what state the participant is from (If from the US, NA if not).
 * treatmentObtained: A string indicating if the participant received treatment when asked for. ("Yes", "No")
 * remoteStatus: A string indicating if the participant works remotely. ("Yes", "No")
 * physicalProblem: A string indicating if the participant has received a physical health problem from their current
 *      work position. ("Yes", "No")
 * mentalHealthStatus: A string indicating if they have ever received a mental health interview from their company.
 *      ("Yes", "No")
 * physicalHealthStatus: A string indicating if they have ever received a physical health interview from their company.
 *      ("Yes", "No")
 */
class Survey{

private:
    int id, age;
    string gender, country, state, treatmentObtained, remoteStatus, physicalProblem, mentalHealthStatus,
            physicalHealthStatus;

public:
    // Constructors
    Survey(){
    }

    Survey(int id, int age, string gender, string country, string state, string treatmentObtained, string remoteStatus,
           string physicalProblem, string mentalHealthStatus, string physicalHealthStatus)
    {
        this->id = id;
        this->age = age;
        this->gender = gender;
        this->country = country;
        this->state = state;
        this->treatmentObtained = treatmentObtained;
        this->remoteStatus = remoteStatus;
        this->physicalProblem = physicalProblem;
        this->mentalHealthStatus = mentalHealthStatus;
        this->physicalHealthStatus = physicalHealthStatus;
    }

    // Getters
    int getID() const{
        return id;
    }

    int getAge() const{
        return age;
    }

    string getGender() const{
        return gender;
    }

    string getCountry() const{
        return country;
    }

    string getState() const{
        return state;
    }

    string getTreatmentObtained() const{
        return treatmentObtained;
    }

    string getRWS() const{
        return remoteStatus;
    }

    string getPP() const{
        return physicalProblem;
    }

    string getMHS() const{
        return mentalHealthStatus;
    }

    string getPHIS() const{
        return physicalHealthStatus;
    }


    // Setters
    void setID(int id)
    {
        this->id = id;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setGender(string gender)
    {
        this->gender = gender;
    }

    void setCountry(string country)
    {
        this->country = country;
    }

    void setState(string state)
    {
        this->state = state;
    }

    void setTreatmentObtained(string treatmentObtained)
    {
        this->treatmentObtained = treatmentObtained;
    }

    void setRWS(string remoteStatus)
    {
        this->remoteStatus = remoteStatus;
    }

    void setPP(string physicalProblem)
    {
        this->physicalProblem = physicalProblem;
    }

    void setMHS(string mentalHealthStatus)
    {
        this->mentalHealthStatus = mentalHealthStatus;
    }

    void setPHIS(string physicalHealthStatus)
    {
        this->physicalHealthStatus = physicalHealthStatus;
    }

    // Overloaded < operator
    friend bool operator < (const Survey& left, const Survey& right)
    {
        if(right.id > left.id)
        {
            return true;
        }
        return false;
    }

    // Overloaded > operator
    friend bool operator > (const Survey& left, const Survey& right)
    {
        if(right.id < left.id)
        {
            return true;
        }
        return false;
    }

    // Overloaded <= operator
    friend bool operator <= (const Survey& left, const Survey& right)
    {
        if(right.id >= left.id)
        {
            return true;
        }
        return false;
    }

    // Overloaded >= operator
    friend bool operator >= (const Survey& left, const Survey& right)
    {
        if(right.id <= left.id)
        {
            return true;
        }
        return false;
    }

    // Overloaded < operator
    friend bool operator == (const Survey& left, const Survey& right)
    {
        if(right.id == left.id)
        {
            return true;
        }
        return false;
    }

    friend ostream& operator << (ostream& outs, const Survey &survey) {
        outs << survey.id << ", " << survey.age << ", " << survey.gender << ", " << survey.country << ", " << survey.state << ", "
        << survey.treatmentObtained << ", " << survey.remoteStatus << ", " << survey.physicalProblem << ", "
        << survey.mentalHealthStatus << ", " << survey.physicalProblem << endl;
        return outs;
    }

};

/*
 * Reads data from the CSV file into the vector and fills the vector with Survey objects
 */
void getFileContents(string filename, vector<Survey>& survey)
{
    // Create the file reader object and check to see if the file can be opened
    ifstream inFile;
    inFile.open(filename);

    // Prints the header, prints "Could not open file" if the file is in a bad state.
    if(inFile)
    {
        string header;
        getline(inFile, header);
       // cout << header << endl;
    }else{
        // If file is not in a good state
        cout << "Could not open file" << endl;
    }

    // Variables to store data while reading file
    int id = 1, age;
    string gender, country, state, treatmentObtained, remoteStatus, physicalProblem, mentalHealthStatus, physicalHealthStatus;
    char comma, space;

    // Loop until the file ends
    while(inFile && inFile.peek() != EOF) {

        // Read in age
        ++id;
        inFile >> age;
        inFile >> comma;

        // Read in gender
        getline(inFile, gender, ',');

        // Check for if space is present
        if(inFile.peek() == ' ')
        {
            inFile >> space;
            getline(inFile, country, ' ');
            inFile >> comma;
        } else{
            getline(inFile, country, ',');
        }

        // Read in state
        getline(inFile, state, ',');

        // Read in treatmentObtained
        getline(inFile, treatmentObtained, ',');

        // Read in remoteStatus
        getline(inFile, remoteStatus, ',');

        // Read in physicalProblem
        getline(inFile, physicalProblem, ',');

        // Read in mentalHealthStatus
        getline(inFile, mentalHealthStatus, ',');

        // Read in physicalHealthStatus
        getline(inFile, physicalHealthStatus);

        // Save the information in a Survey object and add it to the vector
        survey.push_back(Survey(id, age, gender, country, state, treatmentObtained, remoteStatus, physicalProblem, mentalHealthStatus, physicalHealthStatus));
    }

    // Close the file
    inFile.close();
}

/*
 * Reads through the vector that has now been updated from getFileContents method.
 * Assigns all ages to an accumulator (finalAVG) and prints the average to the console.
 */
void averageAllAges(vector<Survey>& survey, int surSize)
{

    // Accumulator for calculations
    int finalAVG, age;

    // Loop to get all the ages form the vector into the accumulator
    for(Survey s : survey)
    {
        // Use .getAge method on every Survey object and assign it to a variable that overwrites with each loop
        age = s.getAge();

        // Add to accumulator each loop
        finalAVG += age;
    }

    // Find the average
    finalAVG = finalAVG / surSize;

    // Print average to the console
    cout << "The average of all ages entered is " << finalAVG << endl;
}

#endif //PROJECT1_SURVEY_H
