import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
import matplotlib as mpl
import numpy as np


fig = plt.figure()
ax = fig.add_subplot(projection='3d')

min_cut = 0.1
mid_cut = 15.0
max_cut = 30.0

below_min = []
x_bm = []
y_bm = []
z_bm = []

min_mid = []
x_mimi = []
y_mimi = []
z_mimi = []

mid_max = []
x_mima = []
y_mima = []
z_mima = []

above_max = []
x_am = []
y_am = []
z_am = []

f = open("output-DoseState.csv", 'r')
for line in f.readlines():
    l = line.split(',')
    dose = float(l[3])
    x = float(l[0])
    y = float(l[1])
    z = float(l[2])
    if (dose < min_cut):
        below_min.append(dose)
        x_bm.append(x)
        y_bm.append(y)
        z_bm.append(z)
    elif (min_cut <= dose < mid_cut):
        min_mid.append(dose)
        x_mimi.append(x)
        y_mimi.append(y)
        z_mimi.append(z)
    elif (mid_cut <= dose < max_cut):
        mid_max.append(dose)
        x_mima.append(x)
        y_mima.append(y)
        z_mima.append(z)
    elif (dose >= max_cut):
        above_max.append(dose)
        x_am.append(x)
        y_am.append(y)
        z_am.append(z)
f.close()

xbm = np.array(x_bm)
ybm = np.array(y_bm)
zbm = np.array(z_bm)
#Zbm = np.outer(zbm.T, zbm)
Xbm, Ybm , Zbm = np.meshgrid(xbm, ybm, zbm)

xmimi = np.array(x_mimi)
ymimi = np.array(y_mimi)
zmimi = np.array(z_mimi)
#Zmimi = np.outer(zmimi.T, zmimi)
Xmimi, Ymimi, Zmimi = np.meshgrid(xmimi, ymimi, zmimi)

xmima = np.array(x_mima)
ymima = np.array(y_mima)
zmima = np.array(z_mima)
#Zmima = np.outer(zmima.T, zmima)
Xmima, Ymima, Zmima = np.meshgrid(xmima, ymima, zmima)

xam = np.array(x_am)
yam = np.array(y_am)
zam = np.array(z_am)
#Zam = np.outer(zam.T, zam)
Xam, Yam, Zam = np.meshgrid(xam, yam, zam)


# Plot the surface
#ax.plot_surface(Xbm, Ybm, Zbm, color='#EBF5FB', alpha=0.05)
#ax.plot_surface(Xmimi, Ymimi, Zmimi, color='#AED6F1', alpha=0.2)
#ax.plot_surface(Xmima, Ymima, Zmima, color='#2874A6', alpha=0.5)
ax.plot_surface(Xam, Yam, Zam, color='#B03A2E', alpha=1.0)
fake2Dline = mpl.lines.Line2D([0],[0], linestyle="none", c='r', marker = 'o')
ax.legend([fake2Dline], ['Lyapunov function on XY plane'], numpoints = 1)
plt.show()
