#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    char sentence[] = "GitHub makes it easy to share your code with the world!";
    char typed[200];
    clock_t start, end;
    double time_taken;

    printf("Welcome to Typing Speed Test ⌨️\n");
    printf("\nType this sentence:\n%s\n", sentence);

    getchar(); // press Enter to start
    printf("\nPress Enter when ready...");
    getchar();

    start = clock();
    printf("\nStart typing: ");
    fgets(typed, sizeof(typed), stdin);
    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    // remove newline from input
    typed[strcspn(typed, "\n")] = 0;

    if (strcmp(sentence, typed) == 0)
        printf("\n✅ Correct! Time taken: %.2f seconds\n", time_taken);
    else
        printf("\n❌ Incorrect typing.\nTime taken: %.2f seconds\n", time_taken);

    return 0;
}
