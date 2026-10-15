/*
 * FUN_1004c3a8 at 1004c3a8
 * undefined FUN_1004c3a8(void)
 * Address ranges: 1004c3a8-1004c3f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004c3a8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if ((iVar1 + 0xceaba7bcU < 0x4000001) && ((iVar1 + 0xceaba7bcU & 0xffffff) == 0)) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
    if (iVar1 == 0x32595559 || iVar1 == 0x59565955) {
      uVar2 = 2;
    }
  }
  return uVar2;
}

