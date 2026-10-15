/*
 * FUN_180162df8 at 180162df8
 * undefined FUN_180162df8(void)
 * Address ranges: 180162df8-1801630b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_180162df8(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  code *extraout_x11;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  lVar13 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(uint *)(lVar13 + 0x10);
  if (uVar4 != 0) {
    uVar10 = 0;
    uVar8 = uVar4;
    do {
      uVar5 = uVar8 + uVar10 >> 1;
      uVar9 = (ulonglong)uVar5;
      uVar7 = *(ulonglong *)(*(longlong *)(lVar13 + 8) + uVar9 * 0x70);
      if (uVar7 <= param_2) {
        if (param_2 <= uVar7) break;
        uVar10 = uVar5 + 1;
        uVar9 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while (uVar8 != uVar10);
    if (((uint)uVar9 != uVar4) &&
       (puVar1 = (ulonglong *)(*(longlong *)(lVar13 + 8) + uVar9 * 0x70), puVar6 = puVar1 + 2,
       *puVar1 == param_2)) goto LAB_180162e90;
  }
  puVar6 = (ulonglong *)0x0;
LAB_180162e90:
  if (puVar6 == (ulonglong *)0x0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_1,&local_90,param_2);
    plVar14 = *(longlong **)(param_1 + 0x18);
    uVar7 = 0;
    uVar4 = *(uint *)(plVar14 + 2);
    if (uVar4 != 0) {
      uVar10 = 0;
      uVar8 = uVar4;
      do {
        uVar5 = uVar8 + uVar10 >> 1;
        uVar7 = (ulonglong)uVar5;
        uVar9 = *(ulonglong *)(plVar14[1] + uVar7 * 0x70);
        if (uVar9 <= param_2) {
          if (param_2 <= uVar9) break;
          uVar10 = uVar5 + 1;
          uVar7 = (ulonglong)(uVar5 + 1);
          uVar5 = uVar8;
        }
        uVar8 = uVar5;
      } while (uVar8 != uVar10);
    }
    if (((uint)uVar7 == uVar4) ||
       (puVar6 = (ulonglong *)(plVar14[1] + uVar7 * 0x70), *puVar6 != param_2)) {
      uVar10 = *(uint *)((longlong)plVar14 + 0x14);
      if (uVar10 == uVar4) {
        uVar4 = 0x10;
        if (uVar10 != 0) {
          uVar4 = uVar10 << 1;
        }
        lVar13 = FUN_1802229a8((ulonglong)uVar4 * 0x70);
        if (lVar13 != 0) {
          uVar9 = 0;
          if ((int)plVar14[2] != 0) {
            do {
              uVar10 = (int)uVar9 + 1;
              puVar2 = (undefined8 *)(plVar14[1] + uVar9 * 0x70);
              puVar3 = (undefined8 *)(lVar13 + uVar9 * 0x70);
              uVar15 = *puVar2;
              uVar17 = puVar2[3];
              uVar16 = puVar2[2];
              puVar3[1] = puVar2[1];
              *puVar3 = uVar15;
              puVar3[3] = uVar17;
              puVar3[2] = uVar16;
              uVar15 = puVar2[4];
              uVar17 = puVar2[7];
              uVar16 = puVar2[6];
              puVar3[5] = puVar2[5];
              puVar3[4] = uVar15;
              puVar3[7] = uVar17;
              puVar3[6] = uVar16;
              uVar15 = puVar2[8];
              uVar17 = puVar2[0xb];
              uVar16 = puVar2[10];
              puVar3[9] = puVar2[9];
              puVar3[8] = uVar15;
              puVar3[0xb] = uVar17;
              puVar3[10] = uVar16;
              uVar15 = puVar2[0xc];
              puVar3[0xd] = puVar2[0xd];
              puVar3[0xc] = uVar15;
              uVar9 = (ulonglong)uVar10;
            } while (uVar10 < *(uint *)(plVar14 + 2));
          }
          FUN_1802229d8(*plVar14);
          *plVar14 = lVar13;
          plVar14[1] = lVar13;
          *(uint *)((longlong)plVar14 + 0x14) = uVar4;
        }
      }
      uVar9 = (ulonglong)*(uint *)(plVar14 + 2);
      if (*(uint *)((longlong)plVar14 + 0x14) != *(uint *)(plVar14 + 2)) {
        while ((uint)uVar7 < (uint)uVar9) {
          uVar11 = (ulonglong)((uint)uVar9 - 1);
          puVar2 = (undefined8 *)(plVar14[1] + uVar9 * 0x70);
          puVar3 = (undefined8 *)(plVar14[1] + uVar11 * 0x70);
          uVar15 = *puVar3;
          uVar17 = puVar3[3];
          uVar16 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar15;
          puVar2[3] = uVar17;
          puVar2[2] = uVar16;
          uVar15 = puVar3[4];
          uVar17 = puVar3[7];
          uVar16 = puVar3[6];
          puVar2[5] = puVar3[5];
          puVar2[4] = uVar15;
          puVar2[7] = uVar17;
          puVar2[6] = uVar16;
          uVar15 = puVar3[8];
          uVar17 = puVar3[0xb];
          uVar16 = puVar3[10];
          puVar2[9] = puVar3[9];
          puVar2[8] = uVar15;
          puVar2[0xb] = uVar17;
          puVar2[10] = uVar16;
          uVar15 = puVar3[0xc];
          puVar2[0xd] = puVar3[0xd];
          puVar2[0xc] = uVar15;
          uVar9 = uVar11;
        }
        *(int *)(plVar14 + 2) = (int)plVar14[2] + 1;
        lVar12 = uVar7 * 0x70;
        *(ulonglong *)(lVar12 + plVar14[1] + 8) = param_2;
        lVar13 = lVar12 + plVar14[1];
        *(ulonglong *)(lVar13 + 0x18) = uStack_88;
        *(ulonglong *)(lVar13 + 0x10) = local_90;
        *(ulonglong *)(lVar13 + 0x28) = uStack_78;
        *(ulonglong *)(lVar13 + 0x20) = uStack_80;
        *(ulonglong *)(lVar13 + 0x38) = uStack_68;
        *(ulonglong *)(lVar13 + 0x30) = local_70;
        *(ulonglong *)(lVar13 + 0x48) = uStack_58;
        *(ulonglong *)(lVar13 + 0x40) = uStack_60;
        *(ulonglong *)(lVar13 + 0x58) = uStack_48;
        *(ulonglong *)(lVar13 + 0x50) = local_50;
        *(ulonglong *)(lVar13 + 0x68) = uStack_38;
        *(ulonglong *)(lVar13 + 0x60) = uStack_40;
        *(ulonglong *)(plVar14[1] + lVar12) = param_2;
      }
    }
    else {
      puVar6[3] = uStack_88;
      puVar6[2] = local_90;
      puVar6[5] = uStack_78;
      puVar6[4] = uStack_80;
      puVar6[7] = uStack_68;
      puVar6[6] = local_70;
      puVar6[9] = uStack_58;
      puVar6[8] = uStack_60;
      puVar6[0xb] = uStack_48;
      puVar6[10] = local_50;
      puVar6[0xd] = uStack_38;
      puVar6[0xc] = uStack_40;
    }
    puVar6 = (ulonglong *)(plVar14[1] + uVar7 * 0x70 + 0x10);
  }
  return puVar6;
}

