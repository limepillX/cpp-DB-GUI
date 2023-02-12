
// Yakovenko_4Set.h: интерфейс класса CYakovenko_4Set
//


#pragma once

// создаваемый код 3 октября 2022 г., 1:00

class CYakovenko_4Set : public CRecordset
{
public:
	CYakovenko_4Set(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CYakovenko_4Set)

// Данные полей и параметров

// Следующие типы строк (если присутствуют) отражают фактические типы данных 
// поля базы данных - CStringA для типов данных ANSI и CStringW для типов 
// данных Юникода. Это должно предотвратить выполнение драйвером ODBC 
// потенциально ненужных преобразований.  При желании можно заменить эти члены на 
// типы CString, и драйвер ODBC выполнит все необходимые преобразования.
// (Примечание. Необходимо использовать драйвер ODBC версии 3.5 или более поздней 
// для поддержки как Юникода, так и этих преобразований).

	long	m_Code;
	long	m_Group;
	CStringW	m_Faculty;
	CStringW	m_Namee;
	long	m_AvMark;

// Переопределение
	// Мастер создал переопределения виртуальных функций
	public:
	virtual CString GetDefaultConnect();	// Строка подключения по умолчанию

	virtual CString GetDefaultSQL(); 	// код SQL по умолчанию для набора записей
	virtual void DoFieldExchange(CFieldExchange* pFX);	// поддержка RFX

// Реализация
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

