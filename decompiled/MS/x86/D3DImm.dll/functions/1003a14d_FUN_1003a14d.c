/*
 * FUN_1003a14d at 1003a14d
 * undefined __thiscall FUN_1003a14d(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1003a14d-1003a365
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003a14d(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_2 + 0x144) = uVar1;
  *(undefined4 *)(param_2 + 0x148) = 0x640;
  *(undefined4 *)(param_2 + 0x14c) = uVar1;
  *(undefined4 *)(param_2 + 0x150) = 0x660;
  *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_2 + 0x158) = 0x630;
  *(undefined4 *)(param_2 + 0x15c) = uVar1;
  *(undefined4 *)(param_2 + 0x160) = 0x650;
  if ((*(byte *)(param_2 + 0x17c) & 1) != 0) {
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x180) + 0x2c) & 3) == 1) {
      uVar1 = FUN_1003bc2c(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x144) = uVar1;
      *(undefined4 *)(param_2 + 0x148) = 0xffffffff;
    }
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x180) + 0x2c) & 0xc) == 4) {
      uVar1 = FUN_1003bc2c(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x14c) = uVar1;
      *(undefined4 *)(param_2 + 0x150) = 0xffffffff;
    }
    uVar2 = *(uint *)(*(int *)(param_2 + 0x180) + 0x2c) & 0x30;
    if (*(char *)(param_2 + 0x192) == '\0') {
      if (uVar2 == 0x10) {
        uVar1 = FUN_1003bc2c(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x154) = uVar1;
        *(undefined4 *)(param_2 + 0x158) = 0xffffffff;
      }
    }
    else {
      if (uVar2 == 0x10) {
        uVar1 = FUN_1003bc2c(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x154) = uVar1;
        *(undefined4 *)(param_2 + 0x158) = 0xffffffff;
      }
      if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x180) + 0x2c) & 0xc0) == 0x40) {
        uVar1 = FUN_1003bc2c(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x15c) = uVar1;
        *(undefined4 *)(param_2 + 0x160) = 0xffffffff;
      }
    }
  }
  if ((*(byte *)(param_2 + 0x17c) & 2) != 0) {
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x180) + 0x2c) & 3) == 2) {
      uVar1 = FUN_1003bc5a(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x144) = uVar1;
      *(undefined4 *)(param_2 + 0x148) = 0xffffffff;
    }
    if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x180) + 0x2c) & 0xc) == 8) {
      uVar1 = FUN_1003bc5a(this,param_1,param_2);
      *(undefined4 *)(param_2 + 0x14c) = uVar1;
      *(undefined4 *)(param_2 + 0x150) = 0xffffffff;
    }
    uVar2 = *(uint *)(*(int *)(param_2 + 0x180) + 0x2c) & 0x30;
    if (*(char *)(param_2 + 0x192) == '\0') {
      if (uVar2 == 0x20) {
        uVar1 = FUN_1003bc5a(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x154) = uVar1;
        *(undefined4 *)(param_2 + 0x158) = 0xffffffff;
      }
    }
    else {
      if (uVar2 == 0x20) {
        uVar1 = FUN_1003bc5a(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x154) = uVar1;
        *(undefined4 *)(param_2 + 0x158) = 0xffffffff;
      }
      if (((byte)*(undefined4 *)(*(int *)(param_2 + 0x180) + 0x2c) & 0xc0) == 0x80) {
        uVar1 = FUN_1003bc5a(this,param_1,param_2);
        *(undefined4 *)(param_2 + 0x15c) = uVar1;
        *(undefined4 *)(param_2 + 0x160) = 0xffffffff;
      }
    }
  }
  return;
}

