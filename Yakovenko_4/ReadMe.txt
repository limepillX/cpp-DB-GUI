================================================================================
    БИБЛИОТЕКА MICROSOFT FOUNDATION CLASS. Обзор проекта Yakovenko_4
===============================================================================

Это приложение Yakovenko_4 автоматически создано с помощью мастера приложений. Это приложение демонстрирует основные принципы использования классов Microsoft Foundation; оно также может использоваться в качестве основы для написания собственных приложений.

В этом файле представлена сводка содержимого всех файлов, входящих в состав приложения Yakovenko_4.

Yakovenko_4.vcxproj
    Это основной файл проекта VC++, создаваемый с помощью мастера приложений. Он содержит данные о версии языка Visual C++, использованной для создания файла, а также сведения о платформах, конфигурациях и функциях проекта, выбранных с помощью мастера приложений.

Yakovenko_4.vcxproj.filters
    Это файл фильтров для проектов VC++, созданный с помощью мастера приложений. Он содержит сведения о сопоставлениях между файлами в вашем проекте и фильтрами. Эти сопоставления используются в среде IDE для группировки файлов с одинаковыми расширениями в одном узле (например CPP-файлы сопоставляются с фильтром "Исходные файлы").

Yakovenko_4.h
    Это основной файл заголовка приложения.
    Он содержит прочие заголовки, относящиеся к проекту (включая Resource.h), а также объявляет класс приложения CYakovenko_4App.

Yakovenko_4.cpp
    Это основной исходный файл приложения, в котором содержится класс приложения CYakovenko_4App.

Yakovenko_4.rc
    Он представляет собой список всех ресурсов Microsoft Windows, используемых программой. В него включены значки, точечные рисунки и курсоры, хранящиеся в подкаталоге RES. Этот файл можно редактировать непосредственно в Microsoft Visual C++. Ресурсы проекта находятся в 1049.

res\Yakovenko_4.ico
    Файл значка, используемый в качестве значка приложения. Этот значок включен с помощью основного файла ресурсов Yakovenko_4.rc.

res\Yakovenko_4.rc2
    Этот файл содержит ресурсы, которые нельзя редактировать в Microsoft Visual C++. В этот файл следует поместить все ресурсы, не редактируемые редактором ресурсов.

Yakovenko_4.reg
    Пример REG-файла, демонстрирующий параметры регистрации, автоматически устанавливаемые платформой. Можно использовать этот файл в качестве REG-
    файла для приложения или удалить его и применить регистрацию RegisterShellFileTypes по умолчанию.


/////////////////////////////////////////////////////////////////////////////

Для окна главного фрейма:
    Проект включает стандартный интерфейс MFC.

MainFrm.h, MainFrm.cpp
    Эти файлы содержат класс фрейма CMainFrame, который является производным от класса
    CFrameWnd и управляет всеми функциями фрейма SDI.

res\Toolbar.bmp
    Этот файл точечного рисунка используется при создании мозаичных изображений для панели инструментов.
    Начальная панель инструментов и строка состояния, созданные в классе CMainFrame. Измените этот точечный рисунок панели инструментов в редакторе ресурсов и обновите массив IDR_MAINFRAME TOOLBAR в файле Yakovenko_4.rc, чтобы добавить кнопки панели инструментов.
/////////////////////////////////////////////////////////////////////////////

Мастер приложений создает одно представление:

Yakovenko_4View.h, Yakovenko_4View.cpp — представление документа
    Эти файлы содержат класс CYakovenko_4View.



/////////////////////////////////////////////////////////////////////////////

Поддержка базы данных:

Yakovenko_4Set.h, Yakovenko_4Set.cpp
    Эти файлы содержат класс CYakovenko_4Set. Этот класс используется для получения доступа к источнику данных, выбранному в мастере.
    Поддержка сериализации не добавляется.

/////////////////////////////////////////////////////////////////////////////

Другие возможности.

Элементы управления ActiveX
    Приложение включает поддержку элементов управления ActiveX.

Поддержка печати и предварительного просмотра
    Мастер приложений создал код для обработки команд печати, настройки печати и предварительного просмотра, используя вызовы функций-членов в классе CView из библиотеки MFC.

/////////////////////////////////////////////////////////////////////////////

Другие стандартные файлы:

StdAfx.h, StdAfx.cpp
    Эти файлы используются для построения файла предкомпилированного заголовка (PCH) с именем Yakovenko_4.pch и файла предкомпилированных типов с именем StdAfx.obj.

Resource.h
    Это стандартный файл заголовка, в котором определяются новые идентификаторы ресурсов. Такой файл можно прочитать и обновить в Microsoft Visual C++.

Yakovenko_4.manifest
	Файлы манифеста приложения используются операционной системой Windows XP для описания зависимости приложений от определенных версий параллельных сборок. Эти сведения используются загрузчиком для загрузки соответствующей сборки из кэша сборок или частным образом из приложения. Манифест приложения можно включить для распространения в качестве внешнего MANIFEST-файла, устанавливаемого в одной папке с исполняемым файлом приложения, или внедрить в исполняемый файл в виде ресурса.
/////////////////////////////////////////////////////////////////////////////

Прочие примечания.

С помощью комментариев «TODO:» в мастере приложений обозначаются фрагменты исходного кода, которые необходимо дополнить или изменить.

Если приложение использует MFC в общей библиотеке DLL, необходимо обеспечить распространение библиотек DLL MFC. Если в приложении используется язык, отличный от языка операционной системы, потребуется также обеспечить распространение соответствующих локализованных ресурсов mfc110XXX.DLL.
Дополнительные сведения о выполнении этих задач см. в разделе документации MSDN, посвященном распространению приложений Visual C++.

/////////////////////////////////////////////////////////////////////////////
