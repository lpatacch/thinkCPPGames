import os
import sys
    
# load all the filename in the dir
# may want to remove binary files at this level
#if path does not end in \, add it

def initFileList(path):
    fileList = list()
# save all the filenames in this directory
    with os.scandir(path) as dirs:
        for entry in dirs:
            if ((entry.name != "images")and(entry.name != "js")and (entry.name != "styles")):
                fileList.append(entry.name)
    return fileList

# add the <pre> with the <code> to let the code look better
replacements = {'<code':'<pre><code', '</code>':'</code></pre>', '#include <':'#include &lt'}
def changefile(filename):
    lines = []
    try:
        with open(filename, encoding="utf-8") as infile:
            for line in infile:
                for src, target in replacements.items():
                    oldline = line
                    line = line.replace(src, target)
                    if (oldline != line):
                        print(".", end =" ")
                lines.append(line)
        with open(filename, 'w', encoding="utf-8") as outfile:
            for line in lines:
                outfile.write(line)
    except UnicodeDecodeError as ex:
        print(filename, "is binary, not changing")  
        
# load the html and look for the <code and </code> lines
def loadFile(filename):
    fh = open(filename, encoding="utf-8")
    for val in fh:
        if '<code' in val:
           print(val)
        if '</code>' in val:
           print(val)              


if __name__ == "__main__":
    print(sys.stdout.encoding)
# check if verbose mode or percentage change
    n = len(sys.argv)
    pverbose = False
    path = r"..\\book\\html\\"

    for i in range(1, n):
        if sys.argv[i] == "v":
            pverbose = True
        if sys.argv[i] == "p":
            path = sys.argv[i+1]
        
# Open a file -- this should be changed to match location
    filelist = initFileList(path)
    
    for file1 in filelist:            
#need code to handle not opening a file
        print(file1)
        contF1 = changefile(path+file1)   
        #contF1 = loadFile(path+file1)
        