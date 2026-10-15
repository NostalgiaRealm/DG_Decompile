/*
 * FUN_1002c1ef at 1002c1ef
 * undefined __fastcall FUN_1002c1ef(int * param_1)
 * Address ranges: 1002c1ef-1002c21a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002c1ef(int *param_1)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  
  pHVar1 = (HWND)(**(code **)(*param_1 + 0x14))();
  piVar2 = FUN_100cd38e(DAT_100dea74,(int)pHVar1);
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_100ccf11(pHVar1,0x100cd485);
    piVar2[7] = iVar3;
  }
  return;
}

