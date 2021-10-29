Tokenizing a string denotes splitting a string with respect to some delimiter(s). There are many ways to tokenize a string. In this article four of them are explained:

Using stringstream

A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream.
Below is the C++ implementation : 

                    // Tokenizing a string using stringstream
                    #include <bits/stdc++.h>

                    using namespace std;

                    int main()
                    {
                        
                        string line = "GeeksForGeeks is a must try";
                        
                        // Vector of string to save tokens
                        vector <string> tokens;
                        
                        // stringstream class check1
                        stringstream check1(line);
                        
                        string intermediate;
                        
                        // Tokenizing w.r.t. space ' '
                        while(getline(check1, intermediate, ' '))
                        {
                            tokens.push_back(intermediate);
                        }
                        
                        // Printing the token vector
                        for(int i = 0; i < tokens.size(); i++)
                            cout << tokens[i] << '\n';
                    }


Using strtok()

// Splits str[] according to given delimiters.
// and returns next token. It needs to be called
// in a loop to get all tokens. It returns NULL
// when there are no more tokens.
char * strtok(char str[], const char *delims);

                    // C/C++ program for splitting a string
                        // using strtok()
                        #include <stdio.h>
                        #include <string.h>

                        int main()
                        {
                            char str[] = "Geeks-for-Geeks";

                            // Returns first token
                            char *token = strtok(str, "-");

                            // Keep printing tokens while one of the
                            // delimiters present in str[].
                            while (token != NULL)
                            {
                                printf("%s\n", token);
                                token = strtok(NULL, "-");
                            }

                            return 0;
                        }

