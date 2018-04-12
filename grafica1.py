import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt("datos1.txt")
plt.figure()
analitica = np.exp(-data[:,0])
numerico = data[:,1]
error = abs(analitica-numerico)*100/analitica
plt.semilogy(data[:,0], error, label = "error porcentual")
plt.legend()
plt.savefig("error1.pdf")
plt.close()
