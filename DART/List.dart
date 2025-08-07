void main() {

  // list: group of objects
  var listOfInt = [2, 3, 1];
  print(listOfInt);


  // adding items in empty list
  var emptyList = [];
  emptyList.add('A');
  emptyList.add('B');
  emptyList.add('C');
  print(emptyList);

  List<int>? nullable;

  print(nullable?.length);

// SETS
  var RollNumbers = {1,2,3,1}; // 1 will be removed as set is collection of unique elements.
  print(RollNumbers);

  // To create an empty set, use {} preceded by a type argument, or assign {} to a variable of type Set
  var emptySet = <String>{};
  Set<String> emptySet2 = {};
  emptySet.add('H');
  emptySet.add('I');
  emptySet.add('J');
  print(emptySet);

// synatx for map is same and if you forget to sepcify type as we do in set then dart will create
// that variable as map type
// Each key can occur only once (if you repeat only one will be stored)
  var itisMap = {};
  itisMap['Adil'] = 01;
  itisMap['Ali'] = 02;
  itisMap['Asif'] = 03;

  print(itisMap);
  var alsoMap = {
    1:2.9,
    3:3.1,
    2:1.0
  };
  print(alsoMap);

  

}
