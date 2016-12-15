#ifndef MENUINTERFACE
#define MENUINTERFACE

#include <QList>
#include <QIcon>
#include <QAction>
#include <QWidget>


/*
 * The menu interface of dde-file-manager
 * 文件管理器的右键菜单插件接口
*/
class MenuInterface
{
public:
    virtual ~MenuInterface() {}

    /*!
     * \brief additionalIcons
     * \param file: the file path
     * \return QList<QIcon>: corner mark icon list of the file which you want to by drawed
     */
    /*!
     * \brief additionalIcons　角标接口
     * \param file: 文件路径
     * \return QList<QIcon>:　返回一组QIcon列表，这些icon就是角标
     */
    virtual QList<QIcon> additionalIcons(const QString &file)
    {
        Q_UNUSED(file)
        QList<QIcon> icons;
        return icons;
    }

    /*!
     * \brief additionalMenu
     * \param files: selected files list
     * \param currentDir : the current dir of menu which will be showed
     * \return  QList<QAction*>: QAction pointer list
     */
    /*!
     * \brief additionalMenu　选中文件菜单接口
     * \param files: 选中的文件路径列表
     * \param currentDir：右键所在的文件目录
     * \return QList<QAction*>：返回一组QAction指针列表，每个action对应菜单的一个菜单项
     */
    virtual QList<QAction*> additionalMenu(const QStringList &files, const QString& currentDir){
        Q_UNUSED(files)
        Q_UNUSED(currentDir)
        QList<QAction*> actions;
        return actions;
    }

    /*!
     * \brief additionalEmptyMenu
     * \param currentDir: the current dir of empty area menu which will be showed
     * \return QList<QAction*>: QAction pointer list
     */
    /*!
     * \brief additionalEmptyMenu　空白菜单接口
     * \param currentDir: 空白菜单所在的文件目录
     * \return QList<QAction*>：返回一组QAction指针列表，每个action对应菜单的一个菜单项
     */
    virtual QList<QAction*> additionalEmptyMenu(const QString &currentDir){
        Q_UNUSED(currentDir)
        QList<QAction*> actions;
        return actions;
    }
};


/*
 * The property dialog expand info interface of dde-file-manager
 * 文件管理器的属性对话框插件接口
*/
class PropertyDialogExpandInfoInterface
{
public:

    virtual ~PropertyDialogExpandInfoInterface() {}

    /*!
     * \brief expandWidget
     * \param file: the file path
     * \return QWidget*: the widget which will be showed in property dialog
     */
    /*!
     * \brief expandWidget 属性子控件接口
     * \param file：需要扩展属性显示的文件路径
     * \return QWidget*：返回对应的属性控件指针
     */
    virtual QWidget* expandWidget(const QString& file) {
        Q_UNUSED(file)
        return new QWidget();
    }

    /*!
     * \brief expandWidgetTitle
     * \return QString: the title of the QWidget which will be showed in property dialog
     */
    /*!
     * \brief expandWidgetTitle　属性子控件对应的标题即可
     * \return QString:　返回对应扩展属性控件的标题
     */
    virtual QString expandWidgetTitle(){
        return "";
    }

};


#define MenuInterface_iid "com.deepin.dde-file-manager.MenuInterface"
Q_DECLARE_INTERFACE(MenuInterface, MenuInterface_iid)

#define PropertyDialogExpandInfoInterface_iid "com.deepin.dde-file-manager.PropertyDialogExpandInfoInterface"
Q_DECLARE_INTERFACE(PropertyDialogExpandInfoInterface, PropertyDialogExpandInfoInterface_iid)

#endif // MENUINTERFACE
