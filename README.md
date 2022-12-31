# CPP_Language

## Chapter :- 01 Introduction to CPP Language

<b>POP 		=>		Produrel Oriented Programming		=>	C Language 

OOP 		=>		Object Oriented Programming 		=>	CPP, Dart, Java, Python, etc... 

  
 * History Of CPP
  
 Danish Richi 		=>	C Language (1978)

Bjarne Stroustrup	=>	PH.D in OOP
                  =>	Join in ATNT Company
                  =>	Bell Laboratry
                  =>	1984

1980				=>	C With Object

  
 * Different between C & CPP
  
  
| **TOPIC**       |      **C**      |      **C++**      |
| :---         |     :---:      |          ---: |
| **FILE EXTENSION**   | .C     | .CPP    |
| **RETURN TYPE**    | void       | int      |
| **OUTPUT**    | printf       | cout     |
| **INPUT**    | scanf       | cin     |
  
 - Syntax of cout :-
  
  cout << “hello World”;
  
  (<< :- insertion operation)
  
  - Syntax of cin :-
  
cin >> variableName;
  
(>> :- extraction operator)
  
  - Cin, cout, object header file name type :-
  
using namespace std;

- ::	=>	membership label operator
  
=>	std :: cout << “Hello”;

- Manipulator :-
  
New line 		=>	<< endl;

- User manipulater make :-

  Syntax :-

        ostream & h (ostream&output)
        {
        return output << “Hello word...”;
        }

- Example :-
  
        #include<iostream>
        using namespace std;
        int main()
        {
        int n;
        cout << "Enter value of N : ";
        cin >> n;
        cout << "Value of N : " << n;
        cout << "The End...";
        }
  
 
  
</b>
