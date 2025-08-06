void main(){
    // it is type-safe , types are determined based on values
    // you can declare most variables without explicitly specifying their type using var.
    var age = 10;
    var name = 'Flash';
    print("Name and age is $name and $age");
    String s = 'hello';
    // variable with type Object can store any type of value
    // Every class inherits from the base class Object
    Object a = 'hello';
    a = 10;
    print(a);
    print(s);
}