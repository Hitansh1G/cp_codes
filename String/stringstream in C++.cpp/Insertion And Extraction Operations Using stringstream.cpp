#1) Insertion Operation

In order to get the data into a stringstream, we can use two methods.

(i) Using Insertion Operator (<<)
        stringstream ss;
        ss<< “hello,world!!”;

    This inserts “hello,world!!” into the stringstream ss.
    We can also use the str function for assigning data to the stringstream buffer. The str function takes the data string as an argument and assigns this data to the stringstream object.

            stringstream ss;
            ss.str(“Hello,World!!”);

#2) Extraction Operation

We have two methods to get the data out of stringstream or for the extraction operation.

(i) Using str() Function

We can use the str() function to get the data out of stringstream as follows.

    stringstream ss;
    ss<<”Hello,World”;
    cout<<ss.str();

(ii) Using Extraction Operator (>>)

We can use the extraction operator to display the stringstream data as follows.

Stringstream ss;
ss<< “stringstream”;
string str;
ss>>str;
As per the above code, the variable str will have the value of the ss object as a result of the extraction operator action.

Given below is a complete program that demonstrates the usage of Insertion and Extraction operations of the stringstream class.

#include <iostream>
#include <sstream>
#include<string>
using namespace std;
int main()
{
  //insertion operator <<
    stringstream os;
    os << "software "; 
    cout<<os.str();
//str(string) function to read input
    os.str("TestingHelp"); 
//str() function for extraction
    cout<<os.str()<<endl;
//extraction operator (>>)
    stringstream ss;
    ss<<"26 08 2019";
    string mystr1;
    ss >> mystr1;
    string mystr2;
    ss>>mystr2;
    string mystr3;
    ss>>mystr3;
    cout<<mystr1<< "/"<<mystr2<<"/"<<mystr3;
}
Output:

outout 
software TestingHelp
26/08/2019

In the above program, we have shown the insertion methods first i.e. operator << and str(string) function that reads the string into stringstream.

Next, we saw the working of extraction methods which are str () function that gets the data out of the stringstream and operator >>.

Note that for operator >>, as the initial stringstream data consists of whitespaces while assigning the data to a string variable, it will read only till the first whitespace. Hence to convert the entire stringstream object into string data, we need one variable each to read the data separated by whitespace.

Hence in the above program, we need three string variables to get the entire stringstream object data.

