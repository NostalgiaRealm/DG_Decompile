/*
 * FUN_1800b84f8 at 1800b84f8
 * undefined FUN_1800b84f8(void)
 * Address ranges: 1800b84f8-1800b8b47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b84f8(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar8 = 0;
  if (*(int *)(param_1 + 0x400) != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar8 * 8) != 0) {
        FUN_180005300(param_1,uVar8);
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x400));
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x3f8));
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  lVar9 = param_1 + 0x1338;
  uVar8 = 0;
  do {
    if (*(longlong *)(lVar9 + uVar8 * 8) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                (*(longlong **)(param_1 + 0x28),uVar8,0,0,0,0,0,0);
      lVar6 = *(longlong *)(lVar9 + uVar8 * 8);
      uVar1 = 1 << (ulonglong)((uint)uVar8 & 0x1f);
      *(uint *)(lVar6 + 0x38) = *(uint *)(lVar6 + 0x38) & (uVar1 ^ 0xffffffff);
      (**(code **)(**(longlong **)(lVar9 + uVar8 * 8) + 0x10))();
      *(undefined8 *)(lVar9 + uVar8 * 8) = 0;
      *(uint *)(param_1 + 0x67f4) = *(uint *)(param_1 + 0x67f4) & (uVar1 ^ 0xffffffff);
    }
    uVar1 = (uint)uVar8 + 1;
    uVar8 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  lVar9 = param_1 + 0x13b8;
  uVar8 = 0;
  do {
    if (*(longlong *)(lVar9 + uVar8 * 8) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a8))
                (*(longlong **)(param_1 + 0x28),uVar8,0,0,0);
      (**(code **)(**(longlong **)(lVar9 + uVar8 * 8) + 0x10))();
      *(undefined8 *)(lVar9 + uVar8 * 8) = 0;
      *(uint *)(param_1 + 0x6800) =
           *(uint *)(param_1 + 0x6800) & (1 << (ulonglong)((uint)uVar8 & 0x1f) ^ 0xffffffffU);
    }
    uVar1 = (uint)uVar8 + 1;
    uVar8 = (ulonglong)uVar1;
  } while (uVar1 < 5);
  lVar9 = param_1 + 0x66c8;
  uVar8 = 0;
  do {
    if (*(longlong *)(lVar9 + uVar8 * 8) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x160))
                (*(longlong **)(param_1 + 0x28),uVar8,0,0,0);
      *(undefined4 *)(*(longlong *)(lVar9 + uVar8 * 8) + 0x84) = 0xffffffff;
      (**(code **)(**(longlong **)(lVar9 + uVar8 * 8) + 0x18))();
      *(undefined8 *)(lVar9 + uVar8 * 8) = 0;
    }
    *(undefined4 *)(param_1 + 0x6748 + uVar8 * 4) = 0;
    *(undefined4 *)(param_1 + 0x6788 + uVar8 * 4) = 0;
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  if (*(longlong *)(&DAT_000066c0 + param_1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x168))(*(longlong **)(param_1 + 0x28),0,0);
    *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x70) = 0;
    (**(code **)(**(longlong **)(&DAT_000066c0 + param_1) + 0x10))();
    *(undefined8 *)(&DAT_000066c0 + param_1) = 0;
  }
  if (*(longlong *)(param_1 + 0xc490) != 0) {
    FUN_1800c8aa8();
    *(undefined8 *)(param_1 + 0xc490) = 0;
  }
  if (*(longlong *)(param_1 + 0xc498) != 0) {
    FUN_1800c85b8();
    *(undefined8 *)(param_1 + 0xc498) = 0;
  }
  if (*(longlong *)(param_1 + 0xc488) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x120))(*(longlong **)(param_1 + 0x28),0);
    FUN_1800c1c08(*(undefined8 *)(param_1 + 0xc488));
    *(undefined8 *)(param_1 + 0xc488) = 0;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_90 = 0;
  uStack_88 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))
            (*(longlong **)(param_1 + 0x28),4,1,&local_80,&local_90);
  lVar9 = 0;
  do {
    plVar2 = *(longlong **)(param_1 + 0x30 + lVar9 * 8);
    if (plVar2 != (longlong *)0x0) {
      plVar12 = (longlong *)plVar2[6];
      (**(code **)(*plVar2 + 0x38))();
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      *(undefined8 *)(param_1 + 0x30 + lVar9 * 8) = 0;
      *(undefined8 *)(param_1 + 0xc460 + lVar9 * 8) = 0;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 4);
  plVar2 = *(longlong **)(param_1 + 0x50);
  uVar3 = 0;
  if (plVar2 != (longlong *)0x0) {
    plVar12 = (longlong *)plVar2[6];
    uVar3 = (**(code **)(*plVar2 + 0x38))();
    if (plVar12 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0xc480) = 0;
  }
  uVar8 = 0;
  iVar7 = 0;
  if (*(int *)(param_1 + 0x68e8) != 0) {
    if (*(int *)(param_1 + 0x68e8) == 0) {
      lVar9 = 8;
      goto LAB_1800b8828;
    }
    do {
      iVar7 = (int)uVar8;
      lVar9 = *(longlong *)(param_1 + 0x68e0) + uVar8 * 0x898 + 0x10;
LAB_1800b8828:
      uVar3 = FUN_1800c09f8(uVar3,lVar9);
      uVar8 = (ulonglong)(iVar7 + 1U);
    } while (iVar7 + 1U < *(uint *)(param_1 + 0x68e8));
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x68d8));
  *(undefined8 *)(param_1 + 0x68d8) = 0;
  *(undefined8 *)(param_1 + 0x68e0) = 0;
  *(undefined4 *)(param_1 + 0x68e8) = 0;
  *(undefined4 *)(param_1 + 0x68ec) = 0;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x6900) != 0) {
    if (*(int *)(param_1 + 0x6900) == 0) {
      puVar10 = (undefined8 *)&DAT_00000008;
      goto LAB_1800b888c;
    }
    do {
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x68f8) + uVar8 * 0x18 + 0x10);
LAB_1800b888c:
      puVar10 = (undefined8 *)*puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        thunk_FUN_180102fc0(*puVar10);
        FUN_180102fc0(puVar10,0x10);
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x6900));
  }
  uVar3 = thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x68f0));
  *(undefined8 *)(param_1 + 0x68f0) = 0;
  *(undefined8 *)(param_1 + 0x68f8) = 0;
  *(undefined4 *)(param_1 + 0x6900) = 0;
  *(undefined4 *)(param_1 + 0x6904) = 0;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x68c8) != 0) {
    if (*(int *)(param_1 + 0x68c8) == 0) {
      puVar10 = (undefined8 *)&DAT_00000008;
      goto LAB_1800b890c;
    }
    do {
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x68c0) + uVar8 * 0x18 + 0x10);
LAB_1800b890c:
      plVar2 = (longlong *)*puVar10;
      if ((int)plVar2[1] != 0) {
        uVar11 = 0;
        do {
          uVar3 = FUN_1800c09f8(uVar3,*plVar2 + uVar11 * 0x888);
          plVar2 = (longlong *)*puVar10;
          uVar1 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(plVar2 + 1));
      }
      if (plVar2 != (longlong *)0x0) {
        thunk_FUN_180102fc0(*plVar2);
        uVar3 = FUN_180102fc0(plVar2,0x10);
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x68c8));
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x68b8));
  *(undefined8 *)(param_1 + 0x68b8) = 0;
  *(undefined8 *)(param_1 + 0x68c0) = 0;
  *(undefined4 *)(param_1 + 0x68c8) = 0;
  *(undefined4 *)(param_1 + 0x68cc) = 0;
  uVar8 = 0;
  iVar7 = 0;
  if (*(int *)(param_1 + 0x6940) != 0) {
    if (*(int *)(param_1 + 0x6940) == 0) {
      plVar2 = (longlong *)&DAT_00000010;
      puVar10 = (undefined8 *)0x230;
      puVar5 = (undefined8 *)&DAT_00000018;
      goto LAB_1800b89c4;
    }
    do {
      iVar7 = (int)uVar8;
      lVar9 = *(longlong *)(param_1 + 0x6938) + uVar8 * 0x248;
      plVar2 = (longlong *)(lVar9 + 0x18);
      puVar10 = (undefined8 *)(lVar9 + 0x238);
      puVar5 = (undefined8 *)(lVar9 + 0x20);
LAB_1800b89c4:
      puVar4 = (undefined8 *)*plVar2;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      thunk_FUN_180102fc0(*puVar10);
      FUN_180102fc0(*puVar5,0x1270);
      uVar8 = (ulonglong)(iVar7 + 1U);
    } while (iVar7 + 1U < *(uint *)(param_1 + 0x6940));
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x6930));
  *(undefined8 *)(param_1 + 0x6930) = 0;
  *(undefined8 *)(param_1 + 0x6938) = 0;
  *(undefined4 *)(param_1 + 0x6940) = 0;
  *(undefined4 *)(param_1 + 0x6944) = 0;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x6920) != 0) {
    if (*(int *)(param_1 + 0x6920) == 0) {
      puVar10 = (undefined8 *)&DAT_00000008;
      goto LAB_1800b8a54;
    }
    do {
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x6918) + uVar8 * 0x18 + 0x10);
LAB_1800b8a54:
      plVar2 = (longlong *)*puVar10;
      if ((int)plVar2[1] != 0) {
        uVar11 = 0;
        do {
          lVar9 = *plVar2 + uVar11 * 0x238;
          puVar5 = *(undefined8 **)(lVar9 + 8);
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          thunk_FUN_180102fc0(*(undefined8 *)(lVar9 + 0x228));
          FUN_180102fc0(*(undefined8 *)(lVar9 + 0x10),0x1270);
          plVar2 = (longlong *)*puVar10;
          uVar1 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(plVar2 + 1));
      }
      if (plVar2 != (longlong *)0x0) {
        thunk_FUN_180102fc0(*plVar2);
        FUN_180102fc0(plVar2,0x10);
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x6920));
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x6910));
  *(undefined8 *)(param_1 + 0x6910) = 0;
  *(undefined8 *)(param_1 + 0x6918) = 0;
  *(undefined4 *)(param_1 + 0x6920) = 0;
  *(undefined4 *)(param_1 + 0x6924) = 0;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x6954) != 0) {
    do {
      FUN_1800c85b8(*(undefined8 *)(*(longlong *)(param_1 + 0x6948) + uVar8 * 0x18 + 0x10));
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x6954));
  }
  *(undefined4 *)(param_1 + 0x6954) = 0;
  return;
}

