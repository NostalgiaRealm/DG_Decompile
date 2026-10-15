/*
 * FUN_180023b14 at 180023b14
 * undefined8 __fastcall FUN_180023b14(longlong * param_1, undefined8 * param_2)
 * Address ranges: 180023b14-180023c3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180023b14(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar5 = 0;
  uVar12 = *(uint *)((longlong)param_1 + 0xc);
  uVar13 = CONCAT44(*(undefined4 *)param_2,*(undefined4 *)((longlong)param_2 + 4));
  if (uVar12 != 0) {
    uVar9 = 0;
    do {
      uVar5 = uVar12 + uVar9 >> 1;
      uVar10 = *(ulonglong *)(*param_1 + (ulonglong)uVar5 * 0x20);
      uVar4 = uVar5;
      if (uVar10 <= uVar13) {
        if (uVar13 <= uVar10) break;
        uVar9 = uVar5 + 1;
        uVar4 = uVar12;
        uVar5 = uVar9;
      }
      uVar12 = uVar4;
    } while (uVar12 != uVar9);
    if ((uVar5 != *(uint *)((longlong)param_1 + 0xc)) &&
       (*(ulonglong *)((ulonglong)uVar5 * 0x20 + *param_1) == uVar13)) goto LAB_180023c26;
  }
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar3 = ZEXT816(0x20) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar6 = auVar3._0_8_;
    if (auVar3._8_8_ != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    lVar7 = thunk_FUN_180060a9c(uVar6);
    if (lVar7 != 0) {
      uVar12 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar8 = *param_1;
          uVar10 = (ulonglong)uVar12;
          uVar12 = uVar12 + 1;
          lVar11 = uVar10 * 0x20;
          puVar1 = (undefined8 *)(lVar8 + lVar11);
          uVar6 = puVar1[1];
          *(undefined8 *)(lVar11 + lVar7) = *puVar1;
          ((undefined8 *)(lVar11 + lVar7))[1] = uVar6;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar11);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar7);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
        } while (uVar12 < *(uint *)(param_1 + 1));
      }
      FUN_180060ac0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar7;
    }
  }
  uVar12 = *(uint *)((longlong)param_1 + 0xc);
  while (uVar5 < uVar12) {
    lVar7 = *param_1;
    lVar8 = (ulonglong)(uVar12 - 1) * 0x20;
    puVar1 = (undefined8 *)(lVar7 + lVar8);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + (ulonglong)uVar12 * 0x20);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x10 + (ulonglong)uVar12 * 0x20);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    uVar12 = uVar12 - 1;
  }
  FUN_180024134(param_1,uVar5,uVar13,param_2);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_180023c26:
  return *(undefined8 *)((ulonglong)uVar5 * 0x20 + 0x18 + *param_1);
}

