/*
 * FUN_100ce3b0 at 100ce3b0
 * undefined FUN_100ce3b0(void)
 * Address ranges: 100ce3b0-100ce3d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ce3b0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100ccac8(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x24) = param_3;
  }
  return;
}

