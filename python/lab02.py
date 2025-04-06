# Você está planejando comprar uma quantidade específica de um produto e deseja escolher 
# a loja que oferece a melhor promoção. Duas lojas, A e B, vendem o mesmo produto pelo mesmo preço unitário,
# mas cada uma oferece descontos diferentes. Sua tarefa é determinar qual loja oferece a melhor economia
# com base nas condições de desconto fornecidas.
# Você precisa comprar k unidades do produto, onde k é um número inteiro fornecido na entrada. 
# Ambas as lojas vendem o produto pelo mesmo preço unitário P, mas aplicam descontos de maneiras distintas:

#Loja A: Oferece um desconto fixo de X% sobre o valor total da compra.
#Loja B: Oferece uma promoção do tipo "pague Y, leve Z", ou seja, você paga pelo preço de Y unidades, mas leva Z unidades. Essa promoção pode ser aplicada várias vezes. Dependendo da quantidade, pode ser mais vantajoso levar mais unidades para reduzir o custo total, aproveitando melhor a promoção.

import math

# Entrada de dados
k = int(input("Quantidade desejada (k): "))
p = float(input("Preço unitário (P): "))
x = float(input("Desconto fixo da Loja A (X%): "))

y = int(input("Na promoção da Loja B, pague Y: "))
z = int(input("Na promoção da Loja B, leve Z: "))

# Loja A: desconto percentual sobre o total
total_a = k * p * (1 - x / 100)

# Loja B: calcular o mínimo custo possível para obter pelo menos k unidades
min_custo_b = float('inf')

# Vamos testar todas as quantidades possíveis de pacotes da promoção até cobrir k
max_pacotes = (k + z - 1) // z + 1  # Garantia de cobrir até mais que k

for pacotes in range(max_pacotes + 1):
    unidades_promo = pacotes * z
    unidades_faltando = max(0, k - unidades_promo)
    custo = pacotes * y * p + unidades_faltando * p
    min_custo_b = min(min_custo_b, custo)

# Comparação e resultado
print(f"Custo total na Loja A: R$ {total_a:.2f}")
print(f"Custo total na Loja B: R$ {min_custo_b:.2f}")

if total_a < min_custo_b:
    print("Mais vantajoso comprar na Loja A.")
elif min_custo_b < total_a:
    print("Mais vantajoso comprar na Loja B.")
else:
    print("Ambas as lojas oferecem o mesmo custo.")
