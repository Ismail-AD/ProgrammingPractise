void main() {
  // it is type-safe , types are determined based on values
  // you can declare most variables without explicitly specifying their type using var.
  var age = 10;
  var name = 'Flash';
  print("Name and age is $name and $age");
  String s = 'hello';
  // variable with type Object can store any type of value
  // Every class inherits from the base class Object
  Object a = 10;
  a = 'Now string';
  print(a);
  // requires type check or cast to access members
  // print(a.length); // will cause error
  print(s);

  // NULL SAFETY
  // Prevents null dereference errors (accessing properties/methods on null object which can cause errors)
  // With null safety, the Dart compiler detects these potential errors at compile time.
  String str =
      'Non Nullabe Variable'; // if i dont assign value before using this it will cause error

  // To enable nullability, you add a ? to the end of the type declaration.
  String? strNullable;
  // Use null-safe operator ?. (it checks if the variable is null before accessing .length)
  // Since strNullable is null, the expression doesn't crash, it just returns null
  print(strNullable?.length);

  // final keyword if you dont want to change value of variable
  // Value can be runtime-calculated
  final idOfPerson = 102;
  // idOfPerson = 110; // error
  print(idOfPerson);

  // const : Compile-time constant
  // Value must be known before runtime
  const fixedValue = "zoom";

  print(fixedValue);
}
