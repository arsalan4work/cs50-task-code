filename = "count.txt"

try:
    with open(filename, "r") as file:
        content = file.read()
        words = content.split()
        print(f"Word count: {len(words)}")
except FileNotFoundError:
    print(f"File '{filename}' not found.")
