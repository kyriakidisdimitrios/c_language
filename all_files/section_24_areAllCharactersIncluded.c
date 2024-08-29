// #include <assert.h>
// #include <stdio.h>
// #include <stdlib.h>
// #define _CRT_SECURE_NO_WARNINGS
//
//
// //Excercise: Develop a function that recise 2 sequences of lowercase letters and their sizes
//
// //The function should return 1 if all the letters of the first sequence appear in
// //the second sequence. Otherwise it should return 0.
//
// //note*: In thise exercise, we're not talking about finding id there's a sub-string but rather,
// //only if the letters appear (we do not care about the order).
//
// //Example #1. Seq1: {'d','o','g'}   Seq2: {'d','o','o','g'} Function should return 1
// //Example #2. Seq2: {'d','o','g'}   Seq2: {'c','a','t'} Function should return 0
// //Example #3. Seq3: {'l','o','l'}    Seq2: {'l','o','r','d'} Function should return 1
//
//
// int areAllCharactersIncluded(char* seq1,int size1, char* seq2,int size2) {
//     int countArr[26]; {0}; //all letters that can be used
//     int i;
//
//     //Building a counting array for apprearances of all characters in seq2
//     for(i=0;i<size2;i++) {
//         countArr[seq2[i] - 'a']++;
//     }
//     //Removing all appearances of all characters in seq1
//     for(i=0;i<size1;i++) {
//         countArr[seq1[i] - 'a']--;
//     }
//     //Look if there is any negative number to indicate that not all characters of seq1 are included in seq2
//     for(i=0;i<26;i++)
//         if(countArr[i] < 0)
//             return 0;
//     return 1;
//
// }
//
// int main() {
//
//     return 0;
// }