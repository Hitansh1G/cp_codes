

        Member functions

String.constructor() :  Construct string object (public member function ).
String.destructor() : String destructor (public member function )
String.operator=() : String assignment (public member function )
Iterators
Begin() : Return iterator to beginning (public member function )
End() : Return iterator to end (public member function )
Advance() : Increment the iterator position till the specified number mentioned in its arguments.
Next() : Returns the new iterator that the iterator would point after advancing the positions mentioned in its arguments.
Prev() : Returns the new iterator that the iterator would point after decrementing the positions mentioned in its arguments.
Inserter() : Insert the elements at any position in the container.
Rbegin(): Return reverse iterator to reverse beginning (public member function )
Rend() : Return reverse iterator to reverse end (public member function )
Cbegin() : Return const_iterator to beginning (public member function )
Cend() : Return const_iterator to end (public member function )
Crbegin() : Return const_reverse_iterator to reverse beginning (public member function )
Crend() : Return const_reverse_iterator to reverse end (public member function )


        Capacity

Size() : Return length of string (public member function )
Length() : Return length of string (public member function )
Max_size() : Return maximum size of string (public member function )
Resize() : Resize string (public member function )
Capacity() : Return size of allocated storage (public member function )
Reserve() : Request a change in capacity (public member function )
Clear() : Clear string (public member function )
Empty() : Test if string is empty (public member function )
Shrink_to_fit() : Shrink to fit (public member function )
Element access
At() : Get character in string (public member function )
Back() : Access last character (public member function )
Front() : Access first character (public member function )


        Modifiers

Operator+=() : Append to string (public member function )
Append() : Append to string (public member function )
Push_back() : Append character to string (public member function )
Assign(): Assign content to string (public member function )
Insert() : Insert into string (public member function )
Erase() : Erase characters from string (public member function )
Replace() : Replace portion of string (public member function )
Swap() : Swap string values (public member function )
Pop_back() : Delete last character (public member function )


        String operations

Operator[]: Get character of string (public member function )
C_str() : Get C string equivalent (public member function )
Data() : Get string data (public member function )
Get_allocator() : Get allocator (public member function )
Copy() : Copy sequence of characters from string (public member function )
Find() : Find content in string (public member function )
Rfind() : Find last occurrence of content in string (public member function )
Find_first_of() : Find character in string (public member function )
Find_last_of() : Find character in string from the end (public member function )
Find_first_not_of() : Find absence of character in string (public member function )
Find_last_not_of() : Find non-matching character in string from the end (public member function )
Substr() : Generate substring (public member function )
Compare() : Compare strings (public member function )


        Member constants & Non-member function overloads

Npos : Maximum value for size_t (public static member constant )
Operator+ : Concatenate strings .
Relational operators : Relational operators for string.
Swap : Exchanges the values of two strings .
Operator>> : Extract string from stream .
Operator<< : Insert string into stream .
Getline : Get line from stream into string.