from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
import numpy as np

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

x = []
y = []
z = []
q = []
f = open("output-DoseState.csv", 'r')
for line in f.readlines():
    l = line.split(',')
    x.append(float(l[0]))
    y.append(float(l[1]))
    z.append(float(l[2]))
    q.append(float(l[3]))
f.close()

xarr = np.array(x)
yarr = np.array(y)
zarr = np.array(z)
qarr = np.array(q)

ax.set_xlabel('x')
ax.set_ylabel('y')
ax.set_zlabel('z')
img = ax.scatter(xarr, yarr, zarr, c=qarr, cmap=plt.hot(), marker='o', linewidths=0)
#fig.colorbar(img)
plt.show()
