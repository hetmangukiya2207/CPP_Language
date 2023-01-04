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
  
## Chapter :- 03 OOP Concept
  
- OOP		  =>		Object Oriented Programming
- POP		  =>		Project Oriented Programming
  
- What is object oriented programming ?
            - it is a concept in which case becomes well structured, well organized and increased it’s reusability.
            - every process will be done using object.
            - the complete code will be depended on object.
  
- 4 Principal of OOP :-
 
            - Encapsulation 		=> To combine
            - Inheritance 
            - Polymorphism
            - Data abstraction
  
            Variable  =>  data members          =>  attributer
  
            UDF       =>  data member function  =>  methods
  
- Encapsulation :-
  
            - Setter 
            - Getter 
            - Constructor, destructor
            - Static attributes & method
  
- Inheritance :-
  
            - Simple
            - Multilevel
            - Multiple
            - Hierarchical
            - Hybrid
            - Ambiguity
  
- Polymorphic :-
  
            - to use in multiple way.
  
- Comple time :-
  
            - Method overloading
            - Operator overloading
  
- Run time :-

            - Method overriding
            - Virtual function	
  
- Data abstraction :-	to restict
  
            - Access modifier :-
                            Public
                            Private
                            Protected
  
            - Abstract class :-
                            Pure virtual function

