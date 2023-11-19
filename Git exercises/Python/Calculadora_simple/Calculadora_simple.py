# Tipos de datos
# Datos primitivos
# int = 5// variable de tipo int
# float = 5.5// variable de tipo float
# booleano = false//variable booleana
# string = "Estos es un string" (E = 0, s = 1, t = 2,, o = 3,...)

# listas = [] (esto es una lista que puede contener multiples variables)
# diccionarios = [ , , ,] Investigalo man

#resultado de un proceso
#suma = 5 + 2

def values():
    value_1= int(input("Primer valor: "))
    value_2= int(input("Segundo valor: "))
    return value_1,value_2


def printanames():
    user_wants = input("1 = suma\n2 = resta\n3 = division\n4 = multiplicacion\n==> ")
    return user_wants
    
def resolve(value_1, value_2, users_want):
    if users_want == "1" or users_want == "2" or users_want == "3" or users_want == "4":
        if users_want == "1":
            result = value_1 + value_2
        elif users_want == "2":
            result = value_1 - value_2
        elif users_want == "3":
            result = value_1 / value_2
        elif users_want == "4":
            result = value_1 * value_2  
        
        return result
    
    else:
        print("Valor no admitido")

      
print("Prueba calculadora\n")
print("Bienvenido a la calculadora simple\n\n")

value_1, value_2 = values()

user_wants = printanames()

resultado_f = resolve(value_1, value_2, user_wants)
print(resultado_f)
