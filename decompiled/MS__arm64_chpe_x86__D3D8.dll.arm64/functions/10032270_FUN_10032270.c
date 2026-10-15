/*
 * FUN_10032270 at 10032270
 * undefined FUN_10032270(void)
 * Address ranges: 10032270-100322d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032270(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_1013cf0c;
  *param_1 = &PTR_FUN_101293f4;
  DAT_1013cf08 = param_1;
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_10134190)(iVar1);
    DAT_1013cf0c = 0;
  }
  if (param_1[8] != 0) {
    FUN_100fec90(param_1[8],8);
  }
  return;
}

