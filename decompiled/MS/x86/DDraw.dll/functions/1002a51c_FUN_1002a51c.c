/*
 * FUN_1002a51c at 1002a51c
 * undefined __fastcall FUN_1002a51c(int * param_1)
 * Address ranges: 1002a51c-1002a555
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002a51c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 0xb;
  FUN_10022ecc(piVar1);
  iVar2 = FUN_10023519((int)piVar1);
  *piVar1 = 0;
  if (iVar2 == 0) {
    DAT_1006c215 = 1;
    (**(code **)(*param_1 + 0x2c))(1,0);
    DAT_1006c215 = 0;
  }
  return;
}

