import time

print("Welcome to Typing Speed Test ⌨️")
print("Type this sentence as fast as you can:\n")
sentence = "GitHub makes it easy to share your code with the world!"
print(sentence)

input("Press Enter when ready...")

start = time.time()
typed = input("\nStart typing: ")
end = time.time()

elapsed = round(end - start, 2)

if typed == sentence:
    print(f"\n✅ Correct! Time taken: {elapsed} seconds")
else:
    print(f"\n❌ Incorrect typing.\nTime taken: {elapsed} seconds")
