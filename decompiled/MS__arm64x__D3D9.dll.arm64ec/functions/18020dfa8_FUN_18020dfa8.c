/*
 * FUN_18020dfa8 at 18020dfa8
 * undefined FUN_18020dfa8(void)
 * Address ranges: 18020dfa8-18020e263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020dfa8(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong local_48;
  
  local_48 = param_2;
  thunk_FUN_1802236f8(param_1 + 0x28);
  puVar8 = (ulonglong *)FUN_18020ebb0(param_1 + 0x10,&local_48);
  puVar7 = __hybrid_os_arm64x_dispatch_icall;
  if (puVar8 == (ulonglong *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x20);
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar12 = 0;
      uVar11 = uVar5;
      do {
        uVar6 = uVar11 + uVar12 >> 1;
        uVar9 = (ulonglong)uVar6;
        uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x28);
        if (uVar14 <= param_2) {
          if (param_2 <= uVar14) break;
          uVar12 = uVar6 + 1;
          uVar9 = (ulonglong)(uVar6 + 1);
          uVar6 = uVar11;
        }
        uVar11 = uVar6;
      } while (uVar11 != uVar12);
      if (((uint)uVar9 != uVar5) &&
         (puVar8 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x28), *puVar8 == param_2))
      {
        puVar8[3] = param_4;
        puVar8[2] = param_3;
        puVar8[4] = param_5;
        goto LAB_18020e244;
      }
    }
    uVar12 = *(uint *)(param_1 + 0x24);
    plVar1 = (longlong *)(param_1 + 0x18);
    if (uVar12 == uVar5) {
      uVar5 = 0x10;
      if (uVar12 != 0) {
        uVar5 = uVar12 << 1;
      }
      local_48 = FUN_1802229a8((ulonglong)uVar5 * 0x28);
      if (local_48 != 0) {
        uVar14 = 0;
        if (*(int *)(param_1 + 0x20) != 0) {
          do {
            uVar12 = (int)uVar14 + 1;
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar14 * 0x28);
            puVar3 = (undefined8 *)(local_48 + uVar14 * 0x28);
            uVar10 = *puVar2;
            uVar16 = puVar2[3];
            uVar15 = puVar2[2];
            puVar3[1] = puVar2[1];
            *puVar3 = uVar10;
            puVar3[3] = uVar16;
            puVar3[2] = uVar15;
            puVar3[4] = puVar2[4];
            uVar14 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(param_1 + 0x20));
        }
        FUN_1802229d8(*(undefined8 *)(param_1 + 0x10));
        *(ulonglong *)(param_1 + 0x10) = local_48;
        *(ulonglong *)(param_1 + 0x18) = local_48;
        *(uint *)(param_1 + 0x24) = uVar5;
      }
    }
    uVar14 = (ulonglong)*(uint *)(param_1 + 0x20);
    if (*(uint *)(param_1 + 0x24) != *(uint *)(param_1 + 0x20)) {
      while ((uint)uVar9 < (uint)uVar14) {
        uVar13 = (ulonglong)((uint)uVar14 - 1);
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar14 * 0x28);
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x28);
        uVar10 = *puVar3;
        uVar16 = puVar3[3];
        uVar15 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar10;
        puVar2[3] = uVar16;
        puVar2[2] = uVar15;
        puVar2[4] = puVar3[4];
        uVar14 = uVar13;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(ulonglong *)(*plVar1 + uVar9 * 0x28 + 8) = param_2;
      lVar4 = *plVar1 + uVar9 * 0x28;
      *(ulonglong *)(lVar4 + 0x18) = param_4;
      *(ulonglong *)(lVar4 + 0x10) = param_3;
      *(ulonglong *)(lVar4 + 0x20) = param_5;
      *(ulonglong *)(*plVar1 + uVar9 * 0x28) = param_2;
    }
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar9 = (*extraout_x11)();
    if (uVar9 < puVar8[2]) {
      uVar9 = puVar8[1];
      if (param_3 == *puVar8) {
        if (param_4 != uVar9 && uVar9 != 0xffffffffffffffff) {
          FUN_180207560(uVar9 + 8,0);
        }
      }
      else {
        if (uVar9 != 0xffffffffffffffff) {
          FUN_180207560(uVar9 + 8,0);
        }
        if (param_4 != 0xffffffffffffffff) {
          FUN_180207560(param_4 + 8,0);
        }
        uVar9 = *puVar8;
        uVar10 = (*(code *)puVar7)(0x180224000);
        (*extraout_x11_00)(uVar10,*(undefined8 *)(uVar9 + 0x18),puVar8[2]);
      }
    }
    *puVar8 = param_3;
    puVar8[1] = param_4;
    puVar8[2] = param_5;
  }
LAB_18020e244:
  thunk_FUN_18022370c(param_1 + 0x28);
  return;
}

