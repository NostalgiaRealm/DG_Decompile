/*
 * FUN_180207a10 at 180207a10
 * undefined FUN_180207a10(void)
 * Address ranges: 180207a10-180207ccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180207a10(ulonglong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong local_48;
  
  uVar5 = *(ulonglong *)(param_1 + 0xb10);
  lVar6 = *(longlong *)(param_1 + 0xb18);
  uVar17 = *(ulonglong *)(param_1 + 0xb78);
  local_48 = param_2;
  thunk_FUN_1802236f8(lVar6 + 0x28);
  puVar10 = (ulonglong *)FUN_18020ebb0(lVar6 + 0x10,&local_48);
  puVar9 = __hybrid_os_arm64x_dispatch_icall;
  if (puVar10 == (ulonglong *)0x0) {
    uVar7 = *(uint *)(lVar6 + 0x20);
    uVar11 = 0;
    if (uVar7 != 0) {
      uVar14 = 0;
      uVar13 = uVar7;
      do {
        uVar8 = uVar13 + uVar14 >> 1;
        uVar11 = (ulonglong)uVar8;
        uVar16 = *(ulonglong *)(*(longlong *)(lVar6 + 0x18) + uVar11 * 0x28);
        if (uVar16 <= param_2) {
          if (param_2 <= uVar16) break;
          uVar14 = uVar8 + 1;
          uVar11 = (ulonglong)(uVar8 + 1);
          uVar8 = uVar13;
        }
        uVar13 = uVar8;
      } while (uVar13 != uVar14);
      if (((uint)uVar11 != uVar7) &&
         (puVar10 = (ulonglong *)(*(longlong *)(lVar6 + 0x18) + uVar11 * 0x28), *puVar10 == param_2)
         ) {
        puVar10[3] = param_1;
        puVar10[2] = uVar5;
        puVar10[4] = uVar17;
        goto LAB_180207cac;
      }
    }
    uVar14 = *(uint *)(lVar6 + 0x24);
    plVar1 = (longlong *)(lVar6 + 0x18);
    if (uVar14 == uVar7) {
      uVar7 = 0x10;
      if (uVar14 != 0) {
        uVar7 = uVar14 << 1;
      }
      local_48 = FUN_1802229a8((ulonglong)uVar7 * 0x28);
      if (local_48 != 0) {
        uVar16 = 0;
        if (*(int *)(lVar6 + 0x20) != 0) {
          do {
            uVar14 = (int)uVar16 + 1;
            puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x18) + uVar16 * 0x28);
            puVar3 = (undefined8 *)(local_48 + uVar16 * 0x28);
            uVar12 = *puVar2;
            uVar19 = puVar2[3];
            uVar18 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar12;
            puVar3[3] = uVar19;
            puVar3[2] = uVar18;
            puVar3[4] = puVar2[4];
            uVar16 = (ulonglong)uVar14;
          } while (uVar14 < *(uint *)(lVar6 + 0x20));
        }
        FUN_1802229d8(*(undefined8 *)(lVar6 + 0x10));
        *(ulonglong *)(lVar6 + 0x10) = local_48;
        *(ulonglong *)(lVar6 + 0x18) = local_48;
        *(uint *)(lVar6 + 0x24) = uVar7;
      }
    }
    uVar16 = (ulonglong)*(uint *)(lVar6 + 0x20);
    if (*(uint *)(lVar6 + 0x24) != *(uint *)(lVar6 + 0x20)) {
      while ((uint)uVar11 < (uint)uVar16) {
        uVar15 = (ulonglong)((uint)uVar16 - 1);
        puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x18) + uVar16 * 0x28);
        puVar3 = (undefined8 *)(*(longlong *)(lVar6 + 0x18) + uVar15 * 0x28);
        uVar12 = *puVar3;
        uVar19 = puVar3[3];
        uVar18 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar12;
        puVar2[3] = uVar19;
        puVar2[2] = uVar18;
        puVar2[4] = puVar3[4];
        uVar16 = uVar15;
      }
      *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
      *(ulonglong *)(*plVar1 + uVar11 * 0x28 + 8) = param_2;
      lVar4 = *plVar1 + uVar11 * 0x28;
      *(ulonglong *)(lVar4 + 0x18) = param_1;
      *(ulonglong *)(lVar4 + 0x10) = uVar5;
      *(ulonglong *)(lVar4 + 0x20) = uVar17;
      *(ulonglong *)(*plVar1 + uVar11 * 0x28) = param_2;
    }
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar11 = (*extraout_x11)();
    if (uVar11 < puVar10[2]) {
      uVar11 = puVar10[1];
      if (uVar5 == *puVar10) {
        if (param_1 != uVar11 && uVar11 != 0xffffffffffffffff) {
          FUN_180207560(uVar11 + 8,0);
        }
      }
      else {
        if (uVar11 != 0xffffffffffffffff) {
          FUN_180207560(uVar11 + 8,0);
        }
        if (param_1 != 0xffffffffffffffff) {
          FUN_180207560(param_1 + 8,0);
        }
        uVar11 = *puVar10;
        uVar12 = (*(code *)puVar9)(0x180224000);
        (*extraout_x11_00)(uVar12,*(undefined8 *)(uVar11 + 0x18),puVar10[2]);
      }
    }
    *puVar10 = uVar5;
    puVar10[1] = param_1;
    puVar10[2] = uVar17;
  }
LAB_180207cac:
  thunk_FUN_18022370c(lVar6 + 0x28);
  return;
}

