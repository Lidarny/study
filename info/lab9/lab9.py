import matplotlib.pyplot as plt
import numpy as np
from matplotlib.animation import FuncAnimation
import math
s = [x for x in range(0, 251)]
t = []

for x in range(1, 250):
    t.append((2*math.pi)/x)

t.append(0)
t = t[::-1]
t = np.array(t)
print(t)

fig, ax = plt.subplots(figsize=(8, 3))
ax.set_xlim(0, 100)
ax.set_ylim(0, 10)

dot, = ax.plot([], [], 'ro', ms=10)   # запятая!

def update(frame):
    dot.set_data([frame], [5])         # X = frame, Y = 5
    return dot,

ani = FuncAnimation(fig, update, frames=250, interval=30)
plt.show()
