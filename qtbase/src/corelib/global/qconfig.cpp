/* Licensed */
static const char qt_configure_licensee_str          [512 + 12] = "qt_lcnsuser=Open Source";
static const char qt_configure_licensed_products_str [512 + 12] = "qt_lcnsprod=OpenSource";

/* Build date */
static const char qt_configure_installation          [11  + 12] = "qt_instdate=2013-06-11";

static const char qt_configure_prefix_path_strs[][12 + 512] = {
    "qt_prfxpath=D:/Dev/phantomjs-qt5/src/qt/qtbase",
    "qt_docspath=D:/Dev/phantomjs-qt5/src/qt/qtbase/doc",
    "qt_hdrspath=D:/Dev/phantomjs-qt5/src/qt/qtbase/include",
    "qt_libspath=D:/Dev/phantomjs-qt5/src/qt/qtbase/lib",
    "qt_lbexpath=D:/Dev/phantomjs-qt5/src/qt/qtbase/bin",
    "qt_binspath=D:/Dev/phantomjs-qt5/src/qt/qtbase/bin",
    "qt_plugpath=D:/Dev/phantomjs-qt5/src/qt/qtbase/plugins",
    "qt_impspath=D:/Dev/phantomjs-qt5/src/qt/qtbase/imports",
    "qt_qml2path=D:/Dev/phantomjs-qt5/src/qt/qtbase/qml",
    "qt_adatpath=D:/Dev/phantomjs-qt5/src/qt/qtbase",
    "qt_datapath=D:/Dev/phantomjs-qt5/src/qt/qtbase",
    "qt_trnspath=D:/Dev/phantomjs-qt5/src/qt/qtbase/translations",
    "qt_xmplpath=D:/Dev/phantomjs-qt5/src/qt/qtbase/examples",
    "qt_tstspath=D:/Dev/phantomjs-qt5/src/qt/qtbase/tests",
#ifdef QT_BUILD_QMAKE
    "qt_ssrtpath=",
    "qt_hpfxpath=D:/Dev/phantomjs-qt5/src/qt/qtbase",
    "qt_hbinpath=D:/Dev/phantomjs-qt5/src/qt/qtbase/bin",
    "qt_hlibpath=D:/Dev/phantomjs-qt5/src/qt/qtbase/lib",
    "qt_hdatpath=D:/Dev/phantomjs-qt5/src/qt/qtbase",
    "qt_targspec=win32-msvc2010",
    "qt_hostspec=win32-msvc2010",
#endif
};

/* strlen( "qt_lcnsxxxx") == 12 */
#define QT_CONFIGURE_LICENSEE qt_configure_licensee_str + 12;
#define QT_CONFIGURE_LICENSED_PRODUCTS qt_configure_licensed_products_str + 12;
