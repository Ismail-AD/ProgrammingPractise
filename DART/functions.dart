void main() {
  var number = 3;
  print("$number is even number : ${IsEven(number)}");

  performAdd();
  userEmail(email: "HelloWorld@gmail.com");
  userEmail(email: null);


  var listData = [2,3,4];
  // You can pass a function as a parameter to another function. (first-class objects as function)
  listData.forEach(takeSquareAndPrint);

 // variable in which we can assign a function which itself can return bool value
 // we can say that function (object) with type bool
  var functionCanBeAssignedToVariable = (number) => number%2==0;

  // If you remove the return type and the function name, the function is called anonymous function,lambdas, or closures.
  var AddData = (int number,int number2){
    return number+number2;
  };
  print(AddData(4,2));
  
}

bool IsEven(int number) {
  return number % 2 == 0;
}

void takeSquareAndPrint(int number){
  var value = number*number;
  print(value);
}
// Agar aap function define krte waqt {} ka use krte ho to wo parameters "named" ban jate hain.
// named params- Parameters that you pass using name: value format
// if you dont pass any value null is assigned to these params.
void performAdd({int? a, int? b}) {
  print(a);
  print(b);
  if (a != null && b != null) {
    print(a + b);
  }
}

// The => expr (like our number%2==0) syntax is a shorthand for { return expr; }
bool ShortSyntax_IsEven(int number) => number % 2 == 0;

// required likhne ka matlab hai ke caller ko zaroor value deni hogi.
// can be nullable if you write ? after type
void userEmail({required String? email}){
  print("Useremail is $email");
}