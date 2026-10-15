/*
 * FUN_180207120 at 180207120
 * undefined FUN_180207120(void)
 * Address ranges: 180207120-180207557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180207120(longlong param_1)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  uint uVar8;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  ulonglong uVar9;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar9 = 0;
  uVar8 = 0;
  if (*(int *)(param_1 + 0xb64) != 0) {
    do {
      uVar8 = (uint)uVar9;
      lVar5 = param_1 + uVar9 * 8;
      uVar4 = (*(code *)puVar2)();
      iVar3 = (*extraout_x11)(uVar4,*(undefined4 *)(param_1 + 0xb5c),&DAT_180238c98,lVar5 + 0x690);
      if (iVar3 < 0) break;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < *(uint *)(param_1 + 0xb64));
  }
  if (uVar8 != *(uint *)(param_1 + 0xb64)) {
LAB_180207508:
    if (uVar8 + 1 != 0) {
      uVar9 = (ulonglong)(uVar8 + 1);
      do {
        uVar8 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar8;
        (*(code *)puVar2)();
        (*extraout_x11_15)();
        *(undefined8 *)(param_1 + 0x690 + uVar9 * 8) = 0;
      } while (uVar8 != 0);
    }
    return 0;
  }
  uVar4 = (*(code *)puVar2)(0x180224000);
  iVar3 = (*extraout_x11_00)(uVar4,0,*(undefined4 *)(param_1 + 0xb5c),
                             *(undefined8 *)(param_1 + 0x690),0,&DAT_180238c88,param_1 + 0x688);
  if (iVar3 < 0) goto LAB_180207508;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  uVar4 = (*(code *)puVar2)(0x180224000);
  iVar3 = (*extraout_x11_01)(uVar4,&DAT_1802293d8,&local_70);
  if (iVar3 < 0) {
    uVar4 = (*(code *)puVar2)(0x180224000);
    iVar3 = (*extraout_x11_03)(uVar4,&DAT_1802293c8,&local_68);
    if (iVar3 < 0) {
      uVar4 = (*(code *)puVar2)(0x180224000);
      iVar3 = (*extraout_x11_05)(uVar4,&DAT_1802293b8,&local_60);
      if (iVar3 < 0) {
        uVar4 = (*(code *)puVar2)(0x180224000);
        iVar3 = (*extraout_x11_07)(uVar4,&DAT_180229368,&local_58);
        if (iVar3 < 0) {
          uVar4 = (*(code *)puVar2)(0x180224000);
          iVar3 = (*extraout_x11_09)(uVar4,&DAT_180229358,&local_50);
          if (iVar3 < 0) {
            uVar4 = (*(code *)puVar2)(0x180224000);
            iVar3 = (*extraout_x11_11)(uVar4,&DAT_180229418,&local_48);
            if (iVar3 < 0) {
              uVar4 = (*(code *)puVar2)(0x180224000);
              iVar3 = (*extraout_x11_13)(uVar4,&DAT_180229408,local_40);
              if (-1 < iVar3) {
                (*(code *)puVar2)(0x180224000);
                (*extraout_x11_14)();
                *(undefined4 *)(param_1 + 0xb60) = 1;
                *(undefined8 *)(param_1 + 0x688) = local_40[0];
              }
              goto LAB_18020746c;
            }
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_12)();
            *(undefined8 *)(param_1 + 0x688) = local_48;
            uVar6 = 2;
          }
          else {
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_10)();
            *(undefined8 *)(param_1 + 0x688) = local_50;
            uVar6 = 3;
          }
        }
        else {
          (*(code *)puVar2)(0x180224000);
          (*extraout_x11_08)();
          *(undefined8 *)(param_1 + 0x688) = local_58;
          uVar6 = 4;
        }
      }
      else {
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_06)();
        *(undefined8 *)(param_1 + 0x688) = local_60;
        uVar6 = 5;
      }
    }
    else {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_04)();
      *(undefined8 *)(param_1 + 0x688) = local_68;
      uVar6 = 6;
    }
  }
  else {
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_02)();
    *(undefined8 *)(param_1 + 0x688) = local_70;
    uVar6 = 7;
  }
  *(undefined4 *)(param_1 + 0xb60) = uVar6;
LAB_18020746c:
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    uVar4 = FUN_1801042f0(*(longlong *)(param_1 + 0xb10) + 0x28);
    *(undefined8 *)(param_1 + 0xb78) = uVar4;
  }
  if ((*(longlong *)(param_1 + 0xb40) != 0) && (1 < *(uint *)(param_1 + 0xb60))) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xb40) + 0x18);
    uVar8 = (~*puVar1 & 0xaaaaaaaa) >> 1 | (~*puVar1 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar7 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
    uVar8 = 0xffffffff;
    if ((1 - (uVar7 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)puVar1 + (longlong)((int)uVar7 >> 3)) =
           *(byte *)((longlong)puVar1 + (longlong)((int)uVar7 >> 3)) |
           (byte)(1 << (ulonglong)(uVar7 & 7));
      uVar8 = uVar7;
    }
    *(uint *)(param_1 + 0xb50) = uVar8;
  }
  FUN_180222c50(param_1 + 0x20,0,0x660);
  *(undefined4 *)(param_1 + 0x670) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x668) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x66c) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x660) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x664) = 0x7ff00000;
  return 1;
}

