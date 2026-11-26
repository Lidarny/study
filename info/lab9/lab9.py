import matplotlib.pyplot as plt
import numpy as np
from matplotlib.animation import FuncAnimation

t = np.linspace(0, 2*np.pi, 250)

x = 16 * ((np.sin(t))**3)
y = 13 * np.cos(t) - 5 * np.cos(2*t) - 2 * np.cos(3*t) - np.cos(4*t)

fig, ax = plt.subplots(figsize=(8, 3))
ax.set_xlim(-20, 20)
ax.set_ylim(-20, 15)

line, = ax.plot([], [], 'r-', marker='o', marksize=4, lw=2)   # запятая!

def update(frame):
    line.set_data(x[:frame+1], y[:frame+1])         # X = frame, Y = 5
    return line,

ani = FuncAnimation(fig, update, frames=250, interval=30, blit = True)
plt.show()
