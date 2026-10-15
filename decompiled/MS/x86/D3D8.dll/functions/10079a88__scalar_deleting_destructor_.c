/*
 * CMFCRibbonInfo::XElementComboBox::`scalar_deleting_destructor' at 10079a88
 * void * __thiscall `scalar_deleting_destructor'(XElementComboBox * this, uint param_1)
 * Address ranges: 10079a88-10079aac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  public: virtual void * __thiscall CMFCRibbonInfo::XElementComboBox::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 2015 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CMFCRibbonInfo::XElementComboBox::`scalar deleting
   destructor'(unsigned int)
   
   Library: Visual Studio 2015 Release */

void * __thiscall
CMFCRibbonInfo::XElementComboBox::_scalar_deleting_destructor_(XElementComboBox *this,uint param_1)

{
  FUN_10079d0f((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

