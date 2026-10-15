/*
 * FUN_10058b56 at 10058b56
 * undefined __thiscall FUN_10058b56(void * this, undefined4 param_1, int param_2)
 * Address ranges: 10058b56-10058d6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10058b56(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_2 + 0x160) = uVar1;
  *(undefined4 *)(param_2 + 0x164) = 0x630;
  *(undefined4 *)(param_2 + 0x168) = uVar1;
  *(undefined4 *)(param_2 + 0x16c) = 0x650;
  *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_2 + 0x174) = 0x620;
  *(undefined4 *)(param_2 + 0x178) = uVar1;
  *(undefined4 *)(param_2 + 0x17c) = 0x640;
  if ((*(byte *)(param_2 + 0x198) & 1) != 0) {
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x19c) + 0x2c) & 3) == 1) {
      uVar1 = FUN_1005a239(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x160) = uVar1;
      *(undefined4 *)(param_2 + 0x164) = 0xffffffff;
    }
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x19c) + 0x2c) & 0xc) == 4) {
      uVar1 = FUN_1005a239(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x168) = uVar1;
      *(undefined4 *)(param_2 + 0x16c) = 0xffffffff;
    }
    uVar2 = *(uint *)(*(int *)(param_2 + 0x19c) + 0x2c) & 0x30;
    if (*(char *)(param_2 + 0x1ae) == '\0') {
      if (uVar2 == 0x10) {
        uVar1 = FUN_1005a239(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x170) = uVar1;
        *(undefined4 *)(param_2 + 0x174) = 0xffffffff;
      }
    }
    else {
      if (uVar2 == 0x10) {
        uVar1 = FUN_1005a239(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x170) = uVar1;
        *(undefined4 *)(param_2 + 0x174) = 0xffffffff;
      }
      if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x19c) + 0x2c) & 0xc0) == 0x40) {
        uVar1 = FUN_1005a239(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x178) = uVar1;
        *(undefined4 *)(param_2 + 0x17c) = 0xffffffff;
      }
    }
  }
  if ((*(byte *)(param_2 + 0x198) & 2) != 0) {
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x19c) + 0x2c) & 3) == 2) {
      uVar1 = FUN_1005a267(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x160) = uVar1;
      *(undefined4 *)(param_2 + 0x164) = 0xffffffff;
    }
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x19c) + 0x2c) & 0xc) == 8) {
      uVar1 = FUN_1005a267(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x168) = uVar1;
      *(undefined4 *)(param_2 + 0x16c) = 0xffffffff;
    }
    uVar2 = *(uint *)(*(int *)(param_2 + 0x19c) + 0x2c) & 0x30;
    if (*(char *)(param_2 + 0x1ae) == '\0') {
      if (uVar2 == 0x20) {
        uVar1 = FUN_1005a267(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x170) = uVar1;
        *(undefined4 *)(param_2 + 0x174) = 0xffffffff;
      }
    }
    else {
      if (uVar2 == 0x20) {
        uVar1 = FUN_1005a267(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x170) = uVar1;
        *(undefined4 *)(param_2 + 0x174) = 0xffffffff;
      }
      if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x19c) + 0x2c) & 0xc0) == 0x80) {
        uVar1 = FUN_1005a267(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x178) = uVar1;
        *(undefined4 *)(param_2 + 0x17c) = 0xffffffff;
      }
    }
  }
  return;
}

