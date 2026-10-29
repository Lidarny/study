# #     задание A
#
# import random
# bilet = []
# for i in range(6):
#     bilet.append(random.randint(1, 49))
#
# print(bilet)



# #    задание B
#
# prodazhi = str(input("Kол-вo проданных единиц: "))
# prodazhi = list(map(int, prodazhi.split()))
# uspeshnie_prodazhi = []
#
# for i in range(len(prodazhi) - 1):
#     if prodazhi[i+1] > prodazhi[i]:
#         uspeshnie_prodazhi.append(prodazhi [i+1])
# for x in range(len(uspeshnie_prodazhi)):
#     print(uspeshnie_prodazhi[x], end=" ")



# #        задание C
#
# X = int(input("Рост Андрея: "))
# heights = input("Росты учащихся в строю: ")
# heights = list(map(int, heights.split()))
# heights.append(X)
# position = 0
# heights = (sorted(heights))
# print(heights)
# for i in range(len(heights)):
#     if heights[i] == X:
#         position = i
#         break
# print(len(heights) - position)



# # задание D
#
# import random
# or_re = []
# for i in range(1000):
#     or_re.append(random.choice(["0", "P"]))
# for x in range(len(or_re)):
#     if ((or_re[x] == or_re[x+1]) and (or_re[x+1] == or_re[x+2]) and (or_re[x]) == or_re[x+2]):
#         spisok_itog = (or_re[0:(x+3)])
#         break
# for j in range(len(spisok_itog)):
#     print(spisok_itog[j], end = " ")
# print(f"(попыток: {len(spisok_itog)})")



# # задание E
#
# depths = input("Карта сокровищ: ")
# depths = list(map(int, depths.split()))
# depths_otvet = []
# for i in range(1, len(depths) - 1):
#     if (depths[i - 1] < depths[i]) and (depths[i + 1] < depths[1]):
#         depths_otvet.append(depths[i])
#
# if len(depths_otvet) != 0:
#     max_depths_otvet = max(depths_otvet)
#     depths.remove(max_depths_otvet)
# print(depths)



# # задание F
#
# card = input("Номер карты: ")
# even = [int(d) for d in card[1::2]]
# odd = [int(d) for d in card[::2]]
# sum_even = sum(even)
# sum_2odd = 0
# for i in odd:
#     i = i * 2
#     if i > 9:
#         i = i - 9
#     sum_2odd += i
# if (sum_even + sum_2odd) % 10 == 0:
#     print("Корректный номер")
# else:
#     print("Некорректный номер")



# #   задание G

# n = int(input("Кол-во слов: "))
# words = []
# abbrev = []
# for i in range(n):
#     words.append(input("Слово: "))
#
# for x in words:
#     if len(x) <= 10:
#         abbrev.append(x)
#     else:
#         x = str(x[0]) + str(len(x)-2) + str(x[-1])
#         abbrev.append(x)
# for i in range(n):
#     print(abbrev[i])



# #   задание H
#
# n = int(input("Кол-во комнат: "))
# rooms = []
# free_rooms = 0
# for i in range(n):
#     rooms.append(input("Занято и максимум: ").split())
# for x in rooms:
#     if int(x[1]) - int(x[0]) >= 2:
#         free_rooms += 1
# print(free_rooms)



# задание I

# s = (input("кол-во чисел | сдвиг: ")).split()
# n_k = [int(x) for x in s]
# b = str(input("числа: ")).split()
# a = [int(x) for x in b]
# if n_k[0] >= n_k[1]:
#     answer =
# else:
#
# print(answer)