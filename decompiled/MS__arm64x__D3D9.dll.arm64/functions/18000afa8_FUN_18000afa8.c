/*
 * FUN_18000afa8 at 18000afa8
 * undefined FUN_18000afa8(void)
 * Address ranges: 18000afa8-18000b2cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00018000b200) */

undefined4
FUN_18000afa8(longlong *param_1,undefined8 *param_2,longlong *param_3,int param_4,uint param_5)

{
  uint uVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint7 uStack_5f;
  
  if ((param_5 != 0) && (param_5 != 1)) {
    return 0x8876086c;
  }
  if (param_3 == (longlong *)0x0) {
    return 0x8876086c;
  }
  if (param_4 == 0) {
    return 0x8876086c;
  }
  uVar4 = *(uint *)(param_1 + 1);
  uVar11 = 0;
  if (uVar4 != 0) {
    lVar13 = *param_1;
    do {
      iVar8 = func_0x000180222c00(lVar13 + uVar11 * 0x28,param_2,0x10);
      if (iVar8 == 0) break;
      uVar1 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar1;
    } while (uVar1 < uVar4);
  }
  if ((uint)uVar11 != uVar4) {
    puVar3 = (undefined8 *)(*param_1 + uVar11 * 0x28);
    if ((*(uint *)((longlong)puVar3 + 0x1c) & 1) == 0) {
      thunk_FUN_180102fc0();
    }
    else {
      (**(code **)(*(longlong *)puVar3[2] + 0x10))();
    }
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    uVar15 = *param_2;
    puVar3 = (undefined8 *)(*param_1 + uVar11 * 0x28);
    puVar3[1] = param_2[1];
    *puVar3 = uVar15;
    *(uint *)((longlong)puVar3 + 0x1c) = param_5;
    if ((param_5 & 1) == 0) {
      lVar13 = thunk_FUN_180102f80(param_4);
      puVar3[2] = lVar13;
      if (lVar13 == 0) {
        return 0x8007000e;
      }
      thunk_FUN_180001218(lVar13,param_3,param_4);
      *(int *)(puVar3 + 3) = param_4;
    }
    else {
      puVar3[2] = param_3;
      *(undefined4 *)(puVar3 + 3) = 0;
      (**(code **)(*param_3 + 8))(param_3);
    }
    return 0;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar4 == uVar1) {
    uVar4 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar4 = 0x10;
    }
    uVar12 = CONCAT44(0,uVar4);
    uVar10 = uVar12 * 0x28;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    if (SUB168(auVar6 * ZEXT816(0x28),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    lVar13 = uVar10 + 8;
    if (0xfffffffffffffff7 < uVar10) {
      lVar13 = -1;
    }
    puVar9 = (ulonglong *)thunk_FUN_180102f80(lVar13);
    if (puVar9 != (ulonglong *)0x0) {
      puVar2 = puVar9 + 1;
      *puVar9 = uVar12;
      puVar9 = puVar2;
      if (uVar4 != 0) {
        do {
          puVar9[2] = 0;
          puVar9[3] = 0;
          uVar12 = uVar12 - 1;
          *(undefined1 *)(puVar9 + 4) = 0;
          puVar9[1] = 0;
          *puVar9 = 0;
          puVar9 = puVar9 + 5;
        } while (uVar12 != 0);
      }
      if (puVar2 != (ulonglong *)0x0) {
        thunk_FUN_180001218(puVar2,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x28);
        lVar13 = *param_1;
        if (lVar13 != 0) {
          lVar14 = *(longlong *)(lVar13 + -8);
          puVar3 = (undefined8 *)(lVar13 + lVar14 * 0x28);
          while (lVar14 != 0) {
            lVar14 = lVar14 + -1;
            if ((*(uint *)((longlong)puVar3 + -0xc) & 1) == 0) {
              thunk_FUN_180102fc0();
            }
            else {
              (**(code **)(*(longlong *)puVar3[-3] + 0x10))();
            }
            puVar3[-3] = 0;
            puVar3[-2] = 0;
            puVar3[-4] = 0;
            puVar3[-5] = 0;
            puVar3 = puVar3 + -5;
          }
          thunk_FUN_180102fc0(lVar13 + -8,*(longlong *)(lVar13 + -8) * 0x28 + 8);
        }
        *param_1 = (longlong)puVar2;
        *(uint *)((longlong)param_1 + 0xc) = uVar4;
        goto LAB_18000b14c;
      }
    }
    uVar5 = 0x8007000e;
  }
  else {
LAB_18000b14c:
    puVar3 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[4] = (ulonglong)uStack_5f << 8;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    uVar15 = *param_2;
    puVar3 = (undefined8 *)(*param_1 + uVar11 * 0x28);
    puVar3[1] = param_2[1];
    *puVar3 = uVar15;
    *(uint *)((longlong)puVar3 + 0x1c) = param_5;
    if ((param_5 & 1) == 0) {
      lVar13 = thunk_FUN_180102f80(param_4);
      bVar7 = lVar13 != 0;
      puVar3[2] = lVar13;
      if (lVar13 != 0) {
        thunk_FUN_180001218(lVar13,param_3,param_4);
        *(int *)(puVar3 + 3) = param_4;
      }
    }
    else {
      puVar3[2] = param_3;
      *(undefined4 *)(puVar3 + 3) = 0;
      (**(code **)(*param_3 + 8))(param_3);
      bVar7 = true;
    }
    uVar5 = 0x8007000e;
    if (bVar7) {
      uVar5 = 0;
    }
  }
  thunk_FUN_180102fc0(0);
  return uVar5;
}

