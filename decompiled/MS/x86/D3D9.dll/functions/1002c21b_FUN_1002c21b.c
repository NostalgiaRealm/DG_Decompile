/*
 * FUN_1002c21b at 1002c21b
 * undefined __fastcall FUN_1002c21b(int * param_1)
 * Address ranges: 1002c21b-1002c248
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002c21b(int *param_1)

{
  HWND pHVar1;
  int *piVar2;
  
  pHVar1 = (HWND)(**(code **)(*param_1 + 0x14))();
  piVar2 = FUN_100cd38e(DAT_100dea74,(int)pHVar1);
  if (piVar2 != (int *)0x0) {
    FUN_100ccf11(pHVar1,piVar2[7]);
    piVar2[7] = 0;
  }
  return;
}

