/*
 * FUN_180141ec0 at 180141ec0
 * undefined FUN_180141ec0(void)
 * Address ranges: 180141ec0-1801420f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180141ec0(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  code *extraout_x11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong local_50;
  ulonglong uStack_48;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(uint *)(lVar11 + 0x10);
  if (uVar4 != 0) {
    uVar9 = 0;
    uVar7 = uVar4;
    do {
      uVar5 = uVar7 + uVar9 >> 1;
      uVar10 = (ulonglong)uVar5;
      uVar6 = *(ulonglong *)(*(longlong *)(lVar11 + 8) + uVar10 * 0x20);
      if (uVar6 <= param_2) {
        if (param_2 <= uVar6) break;
        uVar9 = uVar5 + 1;
        uVar10 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar9);
    if ((uint)uVar10 != uVar4) {
      if ((*(ulonglong *)(uVar10 * 0x20 + *(longlong *)(lVar11 + 8)) == param_2) &&
         (lVar11 = (uVar10 * 0x20 | 0x10) + *(longlong *)(lVar11 + 8), lVar11 != 0)) {
        return lVar11;
      }
    }
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(param_1,&local_50,param_2);
  plVar12 = *(longlong **)(param_1 + 0x18);
  uVar6 = 0;
  uVar4 = *(uint *)(plVar12 + 2);
  if (uVar4 != 0) {
    uVar9 = 0;
    uVar7 = uVar4;
    do {
      uVar5 = uVar7 + uVar9 >> 1;
      uVar6 = (ulonglong)uVar5;
      uVar10 = *(ulonglong *)(plVar12[1] + uVar6 * 0x20);
      if (uVar10 <= param_2) {
        if (param_2 <= uVar10) break;
        uVar9 = uVar5 + 1;
        uVar6 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar9);
  }
  uVar10 = uVar6 << 5;
  if (((uint)uVar6 == uVar4) ||
     (puVar1 = (ulonglong *)(plVar12[1] + uVar6 * 0x20), *puVar1 != param_2)) {
    uVar9 = *(uint *)((longlong)plVar12 + 0x14);
    if (uVar9 == uVar4) {
      uVar4 = 0x10;
      if (uVar9 != 0) {
        uVar4 = uVar9 << 1;
      }
      lVar11 = FUN_1802229a8((ulonglong)uVar4 << 5);
      if (lVar11 != 0) {
        uVar8 = 0;
        if ((int)plVar12[2] != 0) {
          do {
            uVar9 = (int)uVar8 + 1;
            puVar2 = (undefined8 *)(plVar12[1] + uVar8 * 0x20);
            puVar3 = (undefined8 *)(lVar11 + uVar8 * 0x20);
            uVar13 = *puVar2;
            uVar15 = puVar2[3];
            uVar14 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar13;
            puVar3[3] = uVar15;
            puVar3[2] = uVar14;
            uVar8 = (ulonglong)uVar9;
          } while (uVar9 < *(uint *)(plVar12 + 2));
        }
        FUN_1802229d8(*plVar12);
        *plVar12 = lVar11;
        plVar12[1] = lVar11;
        *(uint *)((longlong)plVar12 + 0x14) = uVar4;
      }
    }
    uVar8 = (ulonglong)*(uint *)(plVar12 + 2);
    if (*(uint *)((longlong)plVar12 + 0x14) != *(uint *)(plVar12 + 2)) {
      while ((uint)uVar6 < (uint)uVar8) {
        uVar10 = (ulonglong)((uint)uVar8 - 1);
        puVar2 = (undefined8 *)(plVar12[1] + uVar8 * 0x20);
        puVar3 = (undefined8 *)(plVar12[1] + uVar10 * 0x20);
        uVar13 = *puVar3;
        uVar15 = puVar3[3];
        uVar14 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar13;
        puVar2[3] = uVar15;
        puVar2[2] = uVar14;
        uVar8 = uVar10;
      }
      uVar10 = uVar6 * 0x20;
      *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
      *(ulonglong *)(uVar10 + plVar12[1] + 8) = param_2;
      lVar11 = plVar12[1];
      *(ulonglong *)(uVar10 + lVar11 + 0x18) = uStack_48;
      *(ulonglong *)(uVar10 + lVar11 + 0x10) = local_50;
      *(ulonglong *)(plVar12[1] + uVar10) = param_2;
    }
  }
  else {
    puVar1[3] = uStack_48;
    puVar1[2] = local_50;
  }
  return (uVar10 | 0x10) + plVar12[1];
}

