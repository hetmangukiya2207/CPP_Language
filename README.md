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
  
 ## Chapter :- 02 Expression & Function
  
- Special assignment operators :-
  
      1. Chained Expression
      2. Embedded Expression
            on the sport value
      3. compound Assign Expression(combined)
            multiprocess 
            +=, -=, /=, *=, %=

- Chained :-
  
            main()
            {
            int a,b,c;
            a=b=c=15;
            cout << "A : " << a << endl;
            cout << "B : " << b << endl;
            cout << "C : " << c << endl;
            }

- Embedded :- 
  
            d = a + (b=5) + (c=3);

- Compound :-
  
            int a;
            a += 5;
            // a =15;

- Reference variable :-

            upgreded pointer
            &
            reference variable must be initialize

- Example :-

            main()
            {
            int a=10;
            int &b = a;
            int &c = b;
            int &d = c;
            cout << "A : " << a << endl
            << "B : " << b << endl
            << "C : " << c << endl
            << "D : " << d << endl;
            }

- Function prototyping :-

                        (Pre Declaration)

            void name();
            void main() {
            name();
            }
            void name()
            {
            cout << "Name UDF : " << endl;
            }

- Inline Keywords :-

            - it boosts performance speed by exchanging function’s body while calling.
            - Inline keywords not support when,
            - when function contains calling.
            - when function contains loop & switch case

- Example :-

            inline void sum(int a, int b) {
            cout << "Sum : " << a+b << endl;
            }
            int main() {
            sum(45,5);
            }
  
</b>