- Class & object :-
  
            - Class :-
                    Combination of data members and data member functions.
                    Blueprint of any process.
  
            - Syntax :-
                     Class	className{
                     Access_modifier :
                     data members 
                     data member function
                     constructor
                     deconstructor
  
            - Object :-
                        (variable)

                      - Instance of class 
                      - Reference of class

                      - Access modifier :-

                              - Private (Default)
                              - Public
                              - Protected
  
## Chapter :- 04 Data Encapsulation
  
- What is data Encapsulation ?

                      - To wrap the code into reusable method of class convert UDFs into data member function and convert variable
                      into data member is called encapsulation.

- Setter :-

                      - A method to take input all r specific attributes.

- Getter :-

                      - A method to give output all or specific attributes.

- This keyword :-

                      - It defecates the class level variable from function level variables.

- Syntax :-

                      this -> variableName;

- Example :-
  
                      class Emp{
                      private :
                      int id;
                      string name;
                      public :
                      void setData(int id, string name)
                      {
                      this->id;
                      this->name;
                      }
                      };
                      int main()
                      {
                      Emp e1;
                      e1.setData(101, "Nayan");
                      }
            
- Nested member function :-

                      voidsetData()	
                      {
                      getData();
                      }
                        
- Static :-

                      static void header() {
                      Emp :: header();
                      }

- ::
                      Scoper resolution operator
                      memebership label operator

                      - common method for all objects which can be accessed by className using scope resolution operator( :: )

- What is static member ?

                      - common member for all object’s which takes the single member allocation.
                      - for all the objects static member will common and only one.
                      - static data member (attributes)
                      - static member function (method)

- Example :-
                      Private :
                      String school
                      (global area)
                      String stud::school = “GSEB”;

- Static member function :-

                         - we can use only static data members in static function, any other attributes want be allowed.

- Friend function :-

                         - it is mainly used to access private attributes of class.
                         - we have o declare friend function in class’s body.
                         - it must be defined (create body) in global area.

- Example :-

                          Class fooclass{
                          Public :
                          // only declaration in class
                          friendvoidfo();
                          };
                          // declaration global area
                          Void foo() {
                          // body
                          }

- Types of friend function :-

                          -Default
                          -Parameterized

- Default Example :-

                            class om{
                            private :
                            string psw = "#om007"
                            public :
                            friend void Gautam();
                            };
                            void Gautam(){
                            om o1;
                            cout << "Password : " << o1.psw << endl;
                            }
                            int main()
                            {
                            om o1;
                            Gautam;
                            }

- Parameterized Example :-

                        class om{
                        private :
                        string psw = "#om007"
                        public :
                        friend void Gautam(om o);
                        };
                        void Gautam(om o){
                        cout << "Password : " << o1.psw << endl;
                        }
                        int main()
                        {
                        om o1;
                        Gautam;
                        }

                        Optional use as a getter of friend function :-

                        class demo{
                        private :
                        int d;
                        public :
                        //setter
                        void setData()
                        {
                        cout << "Enter value of D : ";
                        cin >> d;
                        }
                        friend void fd(demo);
                        };
                        // getter friend
                        void fd(demo d1)
                        {
                        cout << "D : " << d1.d;
                        }
                        int main(){
                        demo d1;
                        d1.setData();
                        d1.fd(d1);
                        }

- Call by value :-

                        - Changes limited to function

- Call by reference :-
                        - Pointer / Reference 
                        - Make changes in original
                        - Value

- What is constructor ?

                        constructor is a block of code which is automatically involved when class is instantiated.

                        instance    =>  object            =>  noun
                        instantiate =>  to create object  =>  verb

- Rules to create Constructor :-

                        - it’s name must be same as class’s name.
                        - it must not have any return Datatype (void, int, char...).
                        - it must not return any value.

- Example :-

                        class demo{
                        private :
                        int d;
                        public :
                        //setter
                        void setData()
                        {
                        cout << "Enter value of D : ";
                        cin >> d;
                        }
                        void getData()
                        {
                        cout << "ID : " << id << endl;
                        }
                        hotel()
                        {
                        cout << "Susawagatam..." << endl;
                        }
                        };
                        int main(){
                        demo d1;
                        }

- Types of constructor :-

                        - Default
                        - Parameterized
                        - Copy
                        - Implicit (Directly)
                        - Explicit (Forcefully)

- What is destructor ?

                        - a block of code which is automatically involved when object is destroyed or deleted.

- Rules to create Destructor :-
                        - it's name must be same as class name starts with tilled operator.
                        - it must not have any return datatype.
                        - It must not return any value.
                        - Destructor can’t have any parameter.

- Example :-
  
                        class hotel{
                        private :
                        int id;
                        public :
                        // destructor
                        ~ hotel(){
                        cout << "Process Ended...";
                        }
                        };
  
## Chapter :- 05 Inheritance
  
- What is Inheritance ?

                        - share attributes and method from one class two another class.
                          Super class=>Base class=>Parent class
                          Sub class =>Derived class=>Child class

- Syntax :-

                      Class parent {
                      Private :
                      attributes 
                      Public :
                      methods
                      };
                      Class child : access modifier parent{
                      // all the parent’s class data is accessible here
                      };
                      Int main() {
                      Int main() {
                      child c;
                      c.parentData();
                      }

- Types of Inheritance :-

- Single level :- 

                    (min class :- 02 & max class :- 02
                    Class A	->	Class B

- Example :-

                    // single inheritence
                    class A {
                    private :
                    int a;
                    public :
                    void setDataA(){
                    }
                    void getDataA(){
                    }
                    };
                    class B : public A{
                    private :
                    int b;
                    public :
                    void setDataB(){
                    }
                    void getDataB(){
                    }
                    };
                    int main()
                    {
                    B b1;
                    b1.setDataA();
                    b1.setDataB();
                    b1.getDataA();
                    b1.getDataB();
                    }

- Multi level :- 

                    (min class :- 02 & max class :- 02)
                    Class A	->	Class B	->	Class C

- Example :-

                    // single inheritance
                    class A {
                    private :
                    int a;
                    public :
                    void setDataA(){
                    }
                    void getDataA(){
                    }
                    };
                    class B : public A{
                    };
                    class C : public B{
                    };
                    int main()
                    {
                    C c1;
                    c1.setDataA();
                    c1.getDataA();
                    }

                    Multi level :- 

                    (min class :- 02 & max class :- 02)
                    Class A	&	Class B	=>	Class C

                    Example :-

                    class A {
                    };
                    class B{
                    };
                    class C : public B, public A{
                    };
                    int main()
                    {
                    C c1;
                    }

- Hierarchical :-

                    (min class :- 02 & max class :- 02)
                    Class A	=>	Class B	&	Class C

- Example :-

                    class A {
                    };
                    class B : public A{
                    };
                    class C : public A{
                    };
                    int main()
                    {
                    B b1;
                    C c1;
                    }

- Ambiguity :- (Duplication)

                    - It accrues when we tries to access some data from two different Sourses which are not directly connected to each other.
                    - It mainly accrues in multiple and hierarchical inheritance.
                    - There are two different way to resolve the ambiguity.
  
- Temporary Solution :-
  
                    - Using scope resolution operator
                      // membership label operator

- Parameterized Solution :-

                    - Using virtual function
                    - Function or attributes which are being accessed from multiple soused are called ambiguous.

- Syntax :-

                    className::variable(AttributesName)/function(MethodName)

- Example :-

                    class weather : public fer, public kel{
                    public :
                    void gatWeather()
                    {
                    cout << "Cel C : " << fer::c << endl;
                    tofer();
                    tokel();
                    }
                    };
                    int main()
                    {
                    weather w;
                    w.gatWeather();
                    }

- Hybrid :-

                    class weather : public fer, public kel{
                    public :
                    void gatWeather()
                    {
                    cout << "Cel C : " << fer::c << endl;
                    tofer();
                    tokel();
                    }
                    };
                    int main()
                    {
                    weather w;
                    w.feh::settmp();
                    w.kel::settmp();
                    w.gatWeather();
                    }
  
## Chapter :- 06 Polymorphism
  
- What is polymorphism ?

                  - polymorphism is a method where we can create multiple formation or structure of single method.
                  - Polymorphism is a combination of two Greek words.
                  - Poly      =>    Multiple
                  - morphs    =>    behaviour / structure / forms

- Types of polymorphism :-

                  - Run time
                  - Compile time

- Run time :-

                  - Method overriding
                  - Virtual function

- Compile time :-

                  - Method overloading
                  - Operator overloading

- Method overloading :-

                  - When we create Sem method with multiple parameters in same class it’s called method overloading.

- Rules :-
  
                  - Class must be same.
                  - Name must be same of all methods.
                  - Parameteres must different of all method.

                  - When float value pass  	=>		(3.14f)

- Example :- 

                  class math{
                  public :
                  void sum(int a,int b)
                  {
                  cout << "Sum : " << a+b << endl;
                  }
                  void sum(int a,int b,int c)
                  {
                  cout << "Sum : " << a+b+c << endl;
                  }
                  };
                  int main()
                  {
                  math m;
                  m.sum(10,5)
                  }

- Method overloading :-

                  - When we recreate the same method in derived class with same parameters it’s called method overloading.

- Rules :-

                  - Class must be derived(child)
                  - Name must be same of all method.
                  - Parameters must be same of all method

- Example :-

                  class math{
                  public :
                  void sum(int a,int b)
                  {
                  cout << "Sum : " << a+b << endl;
                  }
                  };
                  class math2{
                  public :
                  void sum(int m,int n)
                  {
                  cout << "Sum of " << m << " & " << n << " = " << m+n << endl;
                  }
                  };
                  int main()
                  {
                  math m;
                  m.sum(10,5)
                  }

- Different between method overloading & method overriding

                  - Using scope resolution operator  => calling parent class
  
- Overloading :-
    
                  Class       :- Sem
                  Name        :- Sem
                  Parameters  :- Different

  
- Overriding :-
    
                  Class       :- Derived
                  Name        :- Sem
                  Parameters  :- Sem
                  
- Signature :- 

                  Name (Never Change)
                  Parameters
                  Return datatype

- Operator Overloading :-

                  - It is a concept in which we can perform mathematical or logical operations between objects of same class.

- Types of operator overloading :-

                  Unary operator overloading
                  Binary operator overloading

- Example :- (Unary Operator Overloading)

                  #include<iostream>
                  using namespace std;
                  class N{
                    private:
                      int a;
                    public :
                      void setData()
                      {
                        cout << "Enter A : ";
                        cin >> a;
                      }
                      N operator< (N n2)
                      {
                        N tmp;
                        if(a<n2.a)
                        {
                          tmp.a = n2.a;
                          cout << "The Highest Number : " << tmp.a << endl;
                          return tmp;
                        }
                        else if(a>n2.a)
                        {
                          tmp.a = a;
                          cout << "The Highest Number : " << tmp.a << endl;
                          return tmp;
                        }
                        else if(a==n2.a)
                        {
                          tmp.a = a = n2.a;
                          cout << "Bothe Are Same : " << tmp.a << endl;
                        }
                        else
                        {
                          cout << "Invalid Choice..." << endl;
                        }
                      }
                  };
                  int main()
                  {
                    N n1,n2,n3;
                    n1.setData();
                    n2.setData();
                    n3 = n1<n2;
                  }

                  Post		=>		++a
                  Pre		=>		a++

- Example :- (Unary Operator Overloading)

                  #include<iostream>
                  using namespace std;

                  class incre{
                    private :
                      int a;
                    public :
                      void setData()
                      {
                        cout << "Enter A : ";
                        cin >> a;
                      }
                      incre operator++(int){
                         incre j;
                         j.a = ++a;
                         cout << "A : " << j.a << endl;
                         j.a = --a;
                         j.a = --a;
                         cout << "A : " << j.a << endl;
                      }
                  };

                  int main()
                  {
                    incre i,i1,i2;
                    i.setData();
                    i1 = i++;
                  }
                  
## Chapter :- 07 Data Abstraction

- Abstraction 	=>		Hidng

- Hide logic from user.
- Present user from attributes.

Draw away 	=>	To restrict

- How to use data abstraction :-

                - Use access modifier.
                - Abstract class :-
                                  Pure virtual function => Can not be instantiated.

- Access Modifier :-

                Private  		=>	Deafult		=>	limited to access
                Public
                Protected

- Example :-

                #include<iostream>
                using namespace std;
                class Admin{
                  protected :
                    string CompanyName;
                    long long int managerSalary;
                    int employeeSalary;
                    int totalStaff;
                    long long int totalAnnualRevenue;
                    string canTerminate;
                    Admin()
                    {
                      CompanyName = "HR_Petrolium";
                      managerSalary = 100000;
                      employeeSalary = 100000;
                      totalStaff = 10000;
                      totalAnnualRevenue = 100000000;
                      canTerminate = "Manager&Empolyee";
                    }
                    void myAccess()
                    {
                      cout << "===========================================" << endl;
                      cout << "Admin Can Access This..." << endl;
                      cout << "===========================================" << endl;
                      cout << "Company Name    		: " << CompanyName << endl;
                      cout << "Manager Salary  		: " << managerSalary << endl;
                      cout << "Employee Salary 		: " << employeeSalary << endl;
                      cout << "Total Staff     		: " << totalStaff << endl;
                      cout << "Total Annual Revenue : " << totalAnnualRevenue << endl;
                      cout << "You Can Terminate 	: " << canTerminate << endl;
                      cout << "===========================================" << endl << endl << endl;
                    }
                };
                class Manager : protected Admin{
                  protected :
                    void myAccess()
                    {
                      Admin::myAccess();
                      string canterminate = "Empolyee";
                      cout << "===========================================" << endl;
                      cout << "Manager Can Access This..." << endl;
                      cout << "===========================================" << endl;
                      cout << "Company Name    		: " << CompanyName << endl;
                      cout << "Manager Salary  		: " << managerSalary << endl;
                      cout << "Employee Salary 		: " << employeeSalary << endl;
                      cout << "Total Staff     		: " << totalStaff << endl;
                      cout << "You Can Terminate 	: " << canTerminate << endl;
                      cout << "===========================================" << endl << endl << endl;
                    }
                };
                class Emp : private Manager{
                  public :
                    void myAccess()
                    {
                      Manager::myAccess();
                      cout << "===========================================" << endl;
                      cout << "Empolyee Can Access This..." << endl;
                      cout << "===========================================" << endl;
                      cout << "Company Name    		: " << CompanyName << endl;
                      cout << "Employee Salary 		: " << employeeSalary << endl;
                      cout << "===========================================" << endl << endl << endl;
                    }
                };
                int main()
                {
                  Emp e1;
                  e1.myAccess();
                }

  
</b>
