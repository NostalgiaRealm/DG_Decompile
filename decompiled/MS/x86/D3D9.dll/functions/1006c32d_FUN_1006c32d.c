/*
 * FUN_1006c32d at 1006c32d
 * undefined __stdcall FUN_1006c32d(int * param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 1006c32d-1006c447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006c32d(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + 0x18);
  if (param_4 == 0) {
    FUN_100c3be1(piVar1,param_1,0x36);
    FUN_100c3be1(piVar1,param_1,0x36);
    FUN_100c3be1(piVar1,param_1,0x36);
  }
  else {
    FUN_100c3be1(piVar1,param_1,0x11);
    FUN_100c3be1(piVar1,param_1,0x11);
    FUN_100c3be1(piVar1,param_1,0x11);
  }
  return;
}

