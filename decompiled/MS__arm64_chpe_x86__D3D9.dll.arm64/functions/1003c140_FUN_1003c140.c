/*
 * FUN_1003c140 at 1003c140
 * undefined FUN_1003c140(void)
 * Address ranges: 1003c140-1003c1a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003c140(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_10170af0;
  *param_1 = &PTR_FUN_1015e7e4;
  DAT_10170aec = param_1;
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_1016c190)(iVar1);
    DAT_10170af0 = 0;
  }
  if (param_1[8] != 0) {
    FUN_10132260(param_1[8],8);
  }
  return;
}

