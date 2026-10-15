/*
 * FUN_180033f70 at 180033f70
 * undefined FUN_180033f70(void)
 * Address ranges: 180033f70-180034193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180033f70(undefined8 *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong local_50;
  ulonglong uStack_48;
  
  lVar10 = param_1[3];
  uVar4 = *(uint *)(lVar10 + 0x10);
  if (uVar4 != 0) {
    uVar8 = 0;
    uVar6 = uVar4;
    do {
      uVar5 = uVar6 + uVar8 >> 1;
      uVar9 = (ulonglong)uVar5;
      uVar11 = *(ulonglong *)(*(longlong *)(lVar10 + 8) + uVar9 * 0x20);
      if (uVar11 <= param_2) {
        if (param_2 <= uVar11) break;
        uVar8 = uVar5 + 1;
        uVar9 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (uVar6 != uVar8);
    if ((uint)uVar9 != uVar4) {
      if ((*(ulonglong *)(uVar9 * 0x20 + *(longlong *)(lVar10 + 8)) == param_2) &&
         (lVar10 = (uVar9 * 0x20 | 0x10) + *(longlong *)(lVar10 + 8), lVar10 != 0)) {
        return lVar10;
      }
    }
  }
  (**(code **)*param_1)(param_1,&local_50,param_2);
  plVar12 = (longlong *)param_1[3];
  uVar9 = 0;
  uVar4 = *(uint *)(plVar12 + 2);
  if (uVar4 != 0) {
    uVar8 = 0;
    uVar6 = uVar4;
    do {
      uVar5 = uVar6 + uVar8 >> 1;
      uVar9 = (ulonglong)uVar5;
      uVar11 = *(ulonglong *)(plVar12[1] + uVar9 * 0x20);
      if (uVar11 <= param_2) {
        if (param_2 <= uVar11) break;
        uVar8 = uVar5 + 1;
        uVar9 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (uVar6 != uVar8);
  }
  uVar11 = uVar9 << 5;
  if (((uint)uVar9 == uVar4) ||
     (puVar1 = (ulonglong *)(plVar12[1] + uVar9 * 0x20), *puVar1 != param_2)) {
    uVar8 = *(uint *)((longlong)plVar12 + 0x14);
    if (uVar8 == uVar4) {
      uVar4 = 0x10;
      if (uVar8 != 0) {
        uVar4 = uVar8 << 1;
      }
      lVar10 = thunk_FUN_180102f80((ulonglong)uVar4 << 5);
      if (lVar10 != 0) {
        uVar7 = 0;
        if ((int)plVar12[2] != 0) {
          do {
            uVar8 = (int)uVar7 + 1;
            puVar2 = (undefined8 *)(plVar12[1] + uVar7 * 0x20);
            puVar3 = (undefined8 *)(lVar10 + uVar7 * 0x20);
            uVar15 = *puVar2;
            uVar14 = puVar2[3];
            uVar13 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar15;
            puVar3[3] = uVar14;
            puVar3[2] = uVar13;
            uVar7 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(plVar12 + 2));
        }
        thunk_FUN_180102fc0(*plVar12);
        *plVar12 = lVar10;
        plVar12[1] = lVar10;
        *(uint *)((longlong)plVar12 + 0x14) = uVar4;
      }
    }
    uVar7 = (ulonglong)*(uint *)(plVar12 + 2);
    if (*(uint *)((longlong)plVar12 + 0x14) != *(uint *)(plVar12 + 2)) {
      while ((uint)uVar9 < (uint)uVar7) {
        uVar11 = (ulonglong)((uint)uVar7 - 1);
        puVar2 = (undefined8 *)(plVar12[1] + uVar7 * 0x20);
        puVar3 = (undefined8 *)(plVar12[1] + uVar11 * 0x20);
        uVar15 = *puVar3;
        uVar14 = puVar3[3];
        uVar13 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar15;
        puVar2[3] = uVar14;
        puVar2[2] = uVar13;
        uVar7 = uVar11;
      }
      uVar11 = uVar9 * 0x20;
      *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
      *(ulonglong *)(uVar11 + plVar12[1] + 8) = param_2;
      lVar10 = plVar12[1];
      *(ulonglong *)(uVar11 + lVar10 + 0x18) = uStack_48;
      *(ulonglong *)(uVar11 + lVar10 + 0x10) = local_50;
      *(ulonglong *)(plVar12[1] + uVar11) = param_2;
    }
  }
  else {
    puVar1[3] = uStack_48;
    puVar1[2] = local_50;
  }
  return (uVar11 | 0x10) + plVar12[1];
}

