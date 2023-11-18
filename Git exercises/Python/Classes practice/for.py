"""
i = 5
for i in range (Se puede usar revesed() o 1,0,10)(i,10):
    print(i)
"""

class personaje:
    nombre = ""
    fuerza = 0
    inteligencia = 0
    defensa = 0
    vida = 90
    
    def __init__(self, nombre, fuerza, inteligencia, defensa, vida):
        self.nombre = nombre
        self.fuerza = fuerza
        self.inteligencia = inteligencia
        self.defensa = defensa
        self.vida = vida
        
    def atributos(self):
        print(f"Their name is {self.nombre}") 
        print(f"Their name is {self.fuerza}")
        print(f"Their name is {self.inteligencia}") 
        print(f"Their name is {self.defensa}")  
        print(f"Their name is {self.vida}") 
        

elpersonaje = personaje("namee", 13, 21, 37 ,718)

elpersonaje.atributos() 