#include <bits/stdc++.h>
using namespace std;
void updateOdd(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}

void update(int *arr)
{
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int *arr = new int[5];
    int arr2[] = {9, 28, 7};
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
    // updateOdd(arr);

    // update(arr2);

    // ofstream outfile("DOOM.txt");
    // ofstream outfile2;
    // outfile2.open("DOOM2.txt",ios::app);
    // // outfile << "WORLD"
    // //         << endl;
    // outfile2 << " Noob" ;
    // outfile2.close();
    // outfile.close();

    ifstream reader("DOOM2.txt");
    string s;
    // while(getline(reader,s)){
    //     cout<<s<<endl;
    // }
    // while(reader>>s){
    //     cout<<s<<" ";
    // }
    // reader.clear();
    // reader.seekg(0,ios::beg);
    // cout<<endl<<endl;
    // char c;
    // while(reader.get(c)){
    //     cout<<c<<" ";
    // }
    // reader.close();

    // fstream file;

    // // First, write some data
    // file.open("student.txt", ios::out);
    // if (file.is_open()) {
    //     file << "John Doe 85" << endl;
    //     file << "Jane Smith 92" << endl;
    //     file << "Bob Johnson 78" << endl;
    //     file.close();
    // }

    // // Now read the data
    // file.open("student.txt", ios::in);
    // if (file.is_open()) {
    //     string name, surname;
    //     int score;

    //     cout << "Student Records:" << endl;
    //     while (file >> name >> surname >> score) {
    //         cout << "Name: " << name << " " << surname
    //              << ", Score: " << score << endl;
    //     }
    //     file.close();
    // }

    int x = 1;
    switch (x)
    { // x = 1
    case 1:
        cout << "One"; // Executes, no break
    case 2:
        cout << "Two "; // Falls through, executes
    case 3:
        cout << "Three "; // Falls through, executes
    default:
        cout << "Default"; // Falls through, executes
    }
    // try{
    //     throw runtime_error("400");

    // }
    // // Catches any type of exception:  ... and exception
    // catch(const exception& msg){
    //     cout<<":CATCHED"<<endl;
    // }
    return 0;
}