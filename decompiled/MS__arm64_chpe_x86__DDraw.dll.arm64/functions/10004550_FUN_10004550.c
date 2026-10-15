/*
 * FUN_10004550 at 10004550
 * undefined FUN_10004550(void)
 * Address ranges: 10004550-100045b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004550(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_100be0dc;
  *param_1 = &PTR_FUN_100b1a60;
  DAT_100be0d4 = param_1;
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_100ba1c8)(iVar1);
    DAT_100be0dc = 0;
  }
  if (param_1[8] != 0) {
    FUN_10091460(param_1[8],8);
  }
  return;
}

