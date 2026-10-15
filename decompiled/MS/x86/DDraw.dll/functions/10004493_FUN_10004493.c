/*
 * FUN_10004493 at 10004493
 * undefined __fastcall FUN_10004493(int * param_1)
 * Address ranges: 10004493-100044be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10004493(int *param_1)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  
  pHVar1 = (HWND)(**(code **)(*param_1 + 0x14))();
  piVar2 = FUN_1005e8f7(DAT_1006c210,(int)pHVar1);
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_1005e456(pHVar1,0x1005e9ee);
    piVar2[7] = iVar3;
  }
  return;
}

