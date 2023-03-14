set PATH=%PATH%;D:\Users\Lisa\AppData\Local\Programs\MiKTeX\miktex\bin\x64\;c:\Users\Lisa\AppData\Local\Packages\PythonSoftwareFoundation.Python.3.8_qbz5n2kfra8p0\LocalCache\local-packages\Python38\Scripts"\
cd book
plastex html.tex --split-level=1
py ..\fixhtml\fixhtml.py