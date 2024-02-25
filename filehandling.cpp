#include<iostream>
#include<fstream>
int main()
{
   std:: ofstream file;
    file.open("mytext.txt");
    file.close();
    

    return 0;
}