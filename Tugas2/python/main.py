from proc import proc
from ram import ram
from disk import disk
from pc import pc

# menggunakan construct
pc1 = proc("Intel",100)
pc2 = ram("4 GB", 200)
pc3 = disk("SSD","512 GB", 300)
data = pc(pc1,pc2,pc3)

#Output
data.printpc();