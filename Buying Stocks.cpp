from os import *
from sys import *
from collections import *
from math import *

from typing import *

def maximumProfit(n: int, k: int, profits: List[int]) -> int:
    # Write your code here.
    output = 0
    for i in range(k):
        if max(profits) < 1:
            continue
        output += max(profits)
        profits.remove(max(profits))
    return output