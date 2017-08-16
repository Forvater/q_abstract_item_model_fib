QT += widgets

CONFIG += c++11

TARGET = q_abstract_item_model_fib

TEMPLATE = app
HEADERS     = treeitem.h \
              treemodel.h
SOURCES += main.cpp \
    treeitem.cpp \
    treemodel.cpp
