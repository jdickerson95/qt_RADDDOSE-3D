import numpy as np
from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
import matplotlib.tri as mtri

# The values ​​related to each point. This can be a "Dataframe pandas" 
# for example where each column is linked to a variable <-> 1 dimension. 
# The idea is that each line = 1 pt in 4D.
do_random_pt_example = False;

index_x = 0; index_y = 1; index_z = 2; index_c = 3;
list_name_variables = ['x', 'y', 'z', 'c'];
name_color_map = 'seismic';

#end
#-----

x = []
y = []
z = []
c = []
f = open("output-DoseState.csv", 'r')
for line in f.readlines():
    l = line.split(',')
    x.append(float(l[0]))
    y.append(float(l[1]))
    z.append(float(l[2]))
    c.append(float(l[3]))
f.close()

x = np.array(x)
y = np.array(y)
z = np.array(z)
c = np.array(c)

# We create triangles that join 3 pt at a time and where their colors will be
# determined by the values ​​of their 4th dimension. Each triangle contains 3
# indexes corresponding to the line number of the points to be grouped. 
# Therefore, different methods can be used to define the value that 
# will represent the 3 grouped points and I put some examples.
triangles = mtri.Triangulation(x, y).triangles;

choice_calcuation_colors = 1;
if choice_calcuation_colors == 1: # Mean of the "c" values of the 3 pt of the triangle
    colors = np.mean( [c[triangles[:,0]], c[triangles[:,1]], c[triangles[:,2]]], axis = 0);
elif choice_calcuation_colors == 2: # Mediane of the "c" values of the 3 pt of the triangle
    colors = np.median( [c[triangles[:,0]], c[triangles[:,1]], c[triangles[:,2]]], axis = 0);
elif choice_calcuation_colors == 3: # Max of the "c" values of the 3 pt of the triangle
    colors = np.max( [c[triangles[:,0]], c[triangles[:,1]], c[triangles[:,2]]], axis = 0);
#end
#----------
# Displays the 4D graphic.
fig = plt.figure();
ax = fig.gca(projection='3d');
triang = mtri.Triangulation(x, y, triangles);
surf = ax.plot_trisurf(triang, z, cmap = name_color_map, shade=False, linewidth=0.2);
surf.set_array(colors); surf.autoscale();

#Add a color bar with a title to explain which variable is represented by the color.
cbar = fig.colorbar(surf, shrink=0.5, aspect=5);
cbar.ax.get_yaxis().labelpad = 15; cbar.ax.set_ylabel(list_name_variables[index_c], rotation = 270);

# Add titles to the axes and a title in the figure.
ax.set_xlabel(list_name_variables[index_x]); ax.set_ylabel(list_name_variables[index_y]);
ax.set_zlabel(list_name_variables[index_z]);
plt.title('%s in function of %s, %s and %s' % (list_name_variables[index_c], list_name_variables[index_x], list_name_variables[index_y], list_name_variables[index_z]) );

plt.show();
