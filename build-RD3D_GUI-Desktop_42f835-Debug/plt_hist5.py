from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
import numpy as np

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

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
belowmin = np.array(below_min)


xmimi = np.array(x_mimi)
ymimi = np.array(y_mimi)
zmimi = np.array(z_mimi)
minmid = np.array(min_mid)


xmima = np.array(x_mima)
ymima = np.array(y_mima)
zmima = np.array(z_mima)
midcut = np.array(mid_cut)


xam = np.array(x_am)
yam = np.array(y_am)
zam = np.array(z_am)
abovemax = np.array(above_max)


ax.set_xlabel('x')
ax.set_ylabel('y')
ax.set_zlabel('z')
img = ax.scatter(xbm, ybm, zbm, color='#EBF5FB', alpha=0.1, marker='o', linewidths=0, label="<0.1 MGy")
img = ax.scatter(xmimi, ymimi, zmimi, color='#AED6F1', alpha=0.2, marker='o', linewidths=0, label="0.1-15 MGy")
img = ax.scatter(xmima, ymima, zmima, color='#2874A6', alpha=0.5, marker='o', linewidths=0, label="15-30 MGy")
img = ax.scatter(xam, yam, zam, color='#B03A2E', alpha=1.0, marker='o', linewidths=0, label=">30 MGy")
#img = ax.plot_trisurf(xbm, ybm, zbm, color='#EBF5FB', alpha=0.1)
#img = ax.plot_trisurf(xmimi, ymimi, zmimi, color='#AED6F1', alpha=0.1)
#img = ax.plot_trisurf(xmima, ymima, zmima, color='#2874A6', alpha=0.5)
#img = ax.plot_trisurf(xam, yam, zam, color='#B03A2E', alpha=1.0)

#img = ax.contourf(xam, yam, zam, color='#B03A2E', alpha=1.0)

#plt.legend(loc="best")
#img2 = 
#fig.colorbar(img)
plt.show()
