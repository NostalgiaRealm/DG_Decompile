/*
 * FUN_1004c408 at 1004c408
 * undefined FUN_1004c408(void)
 * Address ranges: 1004c408-1004c457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004c408(int param_1)

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
      uVar2 = 1;
    }
  }
  return uVar2;
}

