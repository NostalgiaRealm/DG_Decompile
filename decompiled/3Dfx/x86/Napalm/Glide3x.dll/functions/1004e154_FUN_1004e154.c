/*
 * FUN_1004e154 at 1004e154
 * undefined __fastcall FUN_1004e154(uint * param_1, int * param_2)
 * Address ranges: 1004e154-1004e1b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004e154(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004e7bd(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_1004e679(param_2,4);
  }
  else if (iVar1 == 0x51) {
    FUN_1004e679(param_2,7);
  }
  return;
}

