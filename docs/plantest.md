### Модуль solution_test.h 
# Метод negative
Цель: проверка ситуаций, когда уравнение не является квадратным

Тип: негативный
## num1
Входные данные: 0, 0, 1

Ожидаемый результат: fl = 0
## num2
Входные данные: 0, 0, 0

Ожидаемый результат: fl = 0
# Метод greather_0root
Цель: проверка ситуаций, когда уравнение квадратное, но не имеет корней

Тип: положительный
## num1
Входные данные: 1, 0, 8

Ожидаемый результат: fl = -1
## num2
Входные данные: 1, 6, 67

Ожидаемый результат: fl = -1
# Метод greather_1root
Цель: проверка ситуаций, когда квадратное уравнение имеет только один корень

Тип: положительный
## num1
Входные данные: 1, 2, 1

Ожидаемый результат: fl = 1, x1 = -1
## num2
Входные данные: 1, 0, 0

Ожидаемый результат: fl = 1, x1 = 0
# Метод greather_2root
Цель: проверка ситуаций, когда квадратное уравнение имеет два корня

Тип: положительный
## num1
Входные данные: 1, 5, -41

Ожидаемый результат: fl = 2, x1 = -9.373863, x2 = 4.373864
## num2
Входные данные: 1, -4, 3

Ожидаемый результат: fl = 2, x1 = 1, x2 = 3
## num3
Входные данные: 1, 4, 0

Ожидаемый результат: fl = 2, x1 = -4, x2 = 0
## num4
Входные данные: 2, 0, -8

Ожидаемый результат: fl = 2, x1 = 2, x2 = -2
