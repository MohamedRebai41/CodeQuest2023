from random import choice


tests = 100
index = 2
file_name = f"test{str(index).zfill(2)}.in"
with open(file_name, 'w') as file:
    file.write(str(tests) + '\n')
    for i in range(tests):
        characters = ['.', '#', '|']
        length = pow(10, 6) // tests
        string = ""
        for j in range(length):
            string += choice(characters)
        file.write(str(len(string)) + '\n')
        file.write(string + '\n')
