// INFIX to Postfix
// Let's solve: ( A + B ) * ( C - D ) / ( E + F * G )
// stack : / 
// ans : AB+CD-*EFG*+/
// Let's solve: A + (B - C) * D + E / (F + G)
// stack : + / ( +
// ans : ABC-D*+EFG + /+


// INFIX to Prefix
// Data: (A + B) * (C - D)
// reverse : ) D - C ( * ) B + A )
// brackets reset : ( D - C ) * ( B + A )
// do postfix to this one
// stack: 
// ans: DC-BA+*
// ab esko reverse krdo
// *+AB-CD

// A + B * ( C ^ D - E ) ^ ( F + G * H ) - I
// reverse: I - ) H * G + F ( ^ ) E - D ^ C ( * B + A
// brackets correction: I - ( H * G + F ) ^ ( E - D ^ C ) * B + A
// do postfix
// stack : +
// answer : I H G * F + E D C ^ - ^ B * - A +
// reverse : + A - * B ^ - ^ C D E + F * G H I


// postfix to infix
// A B C * + D E / -
// stack : ((A + (B*C)) - (D / E))
// upcoming operator : * , +
// temp op 1: B * C -> (B*C) push
// temp op 2: A + (B*C)-> (A + (B*C)) push
// temp op 3: D / E -> (D / E) push
// temp op 4: (A + (B*C)) - (D / E) -> ((A + (B*C)) - (D / E)) push

// A B C ^ D E - * + F G * -
// stack: ((A+((B^C)*(D-E)))-(F*G))


// prefix to infix
// - + A * B C D
// stack k upr top pr jo hoga wo left bny ga fr operator fr next top right pr
// stack: (((B*C) + A) - D)

// upcoming values (from right to left): * + -
// temp op1: (B*C)
// temp op2: (C*D) + A
// temp op3: (((C*D) + A) - D)

// - * A B / C D
// stack : ((A * B) - (C / D))
// temp op1: (C / D)
// temp op2: (A * B)
// temp op3: ((A * B) - (C / D))

// Prefix → Postfix
// * + A B - C D
// stack: D C - B A
// jab multiple aya dono ko uthao  (C D - )(A B +)
// answer: A B + C D - *

// + * A B ^ - C D E
// stack: AB*CD-E^+
// op = C D -
// op CD-E^
// A B *


// Postfix to Prefix 
// A B C * + D E / -
// stack:- +A*BC/DE
// temp: 

// Postfix evaluation:
// 5 3 2 * + 9 -
// stack:11 -9 = 2 
// op: 3 * 2
// op: 5 + 6

// 4 5 7 2 + - * 3 +
// stack: -13
// op: 

// prefix evulaition
// + * 2 3 - 10 / 8 2
// stack: 6 6 
// op: 