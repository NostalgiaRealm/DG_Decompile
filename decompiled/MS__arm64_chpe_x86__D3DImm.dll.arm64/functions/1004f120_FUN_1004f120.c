/*
 * FUN_1004f120 at 1004f120
 * undefined FUN_1004f120(void)
 * Address ranges: 1004f120-1004f16b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004f120(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10081cb0(0xa4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100652d0(iVar1,param_1,param_2);
  }
  return uVar2;
}

