/*
 * FUN_14000f588 at 14000f588
 * ulonglong __cdecl FUN_14000f588(HWND param_1)
 * Address ranges: 14000f588-14000f5f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_14000f588(HWND param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  byte abStack_30 [32];
  
  if ((param_1 != (HWND)0x0) && (iVar1 = GetClassNameA(param_1,(LPSTR)abStack_30,0x20), iVar1 != 0))
  {
    uVar3 = 0;
    do {
      uVar2 = FUN_140024ce0(abStack_30,(&PTR_s_Button_140026ee0)[uVar3]);
      if (uVar2 == 0) {
        return uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while ((&PTR_s_Button_140026ee0)[uVar3] != (undefined *)0x0);
  }
  return 0xffffffff;
}

