/*
 * FUN_180031d98 at 180031d98
 * undefined FUN_180031d98(void)
 * Address ranges: 180031d98-18003208f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180031d98(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  
  uVar4 = *(uint *)(param_1 + 4);
  param_2 = param_1[1] & param_2;
  uVar7 = 0;
  if (uVar4 != 0) {
    lVar10 = param_1[3];
    iVar9 = 0;
    uVar13 = (ulonglong)uVar4;
    do {
      uVar5 = (uint)((int)uVar13 + iVar9) >> 1;
      uVar7 = (ulonglong)uVar5;
      uVar11 = *(ulonglong *)(lVar10 + 8 + uVar7 * 0x18);
      uVar8 = uVar7;
      if ((uVar11 <= param_3) &&
         ((uVar11 != param_3 || (*(ulonglong *)(lVar10 + uVar7 * 0x18) <= param_2)))) {
        if ((param_3 <= uVar11) &&
           ((uVar11 != param_3 || (param_2 <= *(ulonglong *)(lVar10 + uVar7 * 0x18))))) break;
        iVar9 = uVar5 + 1;
        uVar7 = (ulonglong)(uVar5 + 1);
        uVar8 = uVar13;
      }
      uVar13 = uVar8;
    } while ((int)uVar8 != iVar9);
  }
  if (((((uint)uVar7 == uVar4) ||
       (puVar1 = (ulonglong *)(param_1[3] + uVar7 * 0x18), *puVar1 != param_2)) ||
      (puVar1[1] != param_3)) || (puVar1 + 2 == (ulonglong *)0x0)) {
    iVar9 = *(int *)(param_1[5] + (ulonglong)*(uint *)(param_1 + 6) * 0x18c0 + 0x6cc);
    uVar6 = 0x40;
    if (0xa0ff < iVar9) {
      uVar6 = 0x41;
    }
    if (0xafff < iVar9) {
      uVar6 = 0x50;
    }
    uVar7 = (**(code **)*param_1)
                      (param_1,param_1[5],(ulonglong)*(uint *)(param_1 + 6),param_2,param_3,uVar6);
    if (uVar7 != 0) {
      uVar4 = *(uint *)(param_1 + 4);
      uVar13 = 0;
      if (uVar4 != 0) {
        lVar10 = param_1[3];
        iVar9 = 0;
        uVar8 = (ulonglong)uVar4;
        do {
          uVar5 = (uint)((int)uVar8 + iVar9) >> 1;
          uVar11 = (ulonglong)uVar5;
          uVar12 = *(ulonglong *)(lVar10 + 8 + uVar11 * 0x18);
          uVar13 = uVar11;
          if ((uVar12 <= param_3) &&
             ((uVar12 != param_3 || (*(ulonglong *)(lVar10 + uVar11 * 0x18) <= param_2)))) {
            if ((param_3 <= uVar12) &&
               ((uVar12 != param_3 || (param_2 <= *(ulonglong *)(lVar10 + uVar11 * 0x18))))) break;
            iVar9 = uVar5 + 1;
            uVar11 = uVar8;
            uVar13 = (ulonglong)(uVar5 + 1);
          }
          uVar8 = uVar11;
        } while ((int)uVar11 != iVar9);
        if ((((uint)uVar13 != uVar4) &&
            (puVar1 = (ulonglong *)(param_1[3] + uVar13 * 0x18), *puVar1 == param_2)) &&
           (puVar1[1] == param_3)) {
          puVar1[2] = uVar7;
          return uVar7;
        }
      }
      uVar5 = *(uint *)((longlong)param_1 + 0x24);
      if (uVar5 == uVar4) {
        uVar4 = 0x10;
        if (uVar5 != 0) {
          uVar4 = uVar5 << 1;
        }
        lVar10 = thunk_FUN_180102f80((ulonglong)uVar4 * 0x18);
        if (lVar10 != 0) {
          uVar8 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              uVar5 = (int)uVar8 + 1;
              puVar2 = (undefined8 *)(param_1[3] + uVar8 * 0x18);
              puVar3 = (undefined8 *)(lVar10 + uVar8 * 0x18);
              uVar14 = *puVar2;
              puVar3[1] = puVar2[1];
              *puVar3 = uVar14;
              puVar3[2] = puVar2[2];
              uVar8 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(param_1 + 4));
          }
          thunk_FUN_180102fc0(param_1[2]);
          param_1[2] = lVar10;
          param_1[3] = lVar10;
          *(uint *)((longlong)param_1 + 0x24) = uVar4;
        }
      }
      uVar8 = (ulonglong)*(uint *)(param_1 + 4);
      if (*(uint *)((longlong)param_1 + 0x24) != *(uint *)(param_1 + 4)) {
        while ((uint)uVar13 < (uint)uVar8) {
          uVar11 = (ulonglong)((uint)uVar8 - 1);
          puVar2 = (undefined8 *)(param_1[3] + uVar8 * 0x18);
          puVar3 = (undefined8 *)(param_1[3] + uVar11 * 0x18);
          uVar14 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar14;
          puVar2[2] = puVar3[2];
          uVar8 = uVar11;
        }
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        puVar1 = (ulonglong *)(uVar13 * 0x18 + param_1[3]);
        puVar1[1] = param_3;
        *puVar1 = param_2;
        *(ulonglong *)(uVar13 * 0x18 + param_1[3] + 0x10) = uVar7;
      }
    }
  }
  else {
    uVar7 = puVar1[2];
  }
  return uVar7;
}

