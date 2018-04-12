import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt("datos2.txt")
plt.figure()
analitica = np.cos(data[:,0])
numerico = data[:,1]
error =abs( analitica-numerico)
plt.semilogy(data[:,0], error, label = "error")
plt.legend()
plt.savefig("error2.pdf")
plt.close()
