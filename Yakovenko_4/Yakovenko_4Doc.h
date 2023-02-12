
// Yakovenko_4Doc.h : интерфейс класса CYakovenko_4Doc
//


#pragma once
#include "Yakovenko_4Set.h"


class CYakovenko_4Doc : public CDocument
{
protected: // создать только из сериализации
	CYakovenko_4Doc();
	DECLARE_DYNCREATE(CYakovenko_4Doc)

// Атрибуты
public:
	CYakovenko_4Set m_Yakovenko_4Set;

// Операции
public:

// Переопределение
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Реализация
public:
	virtual ~CYakovenko_4Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Созданные функции схемы сообщений
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Вспомогательная функция, задающая содержимое поиска для обработчика поиска
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
