/*
 * FUN_1801ddd58 at 1801ddd58
 * undefined FUN_1801ddd58(void)
 * Address ranges: 1801ddd58-1801ddd9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801ddd58(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 == 8) || (iVar1 == 9)) {
LAB_1801ddd94:
    uVar2 = 4;
  }
  else {
    if (iVar1 != 10) {
      if (iVar1 == 0xb) goto LAB_1801ddd94;
      if (iVar1 != 0xc) {
        return 0;
      }
    }
    uVar2 = 8;
  }
  return uVar2;
}

