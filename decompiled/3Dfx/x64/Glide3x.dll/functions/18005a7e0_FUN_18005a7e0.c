/*
 * FUN_18005a7e0 at 18005a7e0
 * undefined8 __fastcall FUN_18005a7e0(longlong * param_1, longlong * param_2)
 * Address ranges: 18005a7e0-18005a985
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005a7e0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  uVar6 = 0;
  uVar12 = ((longlong)*(int *)((longlong)param_2 + 0x14) + param_2[1] << 0x20 |
           (ulonglong)*(uint *)(param_2 + 2)) + *param_2;
  uVar13 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar13 != 0) {
    lVar10 = *param_1;
    uVar11 = 0;
    do {
      uVar6 = uVar13 + uVar11 >> 1;
      uVar7 = *(ulonglong *)(lVar10 + (ulonglong)uVar6 * 0x28);
      uVar5 = uVar6;
      if (uVar7 <= uVar12) {
        if (uVar12 <= uVar7) break;
        uVar11 = uVar6 + 1;
        uVar5 = uVar13;
        uVar6 = uVar11;
      }
      uVar13 = uVar5;
    } while (uVar13 != uVar11);
    if ((uVar6 != *(uint *)((longlong)param_1 + 0xc)) &&
       (uVar7 = (ulonglong)uVar6, *(ulonglong *)(lVar10 + uVar7 * 0x28) == uVar12)) {
      lVar8 = *param_2 - *(longlong *)(lVar10 + 8 + uVar7 * 0x28);
      if ((lVar8 == 0) &&
         (lVar8 = param_2[1] - *(longlong *)(lVar10 + 0x10 + uVar7 * 0x28), lVar8 == 0)) {
        lVar8 = param_2[2] - *(longlong *)(lVar10 + 0x18 + uVar7 * 0x28);
      }
      if (lVar8 != 0) {
        plVar3 = *(longlong **)(lVar10 + 0x20 + uVar7 * 0x28);
        FUN_1800454f8(param_1[2],(ulonglong)plVar3,(undefined *)0x0,'\x01');
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_18005a988(param_1,(ulonglong)uVar6,uVar12,param_2);
      }
      goto LAB_18005a96d;
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar4 = ZEXT816(0x28) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar9 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    lVar10 = thunk_FUN_180060a9c(uVar9);
    if (lVar10 != 0) {
      uVar7 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar8 = *param_1;
          uVar13 = (int)uVar7 + 1;
          puVar1 = (undefined8 *)(lVar8 + uVar7 * 0x28);
          uVar9 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + uVar7 * 0x28);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + uVar7 * 0x28);
          uVar9 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x10 + uVar7 * 0x28);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          *(undefined8 *)(lVar10 + 0x20 + uVar7 * 0x28) =
               *(undefined8 *)(lVar8 + 0x20 + uVar7 * 0x28);
          uVar7 = (ulonglong)uVar13;
        } while (uVar13 < *(uint *)(param_1 + 1));
      }
      FUN_180060ac0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar10;
    }
  }
  uVar13 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)uVar13;
  while (uVar6 < uVar13) {
    lVar10 = *param_1;
    uVar13 = (int)uVar7 - 1;
    uVar14 = (ulonglong)uVar13;
    puVar1 = (undefined8 *)(lVar10 + uVar14 * 0x28);
    uVar9 = puVar1[1];
    puVar2 = (undefined8 *)(lVar10 + uVar7 * 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar1 = (undefined8 *)(lVar10 + 0x10 + uVar14 * 0x28);
    uVar9 = puVar1[1];
    puVar2 = (undefined8 *)(lVar10 + 0x10 + uVar7 * 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    *(undefined8 *)(lVar10 + 0x20 + uVar7 * 0x28) = *(undefined8 *)(lVar10 + 0x20 + uVar14 * 0x28);
    uVar7 = uVar14;
  }
  FUN_18005a988(param_1,(ulonglong)uVar6,uVar12,param_2);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_18005a96d:
  return *(undefined8 *)(*param_1 + 0x20 + (ulonglong)uVar6 * 0x28);
}

