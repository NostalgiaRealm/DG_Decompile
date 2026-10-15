/*
 * FUN_100e14f0 at 100e14f0
 * undefined FUN_100e14f0(void)
 * Address ranges: 100e14f0-100e154b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100e14f0(int param_1,char param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x630) + -1;
  *(int *)(param_1 + 0x630) = iVar1;
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x62c) <= *(int *)(param_1 + 0x620) || param_2 != '\0')) {
    uVar2 = FUN_100e1060(param_1,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

