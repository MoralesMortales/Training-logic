"""
i = 5
for i in range (Se puede usar revesed() o 1,0,10)(i,10):
    print(i)
"""

class personaje:
    
    def __init__(self, nombre, fuerza, inteligencia, defensa, vida):
        self.nombre = nombre
        self.fuerza = fuerza
        self.inteligencia = inteligencia
        self.defensa = defensa
        self.vida = vida
        
    def atributos(self):
        print(f"Their name is {self.nombre}") 
        print(f"Their strength is {self.fuerza}")
        print(f"Their intelligence is {self.inteligencia}") 
        print(f"Their defense is of {self.defensa}")  
        print(f"Their life is of {self.vida}\n")
        
    def level_up(self, fuerza, inteligencia, defensa):
       self.fuerza = self.fuerza + fuerza
       self.inteligencia =self.inteligencia + inteligencia
       self.defensa =self.defensa + defensa 
    
    def state_player(self):
        state = self.vida > 0
        return state
    
    def state_dead(self):
        self.vida = 0
        print(self.nombre, "fue baneado de la vida\n")
        
    def daño(self, enemy):
        return  self.fuerza - enemy.defensa
    
    def attack(self, enemy):
        daño = self.daño(enemy)
        enemy.vida = enemy.vida - daño
        print(self.nombre, "ha realizado ",daño, " puntos de daño a ",enemy.nombre)
        if enemy.state_player():
            print(enemy.nombre, " tiene ",enemy.vida, "ps")
        else:
            enemy.state_dead()

elpersonaje = personaje("Petra", 30, 1, 5, 100)
elenemigo = personaje("Zorro", 20, 5, 10, 15)

elpersonaje.atributos() 
elenemigo.atributos() 

elpersonaje.level_up(0,5,-1)  

print(elpersonaje.state_player())

elpersonaje.atributos() 
elenemigo.atributos() 

elpersonaje.attack(elenemigo)

elpersonaje.atributos() 
elenemigo.atributos() 