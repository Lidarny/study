#   задание 4

# n = int(input("Кол-во сокровищ: "))
# coordinates = []
# for i in range(n):
#     coordinates.append(list(map(int, input("Координаты: ").split())))
# coord_alex = list(map(int, (input("Координаты Александра: ")).split()))
#
# min_coord = [0][:]
# sum_c_a = sum(coord_alex)
# min_sum = sum(coordinates[0])
# for x in coordinates:
#     if sum(x) < min_sum:
#         min_sum = sum(x)
#         min_coord[0] = x[0]
#         min_coord[1] = x[1]
#
# print(min_coord)                                      NO!!!!!!!!!



# #   задание 5
#
# nums = [12, -5, 0, 7, 18, -3, 9, 24, 6, 15]
# even = filter(lambda x: x % 2 == 0, nums)
# more_0 = filter(lambda x: x > 0, nums)
# kratn_3_more_5 = filter(lambda x: x % 3 == 0 and x > 5, nums)
#
# print("Чётные:", list(even))
# print("Положительные:", list(more_0))
# print("Кратные 3 и > 5:", list(kratn_3_more_5))



# #   задание 6
#
# words = ["яблоко", "кот", "программирование", "дом", "молоко"]
# students = [("Аня", 20), ("Борис", 18), ("Вера", 22), ("Глеб", 19)]
# nums = [33, 12, 45, 21, 8, 99]
#
# print(sorted(words, key=len))
# print(sorted(students, key=lambda x: x[1]))
# print(sorted(nums, key=lambda x: x % 10))



# #   задание 7
#
# students = [("Аня", 5), ("Борис", 3), ("Вера", 4), ("Глеб", 5), ("Дина", 2), ("Егор", 4), ("Жанна", 5), ("Зоя", 3)]
#
# m4 = filter(lambda x: x[1] >= 4, students)
# m4 = sorted(m4, key = lambda x: (x[0])[0])
# m4 = sorted(m4, key = lambda x: x[1], reverse = True)
# sum = 0
# for i in range(len(m4)):
#     sum += m4[i][1]
#     print((m4[i])[0], "—", (m4[i])[1])
# print("Средний балл:", sum/len(m4))



# #    задание 8
#
# n_m = input("Рядов, мест: ").split()
#
# n = int(n_m[0])
# m = int(n_m[1])
#
# ok = True
#
# rows = []
#
# print("Матрица зала кинотеатра: ")
# for i in range(n):
#     a = list(map(int, input().split()))
#     if len(a) != m:
#         print(f"Ошибка! В ряду должно быть {m} мест(а)")
#         ok = False
#         break
#     rows.append(a)
#
# if ok:
#     k = int(input("Кол-во чел. в группе: "))
#     cnt_rows = 0
#     for i in rows:
#         cnt_rows += 1
#         if "0"*k in "".join(map(str, i)):
#             break
#     else:
#         print(f"Нет ряда, где {k} человек(а) могут сесть рядом")
#     if ok:
#         print(cnt_rows)



# #   задание 9
#
# n_m = input("Размер матрицы: ").split()
#
# n = int(n_m[0])
# m = int(n_m[1])
#
# matrix = []
#
# for i in range(n):
#     row = []
#     for j in range(m):
#         row.append(0)
#     matrix.append(row)
#
# for i in range(n):
#     for j in range(m):
#         if i == 0 or j == 0:
#             matrix[i][j] = 1
#         else:
#             matrix[i][j] = matrix[i-1][j] + matrix[i][j-1]
# for i in range(n):
#     print(" ".join(map(str, matrix[i])))



# #   задание 10
#
# def tokenize(text):                     NO!!!!!



#   задание 11

# def window(lst, window_size):             NO!!!!!!
