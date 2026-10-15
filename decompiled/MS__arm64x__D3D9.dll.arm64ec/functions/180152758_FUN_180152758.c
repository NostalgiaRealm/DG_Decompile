/*
 * FUN_180152758 at 180152758
 * undefined FUN_180152758(void)
 * Address ranges: 180152758-180152ad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180152758(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined1 param_12)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  code *extraout_x11;
  longlong *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  FUN_18014c730();
  lVar5 = 0;
  if (param_4 != 0) {
    lVar5 = param_4 + -0x30;
  }
  if ((*(uint *)(param_1 + 0x7654) >> 2 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x7650);
  }
  plVar18 = (longlong *)&DAT_00000018;
  if (param_4 != 0) {
    plVar18 = (longlong *)(param_4 + -0x18);
  }
  lVar17 = *plVar18;
  uVar7 = *(uint *)(lVar17 + 0x10);
  if (uVar7 == 0) {
LAB_18015283c:
    puVar12 = (ulonglong *)0x0;
  }
  else {
    uVar14 = 0;
    uVar10 = uVar7;
    do {
      uVar8 = uVar10 + uVar14 >> 1;
      uVar13 = (ulonglong)uVar8;
      uVar9 = *(ulonglong *)(*(longlong *)(lVar17 + 8) + uVar13 * 0x70);
      if (uVar9 <= uVar11) {
        if (uVar11 <= uVar9) break;
        uVar14 = uVar8 + 1;
        uVar13 = (ulonglong)(uVar8 + 1);
        uVar8 = uVar10;
      }
      uVar10 = uVar8;
    } while (uVar10 != uVar14);
    if (((uint)uVar13 == uVar7) ||
       (puVar2 = (ulonglong *)(*(longlong *)(lVar17 + 8) + uVar13 * 0x70), puVar12 = puVar2 + 2,
       *puVar2 != uVar11)) goto LAB_18015283c;
  }
  if (puVar12 == (ulonglong *)0x0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(lVar5,&local_a0,uVar11);
    plVar18 = (longlong *)*plVar18;
    uVar9 = 0;
    uVar7 = *(uint *)(plVar18 + 2);
    if (uVar7 != 0) {
      uVar14 = 0;
      uVar10 = uVar7;
      do {
        uVar8 = uVar10 + uVar14 >> 1;
        uVar9 = (ulonglong)uVar8;
        uVar13 = *(ulonglong *)(plVar18[1] + uVar9 * 0x70);
        if (uVar13 <= uVar11) {
          if (uVar11 <= uVar13) break;
          uVar14 = uVar8 + 1;
          uVar9 = (ulonglong)(uVar8 + 1);
          uVar8 = uVar10;
        }
        uVar10 = uVar8;
      } while (uVar10 != uVar14);
      if (((uint)uVar9 != uVar7) &&
         (puVar12 = (ulonglong *)(plVar18[1] + uVar9 * 0x70), *puVar12 == uVar11)) {
        puVar12[3] = uStack_98;
        puVar12[2] = local_a0;
        puVar12[5] = uStack_88;
        puVar12[4] = uStack_90;
        puVar12[7] = uStack_78;
        puVar12[6] = local_80;
        puVar12[9] = uStack_68;
        puVar12[8] = uStack_70;
        puVar12[0xb] = uStack_58;
        puVar12[10] = local_60;
        puVar12[0xd] = uStack_48;
        puVar12[0xc] = uStack_50;
        goto LAB_180152a4c;
      }
    }
    uVar14 = *(uint *)((longlong)plVar18 + 0x14);
    plVar1 = plVar18 + 1;
    if (uVar14 == uVar7) {
      uVar7 = 0x10;
      if (uVar14 != 0) {
        uVar7 = uVar14 << 1;
      }
      lVar17 = FUN_1802229a8(((ulonglong)uVar7 * 8 - (ulonglong)uVar7) * 0x10);
      if (lVar17 != 0) {
        uVar13 = 0;
        if ((int)plVar18[2] != 0) {
          do {
            uVar14 = (int)uVar13 + 1;
            puVar3 = (undefined8 *)(plVar18[1] + uVar13 * 0x70);
            puVar4 = (undefined8 *)(lVar17 + uVar13 * 0x70);
            uVar19 = *puVar3;
            uVar21 = puVar3[3];
            uVar20 = puVar3[2];
            puVar4[1] = puVar3[1];
            *puVar4 = uVar19;
            puVar4[3] = uVar21;
            puVar4[2] = uVar20;
            uVar19 = puVar3[4];
            uVar21 = puVar3[7];
            uVar20 = puVar3[6];
            puVar4[5] = puVar3[5];
            puVar4[4] = uVar19;
            puVar4[7] = uVar21;
            puVar4[6] = uVar20;
            uVar19 = puVar3[8];
            uVar21 = puVar3[0xb];
            uVar20 = puVar3[10];
            puVar4[9] = puVar3[9];
            puVar4[8] = uVar19;
            puVar4[0xb] = uVar21;
            puVar4[10] = uVar20;
            uVar19 = puVar3[0xc];
            puVar4[0xd] = puVar3[0xd];
            puVar4[0xc] = uVar19;
            uVar13 = (ulonglong)uVar14;
          } while (uVar14 < *(uint *)(plVar18 + 2));
        }
        FUN_1802229d8(*plVar18);
        *plVar18 = lVar17;
        plVar18[1] = lVar17;
        *(uint *)((longlong)plVar18 + 0x14) = uVar7;
      }
    }
    uVar13 = (ulonglong)*(uint *)(plVar18 + 2);
    if (*(uint *)((longlong)plVar18 + 0x14) != *(uint *)(plVar18 + 2)) {
      while ((uint)uVar9 < (uint)uVar13) {
        uVar15 = (ulonglong)((uint)uVar13 - 1);
        puVar3 = (undefined8 *)(*plVar1 + uVar13 * 0x70);
        puVar4 = (undefined8 *)(*plVar1 + uVar15 * 0x70);
        uVar19 = *puVar4;
        uVar21 = puVar4[3];
        uVar20 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar19;
        puVar3[3] = uVar21;
        puVar3[2] = uVar20;
        uVar19 = puVar4[4];
        uVar21 = puVar4[7];
        uVar20 = puVar4[6];
        puVar3[5] = puVar4[5];
        puVar3[4] = uVar19;
        puVar3[7] = uVar21;
        puVar3[6] = uVar20;
        uVar19 = puVar4[8];
        uVar21 = puVar4[0xb];
        uVar20 = puVar4[10];
        puVar3[9] = puVar4[9];
        puVar3[8] = uVar19;
        puVar3[0xb] = uVar21;
        puVar3[10] = uVar20;
        uVar19 = puVar4[0xc];
        puVar3[0xd] = puVar4[0xd];
        puVar3[0xc] = uVar19;
        uVar13 = uVar15;
      }
      *(int *)(plVar18 + 2) = (int)plVar18[2] + 1;
      lVar16 = uVar9 * 0x70;
      *(ulonglong *)(lVar16 + *plVar1 + 8) = uVar11;
      lVar17 = lVar16 + *plVar1;
      *(ulonglong *)(lVar17 + 0x18) = uStack_98;
      *(ulonglong *)(lVar17 + 0x10) = local_a0;
      *(ulonglong *)(lVar17 + 0x28) = uStack_88;
      *(ulonglong *)(lVar17 + 0x20) = uStack_90;
      *(ulonglong *)(lVar17 + 0x38) = uStack_78;
      *(ulonglong *)(lVar17 + 0x30) = local_80;
      *(ulonglong *)(lVar17 + 0x48) = uStack_68;
      *(ulonglong *)(lVar17 + 0x40) = uStack_70;
      *(ulonglong *)(lVar17 + 0x58) = uStack_58;
      *(ulonglong *)(lVar17 + 0x50) = local_60;
      *(ulonglong *)(lVar17 + 0x68) = uStack_48;
      *(ulonglong *)(lVar17 + 0x60) = uStack_50;
      *(ulonglong *)(*plVar1 + lVar16) = uVar11;
    }
  }
LAB_180152a4c:
  local_a8 = *(undefined4 *)(param_3 + 0x10);
  puVar6 = &DAT_0000004c;
  if (param_4 != 0) {
    puVar6 = (undefined1 *)(param_4 + 0x1c);
  }
  local_b0 = lVar5;
  FUN_180169b60(param_1,param_2,param_3,0,&local_b0,param_5,param_6,param_7,param_8,param_9,param_10
                ,param_11,param_12,0,*puVar6);
  return;
}

