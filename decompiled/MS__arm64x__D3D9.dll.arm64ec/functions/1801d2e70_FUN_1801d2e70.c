/*
 * FUN_1801d2e70 at 1801d2e70
 * undefined FUN_1801d2e70(void)
 * Address ranges: 1801d2e70-1801d3503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801d2e70(longlong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
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
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar9 = 0;
  if (*(int *)(param_1 + 0x400) != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar9 * 8) != 0) {
        FUN_18010a8c8(param_1,uVar9);
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x400));
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x3f8));
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar6 = param_1 + 0x1338;
  uVar9 = 0;
  do {
    if (*(longlong *)(lVar6 + uVar9 * 8) != 0) {
      uVar3 = (*(code *)puVar2)(0x180225000);
      (*extraout_x11)(uVar3,uVar9,0,0,0,0,0,0);
      lVar5 = *(longlong *)(lVar6 + uVar9 * 8);
      uVar1 = 1 << (ulonglong)((uint)uVar9 & 0x1f);
      *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) & (uVar1 ^ 0xffffffff);
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)();
      *(undefined8 *)(lVar6 + uVar9 * 8) = 0;
      *(uint *)(param_1 + 0x67f4) = *(uint *)(param_1 + 0x67f4) & (uVar1 ^ 0xffffffff);
    }
    uVar1 = (uint)uVar9 + 1;
    uVar9 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  uVar9 = 0;
  do {
    if (*(longlong *)(param_1 + 0x13b8 + uVar9 * 8) != 0) {
      uVar3 = (*(code *)puVar2)(0x180225000);
      (*extraout_x11_01)(uVar3,uVar9,0,0,0);
      (*(code *)puVar2)();
      (*extraout_x11_02)();
      *(undefined8 *)(param_1 + 0x13b8 + uVar9 * 8) = 0;
      *(uint *)(param_1 + 0x6800) =
           *(uint *)(param_1 + 0x6800) & (1 << (ulonglong)((uint)uVar9 & 0x1f) ^ 0xffffffffU);
    }
    uVar1 = (uint)uVar9 + 1;
    uVar9 = (ulonglong)uVar1;
  } while (uVar1 < 5);
  lVar6 = param_1 + 0x66c8;
  uVar9 = 0;
  do {
    if (*(longlong *)(lVar6 + uVar9 * 8) != 0) {
      uVar3 = (*(code *)puVar2)(0x180225000);
      (*extraout_x11_03)(uVar3,uVar9,0,0,0);
      *(undefined4 *)(*(longlong *)(lVar6 + uVar9 * 8) + 0x84) = 0xffffffff;
      (*(code *)puVar2)();
      (*extraout_x11_04)();
      *(undefined8 *)(lVar6 + uVar9 * 8) = 0;
    }
    *(undefined4 *)(param_1 + 0x6748 + uVar9 * 4) = 0;
    *(undefined4 *)(param_1 + 0x6788 + uVar9 * 4) = 0;
    uVar1 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  if (*(longlong *)(&DAT_000066c0 + param_1) != 0) {
    uVar3 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_05)(uVar3,0,0);
    *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x70) = 0;
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_06)();
    *(undefined8 *)(&DAT_000066c0 + param_1) = 0;
  }
  if (*(longlong *)(param_1 + 0xc490) != 0) {
    FUN_1801e40e8();
    *(undefined8 *)(param_1 + 0xc490) = 0;
  }
  if (*(longlong *)(param_1 + 0xc498) != 0) {
    FUN_1801e3bf8();
    *(undefined8 *)(param_1 + 0xc498) = 0;
  }
  if (*(longlong *)(param_1 + 0xc488) != 0) {
    uVar3 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_07)(uVar3,0);
    FUN_1801dcdf0(*(undefined8 *)(param_1 + 0xc488));
    *(undefined8 *)(param_1 + 0xc488) = 0;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uVar3 = (*(code *)puVar2)(0x180225000);
  (*extraout_x11_08)(uVar3,4,1,&local_88,&local_98);
  lVar6 = 0;
  do {
    lVar5 = *(longlong *)(param_1 + 0x30 + lVar6 * 8);
    uVar3 = 0;
    if (lVar5 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x30);
      (*(code *)puVar2)();
      uVar3 = (*extraout_x11_09)();
      if (lVar5 != 0) {
        (*(code *)puVar2)();
        uVar3 = (*extraout_x11_10)(lVar5);
      }
      *(undefined8 *)(param_1 + 0x30 + lVar6 * 8) = 0;
      *(undefined8 *)(param_1 + 0xc460 + lVar6 * 8) = 0;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar3 = FUN_18010a318();
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0xc480) = 0;
  }
  uVar9 = 0;
  iVar8 = 0;
  if (*(int *)(param_1 + 0x68e8) != 0) {
    if (*(int *)(param_1 + 0x68e8) == 0) {
      lVar6 = 8;
      goto LAB_1801d3244;
    }
    do {
      iVar8 = (int)uVar9;
      lVar6 = *(longlong *)(param_1 + 0x68e0) + uVar9 * 0x898 + 0x10;
LAB_1801d3244:
      uVar3 = FUN_1801dbac8(uVar3,lVar6);
      uVar9 = (ulonglong)(iVar8 + 1U);
    } while (iVar8 + 1U < *(uint *)(param_1 + 0x68e8));
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x68d8));
  *(undefined8 *)(param_1 + 0x68d8) = 0;
  *(undefined8 *)(param_1 + 0x68e0) = 0;
  *(undefined4 *)(param_1 + 0x68e8) = 0;
  *(undefined4 *)(param_1 + 0x68ec) = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x6900) != 0) {
    if (*(int *)(param_1 + 0x6900) == 0) {
      puVar7 = (undefined8 *)&DAT_00000008;
      goto LAB_1801d32a8;
    }
    do {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68f8) + uVar9 * 0x18 + 0x10);
LAB_1801d32a8:
      puVar7 = (undefined8 *)*puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        FUN_1802229d8(*puVar7);
        FUN_1802229d8(puVar7,0x10);
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x6900));
  }
  uVar3 = FUN_1802229d8(*(undefined8 *)(param_1 + 0x68f0));
  *(undefined8 *)(param_1 + 0x68f0) = 0;
  *(undefined8 *)(param_1 + 0x68f8) = 0;
  *(undefined4 *)(param_1 + 0x6900) = 0;
  *(undefined4 *)(param_1 + 0x6904) = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x68c8) != 0) {
    if (*(int *)(param_1 + 0x68c8) == 0) {
      puVar7 = (undefined8 *)&DAT_00000008;
      goto LAB_1801d3328;
    }
    do {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68c0) + uVar9 * 0x18 + 0x10);
LAB_1801d3328:
      plVar4 = (longlong *)*puVar7;
      if ((int)plVar4[1] != 0) {
        uVar10 = 0;
        do {
          uVar3 = FUN_1801dbac8(uVar3,*plVar4 + uVar10 * 0x888);
          plVar4 = (longlong *)*puVar7;
          uVar1 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(plVar4 + 1));
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_1802229d8(*plVar4);
        uVar3 = FUN_1802229d8(plVar4,0x10);
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x68c8));
  }
  uVar3 = FUN_1802229d8(*(undefined8 *)(param_1 + 0x68b8));
  *(undefined8 *)(param_1 + 0x68b8) = 0;
  *(undefined8 *)(param_1 + 0x68c0) = 0;
  *(undefined4 *)(param_1 + 0x68c8) = 0;
  *(undefined4 *)(param_1 + 0x68cc) = 0;
  uVar9 = 0;
  iVar8 = 0;
  if (*(int *)(param_1 + 0x6940) != 0) {
    if (*(int *)(param_1 + 0x6940) == 0) {
      lVar6 = 8;
      goto LAB_1801d33d0;
    }
    do {
      iVar8 = (int)uVar9;
      lVar6 = *(longlong *)(param_1 + 0x6938) + uVar9 * 0x248 + 0x10;
LAB_1801d33d0:
      uVar3 = FUN_1801dbbb8(uVar3,lVar6);
      uVar9 = (ulonglong)(iVar8 + 1U);
    } while (iVar8 + 1U < *(uint *)(param_1 + 0x6940));
  }
  uVar3 = FUN_1802229d8(*(undefined8 *)(param_1 + 0x6930));
  *(undefined8 *)(param_1 + 0x6930) = 0;
  *(undefined8 *)(param_1 + 0x6938) = 0;
  *(undefined4 *)(param_1 + 0x6940) = 0;
  *(undefined4 *)(param_1 + 0x6944) = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x6920) != 0) {
    if (*(int *)(param_1 + 0x6920) == 0) {
      puVar7 = (undefined8 *)&DAT_00000008;
      goto LAB_1801d3438;
    }
    do {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x6918) + uVar9 * 0x18 + 0x10);
LAB_1801d3438:
      plVar4 = (longlong *)*puVar7;
      if ((int)plVar4[1] != 0) {
        uVar10 = 0;
        do {
          uVar3 = FUN_1801dbbb8(uVar3,*plVar4 + uVar10 * 0x238);
          plVar4 = (longlong *)*puVar7;
          uVar1 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(plVar4 + 1));
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_1802229d8(*plVar4);
        uVar3 = FUN_1802229d8(plVar4,0x10);
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x6920));
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x6910));
  *(undefined8 *)(param_1 + 0x6910) = 0;
  *(undefined8 *)(param_1 + 0x6918) = 0;
  *(undefined4 *)(param_1 + 0x6920) = 0;
  *(undefined4 *)(param_1 + 0x6924) = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x6954) != 0) {
    do {
      FUN_1801e3bf8(*(undefined8 *)(*(longlong *)(param_1 + 0x6948) + uVar9 * 0x18 + 0x10));
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x6954));
  }
  *(undefined4 *)(param_1 + 0x6954) = 0;
  return;
}

