#include <iostream>
#include <string_view>
#include <array>




#include <deque>
#include <iostream>

class MovingAverage
{
private:
    int m_windowSize;
    int m_sum{ 0 };
    std::deque<double> m_values;   // the memory of past readings

public:
    MovingAverage(int windowSize)
        : m_windowSize{ windowSize }
    {
    }

    double add(double x)
    {
       m_values.push_back(x);
       
       if (m_values.size() > m_windowSize)
       {
          m_values.pop_front();
       }
       for (int i = 0; i < m_values.size(); ++i)
       {
          m_sum += m_values[i];
          
       }
       double average = static_cast<double>(m_sum) / m_values.size();
       m_sum = 0; 
       return average;
    }
};




void passByAdd(int* ptr)
{
  *ptr += 5;
}

std::string askForState()
{
  std::cout<<"Enter the state"<<std::endl;
  std::string state{};
  std::getline(std::cin>>std::ws, state);
  return state;
}
 enum class Animals
 {
    pig, chicken, goat, cat, dog, duck
 };
std::string_view getAnimalName(Animals animal) 
  {
    switch(animal)
    {
      case Animals::pig: return "Pig";
      case Animals::chicken: return "Chicken";
      case Animals::goat: return "Goat";
      case Animals::cat: return "Cat";
      case Animals::dog: return "Dog";
      case Animals::duck: return "Duck";
    }

  }

  void printNumberOfLegs(Animals animal) 
  {
    switch(animal)
    {
      case Animals::pig: std::cout<<"This animal has 4 legs"<<std::endl;
        break;
      case Animals::chicken: std::cout<<"This animal has 2 legs"<<std::endl;
      case Animals::goat:
      case Animals::cat:
      case Animals::dog:
      case Animals::duck:
        std::cout<<"This animal has 2 legs"<<std::endl;
        break;
    }
    
    
  }

enum  Color {
  red, green, blue
};

enum State
{
  Moving,
  Stopped,
  IDLE
};

constexpr std::string_view stateToString(State state)
{
  switch(state)
  {
    case Moving: return "Moving";
    case Stopped: return "Stopped";
    case IDLE: return "IDLE";
  }
}

constexpr std::string_view colorToString(Color color)
{
  switch(color)
  {
    case red: return "Red";
    case green: return "Green";
    case blue: return "Blue";
  }
}




int main() {
   // int w1 = 4.5; //this will cause a warning because of implicit conversion from double to int
  //  int w2 {5.5}; // this will cause an error because of narrowing conversion from double to int
   // int w3 (5.5); // this will also cause a warning because of implicit conversion from double to int   
     //int x;
   // std::cout<<int{returnValue()}<<std::endl;

   // std::cout<<sizeof(x)<<std::endl;

    
    //return EXIT_SUCCESS;
   /* std::cout<<"`Enter two integers to multiply: "<<std::endl;
    int a{};
    std::cin>>a;
    int b{};
    std::cin>>b;
    std::cout<<"The product of "<<a<<" and "<<b<<" is "<<calculateNums(a, b)<<std::endl;
    return 0;*/


   /* bool isOld = ageCalc();
    if (isOld)
    {
        std::cout<<"You are oldddddddd!"<<std::endl;
    }

    else
    {
      std::cout<<"Enjoy while you are young!"<<std::endl;
    }
    

    std::cout<<"Enter a number to check if it is prime: "<<std::endl;
    int num{};
    std::cin>>num;
    std::cout<<std::boolalpha<<isPrime(num)<<std::endl;
    std::cout<<"enter your name:"<<std::endl;
    std::string name{};
    std::getline(std::cin>>std::ws, name);
    std::cout<<"Hello "<<name<<std::endl;
    
  int x{5};
  int& ref = x;
  if (&x ==&ref)
  {
    std::cout<<"The address of x and ref are the same"<<std::endl;
  }
  printAddress(x, x);
  */
  int x{5};
  std::cout<<"The value of x before passByAdd is: "<<x<<std::endl;
  passByAdd(&x);
  std::cout<<"The value of x after passByAdd is: "<<x<<std::endl;
  
  std::string state = askForState();
  std::cout<<"The state you entered is: "<<state<<std::endl;
  
  enum class Colors
  {
    Red,
    Green,
    Blue
  };

  enum class Animals
  {
    pig, chicken, goat, cat, dog, duck
  };
  
  std::string_view getAnimalName(Animals animal);

  Colors color = Colors::Red;
  int colorInt = static_cast<int>(color);
  std::cout<<"The integer value of the color is: "<<colorInt<<std::endl;
  std::cout<<"The color you selected is: "<<colorToString(static_cast<Color>(color))<<std::endl;




 
  MovingAverage ma(3);
  ma.add(1.0);
  ma.add(2.0);
  ma.add(3.0);
  std::cout<<"The moving average is: "<<ma.add(4.0)<<std::endl; // should print 3.0 (average of 2.0, 3
  


}

