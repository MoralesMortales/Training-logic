"""
i = 5
for i in range (Se puede usar revesed() o 1,0,10)(i,10):
    print(i)
"""

class personaje:
    
    def __init__(self, nombre, fuerza, inteligencia, defensa, vida):
        self.__nombre = nombre
        self.__fuerza = fuerza
        self.__inteligencia = inteligencia
        self.__defensa = defensa
        self.__vida = vida
        
    def atributos(self):
        print(f"Their name is {self.__nombre}") 
        print(f"Their strength is {self.__fuerza}")
        print(f"Their intelligence is {self.__inteligencia}") 
        print(f"Their defense is of {self.__defensa}")  
        print(f"Their life is of {self.__vida}\n")
        
    def level_up(self, fuerza, inteligencia, defensa):
       self.__fuerza = self.__fuerza + fuerza
       self.__inteligencia =self.__inteligencia + inteligencia
       self.__defensa =self.__defensa + defensa 
    
    def state_player(self):
        state = self.__vida > 0
        return state
    
    def __state_dead(self):
        self.__vida = 0
        print(self.__nombre, "fue baneado de la vida")
        
    def daño(self, enemy):
        return  self.__fuerza - enemy.__defensa
    
    def attack(self, enemy):
        daño = self.daño(enemy)
        enemy.__vida = enemy.__vida - daño
        print(self.__nombre, "ha realizado ",daño, " puntos de daño a ",enemy.__nombre)
        if enemy.state_player():
            print(enemy.__nombre, " tiene ",enemy.__vida, "ps")
        else:
            enemy.__state_dead()
            
    def get_fuerza(self):
        return self.__fuerza
    
    def set_fuerza(self, fuerza):
        if (fuerza > 0):
            self.__fuerza = fuerza
        else:
          print("\nNo se admiten valores negativos\n")
elpersonaje = personaje("Petra", 30, 1, 5, 100)
elenemigo = personaje("Zorro", 20, 5, 10, 15)

elpersonaje.atributos() 
elenemigo.atributos() 

elpersonaje.level_up(0,5,-1)  

print(elpersonaje.state_player())

elpersonaje.atributos() 
elenemigo.atributos() 

elpersonaje.attack(elenemigo)

elpersonaje.set_fuerza(-9)

elpersonaje.atributos() 
elenemigo.atributos() 
