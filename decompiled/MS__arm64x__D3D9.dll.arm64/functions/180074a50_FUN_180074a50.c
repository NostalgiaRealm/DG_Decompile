/*
 * FUN_180074a50 at 180074a50
 * undefined FUN_180074a50(void)
 * Address ranges: 180074a50-180074d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180074a50(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 0xd4);
  *(undefined4 *)(param_3 + 0x174) = uVar1;
  *(undefined4 *)(param_3 + 0x178) = 0x650;
  *(undefined4 *)(param_3 + 0x17c) = uVar1;
  *(undefined4 *)(param_3 + 0x180) = 0x670;
  *(undefined4 *)(param_3 + 0x184) = *(undefined4 *)(param_3 + 0xd0);
  *(undefined4 *)(param_3 + 0x188) = 0x640;
  *(undefined4 *)(param_3 + 0x18c) = uVar1;
  *(undefined4 *)(param_3 + 400) = 0x660;
  if ((*(uint *)(param_3 + 0x1ac) & 1) != 0) {
    lVar4 = *(longlong *)(param_3 + 0x1b0);
    if ((*(uint *)(lVar4 + 0x2c) & 3) == 1) {
      iVar3 = *(int *)(param_3 + 0x1a4);
      if (iVar3 == 0) {
        iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5));
        *(int *)(param_3 + 0x1a4) = iVar3;
      }
      lVar4 = *(longlong *)(param_3 + 0x1b0);
      *(int *)(param_3 + 0x174) = iVar3;
      *(undefined4 *)(param_3 + 0x178) = 0xffffffff;
    }
    if ((*(uint *)(lVar4 + 0x2c) & 0xc) == 4) {
      iVar3 = *(int *)(param_3 + 0x1a4);
      if (iVar3 == 0) {
        iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5));
        lVar4 = *(longlong *)(param_3 + 0x1b0);
        *(int *)(param_3 + 0x1a4) = iVar3;
      }
      *(int *)(param_3 + 0x17c) = iVar3;
      *(undefined4 *)(param_3 + 0x180) = 0xffffffff;
    }
    bVar2 = (*(uint *)(lVar4 + 0x2c) & 0x30) == 0x10;
    if (*(char *)(param_3 + 0x1ca) == '\0') {
      if (!bVar2) goto LAB_180074bf8;
      iVar3 = *(int *)(param_3 + 0x1a4);
      if (iVar3 == 0) {
        iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5));
        *(int *)(param_3 + 0x1a4) = iVar3;
      }
      piVar5 = (int *)(param_3 + 0x184);
    }
    else {
      if (bVar2) {
        iVar3 = *(int *)(param_3 + 0x1a4);
        if (iVar3 == 0) {
          iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5));
          lVar4 = *(longlong *)(param_3 + 0x1b0);
          *(int *)(param_3 + 0x1a4) = iVar3;
        }
        *(int *)(param_3 + 0x184) = iVar3;
        *(undefined4 *)(param_3 + 0x188) = 0xffffffff;
      }
      if ((*(uint *)(lVar4 + 0x2c) & 0xc0) != 0x40) goto LAB_180074bf8;
      iVar3 = *(int *)(param_3 + 0x1a4);
      if (iVar3 == 0) {
        iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5));
        *(int *)(param_3 + 0x1a4) = iVar3;
      }
      piVar5 = (int *)(param_3 + 0x18c);
    }
    *piVar5 = iVar3;
    piVar5[1] = -1;
  }
LAB_180074bf8:
  if ((*(uint *)(param_3 + 0x1ac) >> 1 & 1) != 0) {
    lVar4 = *(longlong *)(param_3 + 0x1b0);
    if ((*(uint *)(lVar4 + 0x2c) & 3) == 2) {
      iVar3 = *(int *)(param_3 + 0x1a8);
      if (iVar3 == 0) {
        iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,6,*(undefined1 *)(param_3 + 0x1c6));
        *(int *)(param_3 + 0x1a8) = iVar3;
      }
      lVar4 = *(longlong *)(param_3 + 0x1b0);
      *(int *)(param_3 + 0x174) = iVar3;
      *(undefined4 *)(param_3 + 0x178) = 0xffffffff;
    }
    if ((*(uint *)(lVar4 + 0x2c) & 0xc) == 8) {
      iVar3 = *(int *)(param_3 + 0x1a8);
      if (iVar3 == 0) {
        iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,6,*(undefined1 *)(param_3 + 0x1c6));
        lVar4 = *(longlong *)(param_3 + 0x1b0);
        *(int *)(param_3 + 0x1a8) = iVar3;
      }
      *(int *)(param_3 + 0x17c) = iVar3;
      *(undefined4 *)(param_3 + 0x180) = 0xffffffff;
    }
    bVar2 = (*(uint *)(lVar4 + 0x2c) & 0x30) != 0x20;
    if (*(char *)(param_3 + 0x1ca) == '\0') {
      if (bVar2) {
        return;
      }
      iVar3 = *(int *)(param_3 + 0x1a8);
      if (iVar3 == 0) {
        iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,6,*(undefined1 *)(param_3 + 0x1c6));
        *(int *)(param_3 + 0x1a8) = iVar3;
      }
      piVar5 = (int *)(param_3 + 0x184);
    }
    else {
      if (!bVar2) {
        iVar3 = *(int *)(param_3 + 0x1a8);
        if (iVar3 == 0) {
          iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,6,*(undefined1 *)(param_3 + 0x1c6));
          lVar4 = *(longlong *)(param_3 + 0x1b0);
          *(int *)(param_3 + 0x1a8) = iVar3;
        }
        *(int *)(param_3 + 0x184) = iVar3;
        *(undefined4 *)(param_3 + 0x188) = 0xffffffff;
      }
      if ((*(uint *)(lVar4 + 0x2c) & 0xc0) != 0x80) {
        return;
      }
      iVar3 = *(int *)(param_3 + 0x1a8);
      if (iVar3 == 0) {
        iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,6,*(undefined1 *)(param_3 + 0x1c6));
        *(int *)(param_3 + 0x1a8) = iVar3;
      }
      piVar5 = (int *)(param_3 + 0x18c);
    }
    *piVar5 = iVar3;
    piVar5[1] = -1;
  }
  return;
}

