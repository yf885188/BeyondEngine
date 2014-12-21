#ifndef BEYOND_ENGINE_EDITOR_WXUICONTROL_WXWIDGETSPROPERTY_RANDOMVALUEPROPERTYDESCRIPTION_H__INCLUDE
#define BEYOND_ENGINE_EDITOR_WXUICONTROL_WXWIDGETSPROPERTY_RANDOMVALUEPROPERTYDESCRIPTION_H__INCLUDE

#include "wxWidgetsPropertyBase.h"

class CRandomValuePropertyDescription : public CWxwidgetsPropertyBase
{
    typedef CWxwidgetsPropertyBase super;
public:
    CRandomValuePropertyDescription(CSerializer* pSerializer);
    CRandomValuePropertyDescription(const CRandomValuePropertyDescription& rRef);

    virtual ~CRandomValuePropertyDescription();

    virtual bool CopyValue(void* pSourceValue, void* pTargetValue) override;
    virtual bool IsDataSame(bool bWithDefaultOrXML) override;
    virtual CPropertyDescriptionBase* CreateNewInstance() override;
    virtual void GetValueAsChar(EValueType type, char* pOut) const override;
    virtual bool GetValueByTChar(const TCHAR* pIn, void* pOutValue) override;
    virtual void Serialize(CSerializer& serializer, EValueType eValueType = eVT_SavedValue) override;
    virtual void Deserialize(CSerializer& serializer, EValueType eValueType = eVT_CurrentValue) override;
    virtual void SetValue(wxVariant& value, bool bSaveValue = true) override;
    virtual bool AnalyseUIParameterImpl(const std::vector<TString>& parameterUnit) override;
    virtual wxPGProperty* CreateWxProperty() override;

private:
    
};
#endif