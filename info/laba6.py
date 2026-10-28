# #     задание A

# import random
# bilet = []
# for i in range(6):
#     bilet.append(random.randint(1, 49))
#
# print(bilet)



# #    задание B

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

# import random
# or_re = []
# for i in range(1000):
#     or_re.append(random.choice(["0", "P"]))
#
# for x in range(len(or_re)):
#     if ((or_re[x] == or_re[x+1]) and (or_re[x+1] == or_re[x+2]) and (or_re[x]) == or_re[x+2]):
#         spisok_itog = (or_re[0:(x+3)])
#         break
# for j in range(len(spisok_itog)):
#     print(spisok_itog[j], end = " ")
# print(f"(попыток: {len(spisok_itog)})")



# # задание E

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
