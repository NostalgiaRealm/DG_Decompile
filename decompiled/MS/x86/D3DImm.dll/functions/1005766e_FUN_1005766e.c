/*
 * FUN_1005766e at 1005766e
 * undefined __fastcall FUN_1005766e(uint * param_1, int * param_2)
 * Address ranges: 1005766e-100576ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005766e(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10057dfe(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_10057d33(param_2,4);
  }
  else if (iVar1 == 0x51) {
    FUN_10057d33(param_2,7);
  }
  return;
}

