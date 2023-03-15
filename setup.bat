set PATH=%PATH%;D:%HOMEPATH%\AppData\Local\Programs\MiKTeX\miktex\bin\x64\;c:%HOMEPATH%\AppData\Local\Packages\PythonSoftwareFoundation.Python.3.8_qbz5n2kfra8p0\LocalCache\local-packages\Python38\Scripts"\
cd book
plastex html.tex --split-level=1
py ..\fixhtml\fixhtml.py
cd ..
rmdir /Q /S docs
move book\html docs
