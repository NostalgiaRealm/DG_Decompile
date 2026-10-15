/*
 * FUN_1800b8c38 at 1800b8c38
 * undefined8 __fastcall FUN_1800b8c38(longlong * param_1, uint * param_2)
 * Address ranges: 1800b8c38-1800b8d7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b8c38(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar11 = (ulonglong)*param_2;
  uVar9 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = 0;
  if (uVar9 != 0) {
    uVar12 = 0;
    do {
      uVar5 = uVar9 + uVar12 >> 1;
      uVar10 = *(ulonglong *)(*param_1 + (ulonglong)uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar10 <= uVar11) {
        if (uVar11 <= uVar10) break;
        uVar12 = uVar5 + 1;
        uVar4 = uVar9;
        uVar5 = uVar12;
      }
      uVar9 = uVar4;
    } while (uVar9 != uVar12);
    if ((uVar5 != *(uint *)((longlong)param_1 + 0xc)) &&
       (lVar7 = (ulonglong)uVar5 * 0x18, *(ulonglong *)(lVar7 + *param_1) == uVar11))
    goto LAB_1800b8d6b;
  }
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar3 = ZEXT816(0x18) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar6 = auVar3._0_8_;
    if (auVar3._8_8_ != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    lVar7 = thunk_FUN_1800fbccc(uVar6);
    if (lVar7 != 0) {
      uVar10 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar2 = *param_1;
          uVar9 = (int)uVar10 + 1;
          puVar8 = (undefined8 *)(lVar2 + uVar10 * 0x18);
          uVar6 = puVar8[1];
          puVar1 = (undefined8 *)(lVar7 + uVar10 * 0x18);
          *puVar1 = *puVar8;
          puVar1[1] = uVar6;
          *(undefined8 *)(lVar7 + 0x10 + uVar10 * 0x18) =
               *(undefined8 *)(lVar2 + 0x10 + uVar10 * 0x18);
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(param_1 + 1));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar7;
    }
  }
  uVar9 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)uVar9;
  while (uVar5 < uVar9) {
    lVar7 = *param_1;
    uVar9 = (int)uVar10 - 1;
    uVar13 = (ulonglong)uVar9;
    puVar8 = (undefined8 *)(lVar7 + uVar13 * 0x18);
    uVar6 = puVar8[1];
    puVar1 = (undefined8 *)(lVar7 + uVar10 * 0x18);
    *puVar1 = *puVar8;
    puVar1[1] = uVar6;
    *(undefined8 *)(lVar7 + 0x10 + uVar10 * 0x18) = *(undefined8 *)(lVar7 + 0x10 + uVar13 * 0x18);
    uVar10 = uVar13;
  }
  lVar7 = (ulonglong)uVar5 * 0x18;
  *(ulonglong *)(lVar7 + *param_1) = uVar11;
  *(uint *)(lVar7 + 8 + *param_1) = *param_2;
  lVar2 = *param_1;
  puVar8 = FUN_1800c42a8((longlong)param_1,*param_2);
  *(undefined8 **)(lVar7 + 0x10 + lVar2) = puVar8;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_1800b8d6b:
  return *(undefined8 *)(lVar7 + 0x10 + *param_1);
}

