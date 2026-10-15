/*
 * FUN_1006e4b8 at 1006e4b8
 * undefined __thiscall FUN_1006e4b8(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1006e4b8-1006e6d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006e4b8(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_2 + 0x164) = uVar1;
  *(undefined4 *)(param_2 + 0x168) = 0x650;
  *(undefined4 *)(param_2 + 0x16c) = uVar1;
  *(undefined4 *)(param_2 + 0x170) = 0x670;
  *(undefined4 *)(param_2 + 0x174) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_2 + 0x178) = 0x640;
  *(undefined4 *)(param_2 + 0x17c) = uVar1;
  *(undefined4 *)(param_2 + 0x180) = 0x660;
  if ((*(byte *)(param_2 + 0x19c) & 1) != 0) {
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x1a0) + 0x2c) & 3) == 1) {
      uVar1 = FUN_1006fba2(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x164) = uVar1;
      *(undefined4 *)(param_2 + 0x168) = 0xffffffff;
    }
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x1a0) + 0x2c) & 0xc) == 4) {
      uVar1 = FUN_1006fba2(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x16c) = uVar1;
      *(undefined4 *)(param_2 + 0x170) = 0xffffffff;
    }
    uVar2 = *(uint *)(*(int *)(param_2 + 0x1a0) + 0x2c) & 0x30;
    if (*(char *)(param_2 + 0x1b2) == '\0') {
      if (uVar2 == 0x10) {
        uVar1 = FUN_1006fba2(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x174) = uVar1;
        *(undefined4 *)(param_2 + 0x178) = 0xffffffff;
      }
    }
    else {
      if (uVar2 == 0x10) {
        uVar1 = FUN_1006fba2(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x174) = uVar1;
        *(undefined4 *)(param_2 + 0x178) = 0xffffffff;
      }
      if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x1a0) + 0x2c) & 0xc0) == 0x40) {
        uVar1 = FUN_1006fba2(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x17c) = uVar1;
        *(undefined4 *)(param_2 + 0x180) = 0xffffffff;
      }
    }
  }
  if ((*(byte *)(param_2 + 0x19c) & 2) != 0) {
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x1a0) + 0x2c) & 3) == 2) {
      uVar1 = FUN_1006fbd0(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x164) = uVar1;
      *(undefined4 *)(param_2 + 0x168) = 0xffffffff;
    }
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x1a0) + 0x2c) & 0xc) == 8) {
      uVar1 = FUN_1006fbd0(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x16c) = uVar1;
      *(undefined4 *)(param_2 + 0x170) = 0xffffffff;
    }
    uVar2 = *(uint *)(*(int *)(param_2 + 0x1a0) + 0x2c) & 0x30;
    if (*(char *)(param_2 + 0x1b2) == '\0') {
      if (uVar2 == 0x20) {
        uVar1 = FUN_1006fbd0(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x174) = uVar1;
        *(undefined4 *)(param_2 + 0x178) = 0xffffffff;
      }
    }
    else {
      if (uVar2 == 0x20) {
        uVar1 = FUN_1006fbd0(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x174) = uVar1;
        *(undefined4 *)(param_2 + 0x178) = 0xffffffff;
      }
      if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x1a0) + 0x2c) & 0xc0) == 0x80) {
        uVar1 = FUN_1006fbd0(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x17c) = uVar1;
        *(undefined4 *)(param_2 + 0x180) = 0xffffffff;
      }
    }
  }
  return;
}

