#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    string sentence = "GitHub makes it easy to share your code with the world!";
    string typed;
    clock_t start, end;
    double time_taken;

    cout << "Welcome to Typing Speed Test ⌨️\n";
    cout << "\nType this sentence:\n" << sentence << endl;

    cin.ignore();
    cout << "\nPress Enter when ready...";
    cin.get();

    start = clock();
    cout << "\nStart typing: ";
    getline(cin, typed);
    end = clock();

    time_taken = double(end - start) / CLOCKS_PER_SEC;

    if (typed == sentence)
        cout << "\n✅ Correct! Time taken: " << time_taken << " seconds\n";
    else
        cout << "\n❌ Incorrect typing.\nTime taken: " << time_taken << " seconds\n";

    return 0;
}
