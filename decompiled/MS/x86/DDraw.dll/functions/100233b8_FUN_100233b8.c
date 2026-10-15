/*
 * FUN_100233b8 at 100233b8
 * undefined4 __stdcall FUN_100233b8(int param_1, int param_2, HWND param_3)
 * Address ranges: 100233b8-10023420
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100233b8(int param_1,int param_2,HWND param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar2 = 0x88760082;
  if (((*(char *)(param_1 + 0x5c) != '\0') && (uVar2 = 0x80070057, param_2 == 0)) &&
     ((param_3 == (HWND)0x0 || (BVar1 = IsWindow(param_3), BVar1 != 0)))) {
    FUN_10022f35(param_1);
    *(HWND *)(param_1 + 0x4c) = param_3;
    uVar2 = 0;
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar2;
}

