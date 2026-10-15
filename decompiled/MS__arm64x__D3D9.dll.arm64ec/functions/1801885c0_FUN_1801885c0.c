/*
 * FUN_1801885c0 at 1801885c0
 * undefined FUN_1801885c0(void)
 * Address ranges: 1801885c0-1801887c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801885c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(undefined4 *)(param_3 + 0xd4);
  *(undefined4 *)(param_3 + 0x174) = uVar2;
  *(undefined4 *)(param_3 + 0x178) = 0x650;
  *(undefined4 *)(param_3 + 0x17c) = uVar2;
  *(undefined4 *)(param_3 + 0x180) = 0x670;
  *(undefined4 *)(param_3 + 0x184) = *(undefined4 *)(param_3 + 0xd0);
  *(undefined4 *)(param_3 + 0x188) = 0x640;
  *(undefined4 *)(param_3 + 0x18c) = uVar2;
  *(undefined4 *)(param_3 + 400) = 0x660;
  if ((*(uint *)(param_3 + 0x1ac) & 1) != 0) {
    if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 3) == 1) {
      uVar2 = FUN_18018a670();
      *(undefined4 *)(param_3 + 0x174) = uVar2;
      *(undefined4 *)(param_3 + 0x178) = 0xffffffff;
    }
    if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 0xc) == 4) {
      uVar2 = FUN_18018a670(param_1,param_2,param_3);
      *(undefined4 *)(param_3 + 0x17c) = uVar2;
      *(undefined4 *)(param_3 + 0x180) = 0xffffffff;
    }
    bVar1 = (*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 0x30) == 0x10;
    if (*(char *)(param_3 + 0x1ca) == '\0') {
      if (!bVar1) goto LAB_1801886d8;
      uVar2 = FUN_18018a670(param_1,param_2,param_3);
      puVar3 = (undefined4 *)(param_3 + 0x184);
    }
    else {
      if (bVar1) {
        uVar2 = FUN_18018a670(param_1,param_2,param_3);
        *(undefined4 *)(param_3 + 0x184) = uVar2;
        *(undefined4 *)(param_3 + 0x188) = 0xffffffff;
      }
      if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 0xc0) != 0x40) goto LAB_1801886d8;
      uVar2 = FUN_18018a670(param_1,param_2,param_3);
      puVar3 = (undefined4 *)(param_3 + 0x18c);
    }
    *puVar3 = uVar2;
    puVar3[1] = 0xffffffff;
  }
LAB_1801886d8:
  if ((*(uint *)(param_3 + 0x1ac) >> 1 & 1) != 0) {
    if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 3) == 2) {
      uVar2 = FUN_18018a6c8(param_1,param_2,param_3);
      *(undefined4 *)(param_3 + 0x174) = uVar2;
      *(undefined4 *)(param_3 + 0x178) = 0xffffffff;
    }
    if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 0xc) == 8) {
      uVar2 = FUN_18018a6c8(param_1,param_2,param_3);
      *(undefined4 *)(param_3 + 0x17c) = uVar2;
      *(undefined4 *)(param_3 + 0x180) = 0xffffffff;
    }
    bVar1 = (*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 0x30) != 0x20;
    if (*(char *)(param_3 + 0x1ca) == '\0') {
      if (bVar1) {
        return;
      }
      uVar2 = FUN_18018a6c8(param_1,param_2,param_3);
      puVar3 = (undefined4 *)(param_3 + 0x184);
    }
    else {
      if (!bVar1) {
        uVar2 = FUN_18018a6c8(param_1,param_2,param_3);
        *(undefined4 *)(param_3 + 0x184) = uVar2;
        *(undefined4 *)(param_3 + 0x188) = 0xffffffff;
      }
      if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 0xc0) != 0x80) {
        return;
      }
      uVar2 = FUN_18018a6c8(param_1,param_2,param_3);
      puVar3 = (undefined4 *)(param_3 + 0x18c);
    }
    *puVar3 = uVar2;
    puVar3[1] = 0xffffffff;
  }
  return;
}

