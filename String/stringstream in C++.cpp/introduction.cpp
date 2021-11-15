A stringstream class in C++ is a Stream Class to Operate on strings. The stringstream class Implements the Input/Output Operations on Memory Bases streams i.e. string:

The stringstream class in C++ allows a string object to be treated as a stream. It is used to operate on strings. By treating the strings as streams we can perform extraction and insertion operation from/to string just like cin and cout streams.

These types of operations are mostly useful to convert string to numerical data types and vice versa. The stringstream class also proves to be helpful in different types of parsing.
We can use the str member of the stringstream for this purpose. To use stringstream class in the C++ program, we have to use the header <sstream>.
For Example, the code to extract an integer from the string would be:

string mystr(“2019”);
int myInt;
stringstream (mystr)>>myInt;

Here we declare a string object with value “2019” and an int object “myInt”. Next, we use the stringstream class constructor to construct a stringstream object from the string object. Then using the extraction operator (>>), the value is extracted into myInt. From the above code, the value of myInt will be 2019.