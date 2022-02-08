from calendar import c
import tarfile
from click import echo
import sh
import os
import yaml

git_branch = str(sh.git("rev-parse","--abbrev-ref","HEAD")).replace("/","_")
echo (git_branch)



try: 
    os.mkdir("release") 
except OSError as error: 
  echo("")


archive_file = "release/batteries_"+git_branch+".tar.xz"

with open("package.yaml", 'r') as stream:
    data_loaded = yaml.safe_load(stream)

tar = tarfile.open(archive_file, "w:xz")
for name in data_loaded["package"]:
    tar.add(name)
tar.close()
    
#clean up
# try:
#     shutil.rmtree(mydir)
# except OSError as e:
#     print("Error: %s - %s." % (e.filename, e.strerror))