#include <iostream>
#include <fstream>
#include <string.h>

#include <stdio.h>
#include <string>

using namespace std;


int main(){
//TODO add lines for inputting files names
//TODO check if they exist
//TODO check if they are the same name
//TODO check if you can open the files

    string file1, file2;
    ifstream Mary1, Mary2;

    file1="test.out" ;
    file2="file.out" ;

    Mary1.open( file1.c_str(), ios::binary ); //c_str() returns C-style string pointer
    Mary2.open( file2.c_str(), ios::binary );

    if (!Mary1)
    {cout << "Couldn't open the file  " << file1<<endl;
    return 1;
    }

    if (!Mary2)
    {cout << "Couldn't open the file " << file2 << endl;
    return 1;
    }

//---------- compare number of lines in both files ------------------//
    int c1,c2;
    c1 = 0;
    c2 = 0;
    string str;
    while(!Mary1.eof())
    {
        getline(Mary1,str);
        c1++;
    }
//    Mary1.clear();   //  set new value for error control state  //
//    Mary2.seekg(0,ios::beg);

    while(!Mary2.eof())
    {
        getline(Mary2,str);
        c2++;
    }

    Mary1.clear();  //add
    Mary1.seekg(0,ios::beg);  //add

    Mary2.clear();
    Mary2.seekg(0,ios::beg);

    if(c1 != c2)
    {
        cout << "Different number of lines in files!" << "\n";
        cout << file1 << " has " << c1 << " lines and "<<  file2 <<" has " << c2 << " lines" << "\n";
        return 1;
    }
//---------- compare two files line by line ------------------//
    char string1[256], string2[256];
    int j = 0, error_count =0;
    while(!Mary1.eof())
    {
        Mary1.getline(string1,256);
        Mary2.getline(string2,256);
        j++;
        if(strcmp(string1,string2) != 0)
        {
            cout << "Line "<< j << ":" << endl;
            cout << "[test.out]" << string1 << endl;
            cout << "[file.out]" << string2 << endl;
            error_count++;
        }
    }
    if (error_count == 0) cout << "Woohoo!! Files are the same!!"<< endl;
    return 0;
}
