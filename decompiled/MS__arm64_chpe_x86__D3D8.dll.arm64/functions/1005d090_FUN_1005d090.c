/*
 * FUN_1005d090 at 1005d090
 * undefined FUN_1005d090(void)
 * Address ranges: 1005d090-1005d0db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1005d090(int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100456c0(param_1 + 4,param_2,param_3,param_4);
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

