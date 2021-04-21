#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> Words{ "hello", "how", "are", "you", "did", "I", "say", "hello", "or", "do",
		"you", "want", "to", "say", "hello", "first" };

	// Build a frequency diagram of words

	map<string, int> WordCount;
	for (auto word : Words)
		WordCount[word]++;

	// Find duplicate words
	for (auto [word, count] : WordCount)
	{
		if (count > 1)
			cout << word << " has " << count << " duplicates" << endl;
	}

	// Which one is the word with most duplicates
	int MaxCount = 0;
	string MaxCountWord = "";
	for (auto [word, count] : WordCount)
	{
		if (count > MaxCount)
		{
			MaxCount = count;
			MaxCountWord = word;
		}
	}
	cout << MaxCountWord << " has most duplicates " << MaxCount << endl;

	return 0;
}
