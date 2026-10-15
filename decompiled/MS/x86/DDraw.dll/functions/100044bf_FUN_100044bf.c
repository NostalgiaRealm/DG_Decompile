/*
 * FUN_100044bf at 100044bf
 * undefined __fastcall FUN_100044bf(int * param_1)
 * Address ranges: 100044bf-100044ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100044bf(int *param_1)

{
  HWND pHVar1;
  int *piVar2;
  
  pHVar1 = (HWND)(**(code **)(*param_1 + 0x14))();
  piVar2 = FUN_1005e8f7(DAT_1006c210,(int)pHVar1);
  if (piVar2 != (int *)0x0) {
    FUN_1005e456(pHVar1,piVar2[7]);
    piVar2[7] = 0;
  }
  return;
}

