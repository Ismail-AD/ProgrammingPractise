void main() {
  int number = 10;
  double percentage = 10.99;
  // Both int and double are subtypes of num. so with this type we can store integer or float value
  num numOrFloating = 1;
  numOrFloating += 1.5;
  print(numOrFloating);

  String a = "HELLO";
  bool isBool = true;

  // Conversions
  // 1. Int -> String
  var integerValue = 10;
  var str = integerValue.toString();
  print('lenght is ${str.length}');

  // 2. String to Int
  var str1 = '20';
  var integerValue1 = int.parse(str1);
  print("Value of integer is $integerValue1");

  if (str == str1) {
    print('both strings are same');
  } else {
    print('Both strings are different');
  }
  

}
