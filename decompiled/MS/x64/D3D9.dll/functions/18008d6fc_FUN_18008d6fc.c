/*
 * FUN_18008d6fc at 18008d6fc
 * undefined8 __fastcall FUN_18008d6fc(longlong * param_1, int * param_2)
 * Address ranges: 18008d6fc-18008d823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18008d6fc(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar9 = (ulonglong)*param_2;
  uVar11 = *(uint *)((longlong)param_1 + 0xc);
  uVar6 = 0;
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      uVar6 = uVar11 + uVar10 >> 1;
      uVar12 = *(ulonglong *)(*param_1 + (ulonglong)uVar6 * 0x18);
      uVar5 = uVar6;
      if (uVar12 <= uVar9) {
        if (uVar9 <= uVar12) break;
        uVar6 = uVar6 + 1;
        uVar5 = uVar11;
        uVar10 = uVar6;
      }
      uVar11 = uVar5;
    } while (uVar11 != uVar10);
    if ((uVar6 != *(uint *)((longlong)param_1 + 0xc)) &&
       (*(ulonglong *)(*param_1 + (ulonglong)uVar6 * 0x18) == uVar9)) goto LAB_18008d80b;
  }
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar4 = ZEXT816(0x18) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar7 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = thunk_FUN_1800fbccc(uVar7);
    if (lVar8 != 0) {
      uVar12 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar3 = *param_1;
          uVar11 = (int)uVar12 + 1;
          puVar1 = (undefined8 *)(lVar3 + uVar12 * 0x18);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + uVar12 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          *(undefined8 *)(lVar8 + 0x10 + uVar12 * 0x18) =
               *(undefined8 *)(lVar3 + 0x10 + uVar12 * 0x18);
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 1));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar8;
    }
  }
  uVar11 = *(uint *)((longlong)param_1 + 0xc);
  uVar12 = (ulonglong)uVar11;
  while (uVar6 < uVar11) {
    lVar8 = *param_1;
    uVar11 = (int)uVar12 - 1;
    uVar13 = (ulonglong)uVar11;
    puVar1 = (undefined8 *)(lVar8 + uVar13 * 0x18);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)(lVar8 + uVar12 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(undefined8 *)(lVar8 + 0x10 + uVar12 * 0x18) = *(undefined8 *)(lVar8 + 0x10 + uVar13 * 0x18);
    uVar12 = uVar13;
  }
  FUN_18008d91c(param_1,(ulonglong)uVar6,uVar9,param_2);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_18008d80b:
  return *(undefined8 *)(*param_1 + 0x10 + (ulonglong)uVar6 * 0x18);
}

