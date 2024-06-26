# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    random_ints.py                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/27 16:37:10 by zadriouc          #+#    #+#              #
#    Updated: 2024/05/27 16:37:12 by zadriouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import random
import sys

ints = []

len = int(sys.argv[1])

i = 0

while i < len:
	n = random.randint(0, 1000)
	if n not in ints:
		ints.append(n)
		i += 1

string_ints = [str(int) for int in ints]
str_of_ints = " ".join(string_ints)
print(str_of_ints)
