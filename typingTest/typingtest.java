import java.util.Scanner;

public class TypingTest {
    public static void main(String[] args) {
        String sentence = "GitHub makes it easy to share your code with the world!";
        Scanner sc = new Scanner(System.in);

        System.out.println("Welcome to Typing Speed Test ⌨️");
        System.out.println("\nType this sentence:\n" + sentence);

        System.out.println("\nPress Enter when ready...");
        sc.nextLine();

        long start = System.currentTimeMillis();
        System.out.print("\nStart typing: ");
        String typed = sc.nextLine();
        long end = System.currentTimeMillis();

        double timeTaken = (end - start) / 1000.0;

        if (typed.equals(sentence))
            System.out.println("\n✅ Correct! Time taken: " + timeTaken + " seconds");
        else
            System.out.println("\n❌ Incorrect typing.\nTime taken: " + timeTaken + " seconds");

        sc.close();
    }
}
