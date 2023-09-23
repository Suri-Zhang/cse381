//
// Created by Mona on 9/23/23.
//

#include "hw1.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <vector>

using namespace std;

// Function to read user data from the passwd file
map<int, string> readPasswdFile(const string& passwdFileName) {
    map<int, string> uidToLoginID;
    ifstream passwdFile(passwdFileName);

    string line;
    while (getline(passwdFile, line)) {
        istringstream iss(line);
        string loginID;
        int uid;
        int gid;
        iss >> loginID >> uid >> gid;
        uidToLoginID[uid] = loginID;
    }

    passwdFile.close();
    return uidToLoginID;
}

// Function to read group data from the group file
map<int, vector<int>> readGroupFile(const string& groupFileName) {
    map<int, vector<int>> gidToUids;
    ifstream groupFile(groupFileName);

    string line;
    while (getline(groupFile, line)) {
        istringstream iss(line);
        string groupName;
        int gid;
        string members;
        iss >> groupName >> gid >> members;

        vector<int> uids;
        istringstream membersStream(members);
        string uidString;
       
    }

    groupFile.close();
    return gidToUids;
}

int main(int argc, char* argv[]) {

    return 0;
}
