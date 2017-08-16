#include "treemodel.h"

#include <QApplication>
#include <QFile>
#include <QTreeView>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    int l_stop_value = 20;
    TreeModel model(l_stop_value);

    QTreeView view;
    view.setModel(&model);
    view.setWindowTitle(QObject::tr("Fib Tree"));
    view.show();
    return app.exec();
}
