void main() {
  var itisMap = {};
  itisMap['Adil'] = 01;
  itisMap['Ali'] = 02;
  itisMap['Asif'] = 03;

  var listOfInt = [2, 3, 1];
  print(listOfInt);

  for (int i = 0; i < listOfInt.length; i++) {
    print(listOfInt[i]);
  }
  print("FOR-IN STYLE");
  // if we dont need to know about counter use for-in loops
  for (var item in listOfInt) {
    print(item);
  }
  print("FOR EACH STYLE");
  listOfInt.forEach(print);
  var i = 0;
  while (i != listOfInt.length) {
    print(listOfInt[i]);
    i++;
  }

// on - when you only care about the type of exception you dont need exception object
// Use catch when you want to access the exception object (to log it, show a message, etc.)
  try {
    var allowed = false;
    if(!allowed){
     throw Error.safeToString("NOT ALLOWED!");
    }
  } on IntegerDivisionByZeroException {
    print("Anything");
  }
  catch (e) {
    print(e);
  }
}
