/*
 * FUN_100ce380 at 100ce380
 * undefined FUN_100ce380(void)
 * Address ranges: 100ce380-100ce3a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ce380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100ccac8(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_3;
  }
  return;
}

