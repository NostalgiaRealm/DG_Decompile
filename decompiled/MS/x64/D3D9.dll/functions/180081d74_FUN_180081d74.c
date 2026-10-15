/*
 * FUN_180081d74 at 180081d74
 * undefined __fastcall FUN_180081d74(undefined8 * param_1, undefined8 param_2, longlong param_3)
 * Address ranges: 180081d74-180082050
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180081d74(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar3 = *(undefined4 *)(param_3 + 0xd4);
  *(undefined4 *)(param_3 + 0x174) = uVar3;
  *(undefined4 *)(param_3 + 0x178) = 0x650;
  *(undefined4 *)(param_3 + 0x17c) = uVar3;
  *(undefined4 *)(param_3 + 0x180) = 0x670;
  *(undefined4 *)(param_3 + 0x184) = *(undefined4 *)(param_3 + 0xd0);
  *(undefined4 *)(param_3 + 0x188) = 0x640;
  *(undefined4 *)(param_3 + 0x18c) = uVar3;
  *(undefined4 *)(param_3 + 400) = 0x660;
  if ((*(byte *)(param_3 + 0x1ac) & 1) != 0) {
    lVar4 = *(longlong *)(param_3 + 0x1b0);
    if (((byte)*(undefined4 *)(lVar4 + 0x2c) & 3) == 1) {
      iVar1 = *(int *)(param_3 + 0x1a4);
      if (iVar1 == 0) {
        iVar1 = (**(code **)*param_1)(param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5));
        *(int *)(param_3 + 0x1a4) = iVar1;
      }
      lVar4 = *(longlong *)(param_3 + 0x1b0);
      *(int *)(param_3 + 0x174) = iVar1;
      *(undefined4 *)(param_3 + 0x178) = 0xffffffff;
    }
    if (((byte)*(undefined4 *)(lVar4 + 0x2c) & 0xc) == 4) {
      iVar1 = *(int *)(param_3 + 0x1a4);
      if (iVar1 == 0) {
        iVar1 = (**(code **)*param_1)(param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5));
        lVar4 = *(longlong *)(param_3 + 0x1b0);
        *(int *)(param_3 + 0x1a4) = iVar1;
      }
      *(int *)(param_3 + 0x17c) = iVar1;
      *(undefined4 *)(param_3 + 0x180) = 0xffffffff;
    }
    uVar2 = *(uint *)(lVar4 + 0x2c) & 0x30;
    if (*(char *)(param_3 + 0x1ca) == '\0') {
      if (uVar2 == 0x10) {
        iVar1 = *(int *)(param_3 + 0x1a4);
        if (iVar1 == 0) {
          iVar1 = (**(code **)*param_1)(param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5));
          *(int *)(param_3 + 0x1a4) = iVar1;
        }
        *(int *)(param_3 + 0x184) = iVar1;
        *(undefined4 *)(param_3 + 0x188) = 0xffffffff;
      }
    }
    else {
      if (uVar2 == 0x10) {
        iVar1 = *(int *)(param_3 + 0x1a4);
        if (iVar1 == 0) {
          iVar1 = (**(code **)*param_1)(param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5));
          lVar4 = *(longlong *)(param_3 + 0x1b0);
          *(int *)(param_3 + 0x1a4) = iVar1;
        }
        *(int *)(param_3 + 0x184) = iVar1;
        *(undefined4 *)(param_3 + 0x188) = 0xffffffff;
      }
      if (((byte)*(undefined4 *)(lVar4 + 0x2c) & 0xc0) == 0x40) {
        iVar1 = *(int *)(param_3 + 0x1a4);
        if (iVar1 == 0) {
          iVar1 = (**(code **)*param_1)(param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5));
          *(int *)(param_3 + 0x1a4) = iVar1;
        }
        *(int *)(param_3 + 0x18c) = iVar1;
        *(undefined4 *)(param_3 + 400) = 0xffffffff;
      }
    }
  }
  if ((*(byte *)(param_3 + 0x1ac) & 2) != 0) {
    if (((byte)*(undefined4 *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 3) == 2) {
      uVar3 = FUN_180084194(param_1,param_2,param_3);
      *(undefined4 *)(param_3 + 0x174) = uVar3;
      *(undefined4 *)(param_3 + 0x178) = 0xffffffff;
    }
    if (((byte)*(undefined4 *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 0xc) == 8) {
      uVar3 = FUN_180084194(param_1,param_2,param_3);
      *(undefined4 *)(param_3 + 0x17c) = uVar3;
      *(undefined4 *)(param_3 + 0x180) = 0xffffffff;
    }
    uVar2 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 0x30;
    if (*(char *)(param_3 + 0x1ca) == '\0') {
      if (uVar2 == 0x20) {
        uVar3 = FUN_180084194(param_1,param_2,param_3);
        *(undefined4 *)(param_3 + 0x184) = uVar3;
        *(undefined4 *)(param_3 + 0x188) = 0xffffffff;
      }
    }
    else {
      if (uVar2 == 0x20) {
        uVar3 = FUN_180084194(param_1,param_2,param_3);
        *(undefined4 *)(param_3 + 0x184) = uVar3;
        *(undefined4 *)(param_3 + 0x188) = 0xffffffff;
      }
      if (((byte)*(undefined4 *)(*(longlong *)(param_3 + 0x1b0) + 0x2c) & 0xc0) == 0x80) {
        uVar3 = FUN_180084194(param_1,param_2,param_3);
        *(undefined4 *)(param_3 + 0x18c) = uVar3;
        *(undefined4 *)(param_3 + 400) = 0xffffffff;
      }
    }
  }
  return;
}

