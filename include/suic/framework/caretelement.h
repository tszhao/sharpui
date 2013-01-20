// ���ڿƼ���Ȩ���� 2010-2011
// 
// �ļ�����CaretElement.h
// ��  �ܣ���������߼���
// 
// ��  �ߣ�����
// ʱ  �䣺2012-07-02
// 
// ============================================================================

# ifndef _UICARETELEMENT_H_
# define _UICARETELEMENT_H_

#include <suic/framework/uiframeworkelement.h>

namespace suic {

class SUICORE_API CaretElement : public FrameworkElement
{
public:

    CaretElement();
    virtual ~CaretElement();

    DeclareTypeofInfo(CaretElement, FrameworkElement)

    void Show();
    void Hide();

protected:

    void OnTimer(int id);
    void OnUnloaded(LoadedEventArg& e);
    void OnInitialized();
    void OnRender(DrawingContext * drawing);

protected:

    suic::Int32 _timerid;
};

}

# endif