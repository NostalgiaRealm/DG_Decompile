/*
 * FUN_100adbc0 at 100adbc0
 * undefined FUN_100adbc0(void)
 * Address ranges: 100adbc0-100adbe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100adbc0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100ac2d8(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x24) = param_3;
  }
  return;
}

