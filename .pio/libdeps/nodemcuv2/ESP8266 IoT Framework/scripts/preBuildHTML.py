import os

def preBuildHTMLFun():
    os.system("npm install")
    os.system("npm run build")