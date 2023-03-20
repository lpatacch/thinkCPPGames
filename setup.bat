cd book
plastex html.tex --split-level=1
py ..\fixhtml\fixhtml.py
cd ..
rmdir /Q /S docs
move book\html docs
