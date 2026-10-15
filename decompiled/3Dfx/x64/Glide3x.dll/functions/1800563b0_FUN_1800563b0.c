/*
 * FUN_1800563b0 at 1800563b0
 * undefined8 __fastcall FUN_1800563b0(longlong * param_1, uint * param_2)
 * Address ranges: 1800563b0-18005658a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800563b0(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar6 = 0;
  uVar13 = (ulonglong)
           ((((((param_2[6] - 1) * 0x10 | param_2[5] - 1) << 3 | param_2[3]) << 3 | param_2[2]) << 3
            | param_2[1]) << 8 | *param_2);
  uVar11 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      uVar6 = uVar11 + uVar10 >> 1;
      uVar12 = *(ulonglong *)(*param_1 + (ulonglong)uVar6 * 0x48);
      uVar5 = uVar6;
      if (uVar12 <= uVar13) {
        if (uVar13 <= uVar12) break;
        uVar10 = uVar6 + 1;
        uVar6 = uVar10;
        uVar5 = uVar11;
      }
      uVar11 = uVar5;
    } while (uVar11 != uVar10);
    if ((uVar6 != *(uint *)((longlong)param_1 + 0xc)) &&
       (lVar8 = (ulonglong)uVar6 * 0x48, *(ulonglong *)(lVar8 + *param_1) == uVar13))
    goto LAB_180056578;
  }
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar4 = ZEXT816(0x48) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar7 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = thunk_FUN_180060a9c(uVar7);
    if (lVar8 != 0) {
      uVar12 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar3 = *param_1;
          uVar11 = (int)uVar12 + 1;
          puVar1 = (undefined8 *)(lVar3 + uVar12 * 0x48);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + uVar12 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar12 * 0x48);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + 0x10 + uVar12 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(lVar3 + 0x20 + uVar12 * 0x48);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + 0x20 + uVar12 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(lVar3 + 0x30 + uVar12 * 0x48);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + 0x30 + uVar12 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          *(undefined8 *)(lVar8 + 0x40 + uVar12 * 0x48) =
               *(undefined8 *)(lVar3 + 0x40 + uVar12 * 0x48);
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 1));
      }
      FUN_180060ac0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar8;
    }
  }
  uVar11 = *(uint *)((longlong)param_1 + 0xc);
  uVar12 = (ulonglong)uVar11;
  while (uVar6 < uVar11) {
    lVar8 = *param_1;
    uVar11 = (int)uVar12 - 1;
    uVar14 = (ulonglong)uVar11;
    puVar1 = (undefined8 *)(lVar8 + uVar14 * 0x48);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)(lVar8 + uVar12 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar1 = (undefined8 *)(lVar8 + 0x10 + uVar14 * 0x48);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)(lVar8 + 0x10 + uVar12 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar1 = (undefined8 *)(lVar8 + 0x20 + uVar14 * 0x48);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)(lVar8 + 0x20 + uVar12 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar1 = (undefined8 *)(lVar8 + 0x30 + uVar14 * 0x48);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)(lVar8 + 0x30 + uVar12 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(undefined8 *)(lVar8 + 0x40 + uVar12 * 0x48) = *(undefined8 *)(lVar8 + 0x40 + uVar14 * 0x48);
    uVar12 = uVar14;
  }
  lVar8 = (ulonglong)uVar6 * 0x48;
  *(ulonglong *)(lVar8 + *param_1) = uVar13;
  lVar3 = *param_1;
  uVar7 = *(undefined8 *)(param_2 + 2);
  puVar1 = (undefined8 *)(lVar8 + 8 + lVar3);
  *puVar1 = *(undefined8 *)param_2;
  puVar1[1] = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 6);
  puVar1 = (undefined8 *)(lVar8 + 0x18 + lVar3);
  *puVar1 = *(undefined8 *)(param_2 + 4);
  puVar1[1] = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 10);
  puVar1 = (undefined8 *)(lVar8 + 0x28 + lVar3);
  *puVar1 = *(undefined8 *)(param_2 + 8);
  puVar1[1] = uVar7;
  *(uint *)(lVar8 + 0x38 + lVar3) = param_2[0xc];
  puVar9 = (undefined1 *)FUN_180060a9c(0x3c0);
  if (puVar9 != (undefined1 *)0x0) {
    FUN_180060f94(puVar9,0,0x3c0);
  }
  *(undefined1 **)(lVar8 + 0x40 + *param_1) = puVar9;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_180056578:
  return *(undefined8 *)(lVar8 + 0x40 + *param_1);
}

