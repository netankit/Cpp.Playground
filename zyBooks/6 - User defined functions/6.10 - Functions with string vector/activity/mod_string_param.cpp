#include <iostream>
#include <string>
using namespace std;

/*
	Complete the function to replace any period by an exclamation point. Ex: "Hello. I'm Miley. Nice to meet you." becomes:
	"Hello! I'm Miley! Nice to meet you!"
*/

void MakeSentenceExcited(string& sentenceText) {

   /* Your solution goes here  */
	for (int i = 0; i < sentenceText.length(); i++){
		if (sentenceText.at(i) == '.'){
			sentenceText.at(i) = '!';
		}
	}
return;
}

int main() {
   string testStr;

   testStr = "Hello. I'm Miley. Nice to meet you.";
   MakeSentenceExcited(testStr);
   cout << testStr;

   return 0;
}
