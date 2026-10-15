/*
 * FUN_18013fab0 at 18013fab0
 * undefined FUN_18013fab0(void)
 * Address ranges: 18013fab0-18013fdbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18013fab0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  code *extraout_x11;
  ulonglong uVar12;
  undefined8 uVar13;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  param_2 = *(ulonglong *)(param_1 + 8) & param_2;
  uVar8 = 0;
  if (uVar4 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x18);
    iVar10 = 0;
    uVar12 = (ulonglong)uVar4;
    do {
      uVar5 = (uint)((int)uVar12 + iVar10) >> 1;
      uVar8 = (ulonglong)uVar5;
      uVar6 = *(ulonglong *)(lVar11 + 8 + uVar8 * 0x18);
      uVar9 = uVar8;
      if ((uVar6 <= param_3) &&
         ((uVar6 != param_3 || (*(ulonglong *)(lVar11 + uVar8 * 0x18) <= param_2)))) {
        if ((param_3 <= uVar6) &&
           ((uVar6 != param_3 || (param_2 <= *(ulonglong *)(lVar11 + uVar8 * 0x18))))) break;
        iVar10 = uVar5 + 1;
        uVar8 = (ulonglong)(uVar5 + 1);
        uVar9 = uVar12;
      }
      uVar12 = uVar9;
    } while ((int)uVar9 != iVar10);
  }
  if (((((uint)uVar8 == uVar4) ||
       (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x18), *puVar1 != param_2))
      || (puVar1[1] != param_3)) || (puVar1 + 2 == (ulonglong *)0x0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar8 = (*extraout_x11)(param_1);
    if (uVar8 != 0) {
      uVar4 = *(uint *)(param_1 + 0x20);
      uVar12 = 0;
      if (uVar4 != 0) {
        lVar11 = *(longlong *)(param_1 + 0x18);
        iVar10 = 0;
        uVar9 = (ulonglong)uVar4;
        do {
          uVar5 = (uint)((int)uVar9 + iVar10) >> 1;
          uVar6 = (ulonglong)uVar5;
          uVar7 = *(ulonglong *)(lVar11 + 8 + uVar6 * 0x18);
          uVar12 = uVar6;
          if ((uVar7 <= param_3) &&
             ((uVar7 != param_3 || (*(ulonglong *)(lVar11 + uVar6 * 0x18) <= param_2)))) {
            if ((param_3 <= uVar7) &&
               ((uVar7 != param_3 || (param_2 <= *(ulonglong *)(lVar11 + uVar6 * 0x18))))) break;
            iVar10 = uVar5 + 1;
            uVar6 = uVar9;
            uVar12 = (ulonglong)(uVar5 + 1);
          }
          uVar9 = uVar6;
        } while ((int)uVar6 != iVar10);
        if ((((uint)uVar12 != uVar4) &&
            (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar12 * 0x18),
            *puVar1 == param_2)) && (puVar1[1] == param_3)) {
          puVar1[2] = uVar8;
          return uVar8;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x24);
      if (uVar5 == uVar4) {
        uVar4 = 0x10;
        if (uVar5 != 0) {
          uVar4 = uVar5 << 1;
        }
        lVar11 = FUN_1802229a8((ulonglong)uVar4 * 0x18);
        if (lVar11 != 0) {
          uVar9 = 0;
          if (*(int *)(param_1 + 0x20) != 0) {
            do {
              uVar5 = (int)uVar9 + 1;
              puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x18);
              puVar3 = (undefined8 *)(lVar11 + uVar9 * 0x18);
              uVar13 = *puVar2;
              puVar3[1] = puVar2[1];
              *puVar3 = uVar13;
              puVar3[2] = puVar2[2];
              uVar9 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(param_1 + 0x20));
          }
          FUN_1802229d8(*(undefined8 *)(param_1 + 0x10));
          *(longlong *)(param_1 + 0x10) = lVar11;
          *(longlong *)(param_1 + 0x18) = lVar11;
          *(uint *)(param_1 + 0x24) = uVar4;
        }
      }
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x20);
      if (*(uint *)(param_1 + 0x24) != *(uint *)(param_1 + 0x20)) {
        while ((uint)uVar12 < (uint)uVar9) {
          uVar6 = (ulonglong)((uint)uVar9 - 1);
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x18);
          puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar6 * 0x18);
          uVar13 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar13;
          puVar2[2] = puVar3[2];
          uVar9 = uVar6;
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        puVar1 = (ulonglong *)(uVar12 * 0x18 + *(longlong *)(param_1 + 0x18));
        puVar1[1] = param_3;
        *puVar1 = param_2;
        *(ulonglong *)(uVar12 * 0x18 + *(longlong *)(param_1 + 0x18) + 0x10) = uVar8;
      }
    }
  }
  else {
    uVar8 = puVar1[2];
  }
  return uVar8;
}

