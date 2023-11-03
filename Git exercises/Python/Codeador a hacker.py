def translator(text):

    code = {"A": "4", "B": "I3", "C": "[", "D": ")", "E": "3", "F": "|=", "G": "&", "H": "#", "I": "1",
            "J": ",_|", "K": ">|", "L": "1", "M": r"/\/\\", "N": " ^/", "O": "0", "P": " |*", "Q": "(_,)",
            "R": "I2", "S": "5", "T": "7", "U": "(_)", "V": r"\/", "W": r"\/\/", "X": "><", "Y": "j", "Z": "2",
            "1": "L", "2": "R", "3": "E", "4": "A", "5": "S", "6": "b", "7": "T", "8": "B", "9": "g", "0": "o"}

    res = ""

    for word in text:
        if word.upper() in code.keys():
            res += code[word.upper()]
        else:
            res += word

    return res


text=input("Texto a traducir: ")
print((f"Escribiste {text}"))
print(f"El resultado de la traduccion es {translator(text)}. ")