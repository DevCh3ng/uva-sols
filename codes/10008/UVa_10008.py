def count_text(text):
    n = 26
    chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    uctext = text.upper()
    char_dict = {char: 0 for char in uctext}
    for i in uctext:
        if i in chars:
            char_dict[i] += 1
    sorted_chars = sorted(char_dict.items(), key=lambda item: (-item[1], item[0]))
    for char, value in sorted_chars:
        if (value > 0):
            print(f'{char} {value}')
def main():
    x = int(input())
    wawa = ""
    while x > 0:
        wawa = wawa + str(input())
        x = x - 1   
    # print(wawa)
    count_text(wawa)
        
if __name__ == "__main__":
     main()