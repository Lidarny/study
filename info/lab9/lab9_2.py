import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
import numpy as np

x = np.linspace(0, 20, 400)
y = -2*x**2 + 40*x
peak_idx = int(np.argmax(y))

fig, ax = plt.subplots(figsize=(8, 3))
ax.set_xlim(0, 20)
ax.set_ylim(0, 210)
ax.plot(x, y, alpha=0.2)
dot, = ax.plot([], [], 'ro', ms=15)

line, = ax.plot([], [], 'r-', marker='o', markersize=2, lw=3)

def update(frame):
    line.set_data(x[:frame+1], y[:frame+1])
    if :
        ani.event_source.stop()
    return line,

ani = FuncAnimation(fig, update, frames=200, interval=40)
plt.show()
