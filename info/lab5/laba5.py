# word = str(input("Логи: "))
# slovo = []
# for l in word:
#     if l.isalpha():
#         slovo.append(l)
#
# print("".join(slovo))



# N = int(input("Высота ёлочки: "))
# k = 1
# o = N - 1
# for i in range(N):
#     print(" " * o,"#" * k)
#     k += 2
#     o -= 1
# print(" " * (N - 1), "#")



# N = int(input("Верхняя граница поиска: "))
# cnt = 0
# for i in range(1, N + 1):
#     str_i = str(i)
#     is_i = 0
#     for j in range(len(str_i)):
#         is_i += int(str_i[j])**(len(str_i))
#     if is_i == i:
#         cnt += 1
# print(cnt)



# text = str(input("Основная строка: "))            NO
# word = str(input("Искомое слово: "))



#                   5 задание
# import random
#
# i = random.randint(1, 100)
# guess = 0
#
# while guess != i:
#     guess = int(input("Очередная догадка: "))
#     if i == guess:
#         print("Угадал!")
#     else:
#         if guess < i:
#             print("Больше")
#         else:
#             print("Меньше")



#                   Задание 6
# message = str(input("Строка: "))
# choice = int(input("Номер действия (1-11): "))
#
# if choice == 1:
#     if " " in message:
#         print("Сообщение является палиндромом")
#     else:
#         print("Сообщение не является палиндромом")
# elif choice == 2:
#     print("Кол-во гласных: ", message.count("a") + message.count("e") + message.count("i") + message.count("o") + message.count("u") + message.count("A") + message.count("E") + message.count("I") + message.count("O") + message.count("U"))
# elif choice == 3:
#     if message.isdigit():
#         print("Только цифры")
#     else:
#         print("Не только цифры")
# elif choice == 4:
#     if message.isalpha():
#         print("Только буквы")
#     else:
#         print("Не только буквы")
# elif choice == 5:
#     print(message[::-1])
# elif choice == 6:
#     print(message.upper())
# elif choice == 7:
#     print(message.lower())
# elif choice == 8:
#     print(message.replace(" ", "_"))
# elif choice == 9:
#     if "@" in message and "." in message and message.count("@") == 1:
#         if message.index("@") < message.index("."):
#             print("Это email")
#         else:
#             print("Это не email")
#     else:
#         print("Это не email")
# elif choice == 10:
#     print(message.split("@")[1])
# elif choice == 11:
#     print("Выход")



#                   Задание 7
# email = str(input("Email пользователя: "))
# password = str(input("Пароль: "))
# prichina = []
# if email.count("@") != 1:
#     prichina.append('Содержит "@" не один раз')
# if email.index("@") > email.index("."):
#     prichina.append('Должно быть "содержит . после @"')
# if email[0] == "@" or email[-1] == "@" or email[0] == "." or email[-1] == ".":
#     prichina.append('Должно быть "не начинается и не заканчивается на @ или ."')
# if len(email) < 6 or len(email) > 30:
#     prichina.append('Должно быть "длина от 6 до 30 символов"')
# if len(password) < 8:
#     prichina.append('Должно быть "длина не меньше 8"')
# if any(ch.isdigit() for ch in password) == False:
#     prichina.append('Нет цифр')
# if any(password.islower() for il in password) == True:
#     prichina.append('Должна быть хотя бы одна строчная')
# if any(password.isupper() for iu in password) == True:
#     prichina.append('Должна быть хотя бы одна заглавная')
# if ("!" in password or "@" in password or "#" in password or "$" in password or "%" in password or "^" in password or "&" in password or "*" in password) == False:
#     prichina.append('Должен быть спецсимвол "!@#$%^&*"')
# if len(prichina) == 0:
#     print("OK")
# else:
#     for i in prichina:
#         print(i)



#                   Задание 8
# line1 = input('Первая строка: ')
# line2 = input('Вторая строка: ')
# line3 = input('Третья строка: ')
#
# c_glasn_1 = line1.count('у') + line1.count('У') + line1.count('е') + line1.count('Е') + line1.count('ы') + line1.count('Ы') + line1.count('а') + line1.count('А') + line1.count('о') + line1.count('О') + line1.count('э') + line1.count('Э') + line1.count('я') + line1.count('Я') + line1.count('и') + line1.count('И') + line1.count('ю') + line1.count('Ю') + line1.count('ё') + line1.count('Ё')
# c_glasn_2 = line2.count('у') + line2.count('У') + line2.count('е') + line2.count('Е') + line2.count('ы') + line2.count('Ы') + line2.count('а') + line2.count('А') + line2.count('о') + line2.count('О') + line2.count('э') + line2.count('Э') + line2.count('я') + line2.count('Я') + line2.count('и') + line2.count('И') + line2.count('ю') + line2.count('Ю') + line2.count('ё') + line2.count('Ё')
# c_glasn_3 = line3.count('у') + line3.count('У') + line3.count('е') + line3.count('Е') + line3.count('ы') + line3.count('Ы') + line3.count('а') + line3.count('А') + line3.count('о') + line3.count('О') + line3.count('э') + line3.count('Э') + line3.count('я') + line3.count('Я') + line3.count('и') + line3.count('И') + line3.count('ю') + line3.count('Ю') + line3.count('ё') + line3.count('Ё')
# if line1 == "" or line2 == "" or line3 == "":
#     print('Не хайку. Должно быть 3 строки')
# elif c_glasn_1 == 5 and c_glasn_2 == 7 and c_glasn_3 == 5:
#     print("Хайку")
# else:
#     print("Не Хайку")



#                   Задание 9
# s = input("Зашифрованное слово, заканчивающееся на #: ")                          NO



#                   Задание 10
# NO