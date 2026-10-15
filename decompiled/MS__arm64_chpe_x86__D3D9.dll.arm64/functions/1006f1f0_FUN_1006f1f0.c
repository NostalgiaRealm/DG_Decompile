/*
 * FUN_1006f1f0 at 1006f1f0
 * undefined FUN_1006f1f0(void)
 * Address ranges: 1006f1f0-1006f23b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1006f1f0(int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_10053a60(param_1 + 4,param_2,param_3,param_4);
  if (iVar1 == 1) {
    uVar2 = 1;
  }
  else if (iVar1 == 2) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

