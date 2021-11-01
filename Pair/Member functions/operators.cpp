operators(=, ==, !=, >=, <=) : We can use operators with pairs as well. 

using equal(=) : It assigns new object for a pair object. 
Syntax :
pair& operator= (const pair& pr);
This Assigns pr as the new content for the pair object. The first value is assigned the first value of pr and the second value is assigned the second value of pr .
Comparison (==) operator with pair : For given two pairs say pair1 and pair2, the comparison operator compares the first value and second value of those two pairs i.e. if pair1.first is equal to pair2.first or not AND if pair1.second is equal to pair2.second or not .
Not equal (!=) operator with pair : For given two pairs say pair1 and pair2, the != operator compares the first values of those two pairs i.e. if pair1.first is equal to pair2.first or not, if they are equal then it checks the second values of both.
Logical( >=, <= )operators with pair : For given two pairs say pair1 and pair2, the =, >, can be used with pairs as well. It returns 0 or 1 by only comparing the first value of the pair.
For pairs like p1=(1,20) and p2=(1,10) 
p2<p1 should give 0 (as it compares 1st element only & they are equal so its definitely not less), but that isn’t true. Here the pair compares the second element and if it satisfies then returns 1 
(this is only the case when the first element gets equal while using a relational operator > or < only, otherwise these operators work as mentioned above)