// [Typelib �N���X�ǉ��E�B�U�[�h] �ō쐬���ꂽ IDispatch ���b�p�[ �N���X�𐶐����܂����B

#import "C:\\Program Files\\Microsoft Office\\Office12\\EXCEL.EXE" no_namespace
// CListObjects ���b�p�[ �N���X

class CListObjects : public COleDispatchDriver
{
public:
	CListObjects(){} // COleDispatchDriver ����̃R���X�g���N�^�[���Ăяo���܂��B
	CListObjects(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CListObjects(const CListObjects& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// ListObjects ���\�b�h
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH _Add(long SourceType, VARIANT& Source, VARIANT& LinkSource, long XlListObjectHasHeaders, VARIANT& Destination)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT ;
		InvokeHelper(0x825, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, SourceType, &Source, &LinkSource, XlListObjectHasHeaders, &Destination);
		return result;
	}
	LPDISPATCH get__Default(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPUNKNOWN get__NewEnum()
	{
		LPUNKNOWN result;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Item(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	long get_Count()
	{
		long result;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Add(long SourceType, VARIANT& Source, VARIANT& LinkSource, long XlListObjectHasHeaders, VARIANT& Destination, VARIANT& TableStyleName)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT ;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, SourceType, &Source, &LinkSource, XlListObjectHasHeaders, &Destination, &TableStyleName);
		return result;
	}

	// ListObjects �v���p�e�B
public:

};