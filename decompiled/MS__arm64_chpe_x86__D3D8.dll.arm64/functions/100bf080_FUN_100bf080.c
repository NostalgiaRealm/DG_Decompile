/*
 * FUN_100bf080 at 100bf080
 * undefined FUN_100bf080(void)
 * Address ranges: 100bf080-100bf0ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bf080(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
  if (iVar1 == 0) {
    FUN_10006560(0);
  }
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = param_1 + 8;
  }
  FUN_1000bf10(*(undefined4 *)(param_1 + 0xec),iVar1);
  FUN_100bf100(param_1);
  FUN_100bef10(param_1);
  FUN_100fec90(param_1,0xf0);
  (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  return;
}

