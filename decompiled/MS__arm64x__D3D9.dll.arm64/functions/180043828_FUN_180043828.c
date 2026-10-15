/*
 * FUN_180043828 at 180043828
 * undefined FUN_180043828(void)
 * Address ranges: 180043828-180043b93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043828(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined1 param_12)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *local_c0;
  undefined4 local_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  
  FUN_18003dea0();
  puVar5 = (undefined8 *)0x0;
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_4 + -0x30);
  }
  if ((*(uint *)(param_1 + 0x7654) >> 2 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x7650);
  }
  plVar18 = (longlong *)&DAT_00000018;
  if (param_4 != 0) {
    plVar18 = (longlong *)(param_4 + -0x18);
  }
  lVar16 = *plVar18;
  uVar7 = *(uint *)(lVar16 + 0x10);
  if (uVar7 == 0) {
LAB_180043914:
    puVar11 = (ulonglong *)0x0;
  }
  else {
    uVar13 = 0;
    uVar9 = uVar7;
    do {
      uVar8 = uVar9 + uVar13 >> 1;
      uVar12 = (ulonglong)uVar8;
      uVar17 = *(ulonglong *)(*(longlong *)(lVar16 + 8) + uVar12 * 0x70);
      if (uVar17 <= uVar10) {
        if (uVar10 <= uVar17) break;
        uVar13 = uVar8 + 1;
        uVar12 = (ulonglong)(uVar8 + 1);
        uVar8 = uVar9;
      }
      uVar9 = uVar8;
    } while (uVar9 != uVar13);
    if (((uint)uVar12 == uVar7) ||
       (puVar2 = (ulonglong *)(*(longlong *)(lVar16 + 8) + uVar12 * 0x70), puVar11 = puVar2 + 2,
       *puVar2 != uVar10)) goto LAB_180043914;
  }
  if (puVar11 == (ulonglong *)0x0) {
    (**(code **)*puVar5)(puVar5,&local_b0,uVar10);
    plVar18 = (longlong *)*plVar18;
    uVar12 = 0;
    uVar7 = *(uint *)(plVar18 + 2);
    if (uVar7 != 0) {
      uVar13 = 0;
      uVar9 = uVar7;
      do {
        uVar8 = uVar9 + uVar13 >> 1;
        uVar12 = (ulonglong)uVar8;
        uVar17 = *(ulonglong *)(plVar18[1] + uVar12 * 0x70);
        if (uVar17 <= uVar10) {
          if (uVar10 <= uVar17) break;
          uVar13 = uVar8 + 1;
          uVar12 = (ulonglong)(uVar8 + 1);
          uVar8 = uVar9;
        }
        uVar9 = uVar8;
      } while (uVar9 != uVar13);
      if (((uint)uVar12 != uVar7) &&
         (puVar11 = (ulonglong *)(plVar18[1] + uVar12 * 0x70), *puVar11 == uVar10)) {
        puVar11[3] = uStack_a8;
        puVar11[2] = local_b0;
        puVar11[5] = uStack_98;
        puVar11[4] = uStack_a0;
        puVar11[7] = uStack_88;
        puVar11[6] = local_90;
        puVar11[9] = uStack_78;
        puVar11[8] = uStack_80;
        puVar11[0xb] = uStack_68;
        puVar11[10] = local_70;
        puVar11[0xd] = uStack_58;
        puVar11[0xc] = uStack_60;
        goto LAB_180043b08;
      }
    }
    uVar13 = *(uint *)((longlong)plVar18 + 0x14);
    plVar1 = plVar18 + 1;
    if (uVar13 == uVar7) {
      uVar7 = 0x10;
      if (uVar13 != 0) {
        uVar7 = uVar13 << 1;
      }
      lVar16 = thunk_FUN_180102f80((ulonglong)uVar7 * 0x70);
      if (lVar16 != 0) {
        uVar17 = 0;
        if ((int)plVar18[2] != 0) {
          do {
            uVar13 = (int)uVar17 + 1;
            puVar3 = (undefined8 *)(plVar18[1] + uVar17 * 0x70);
            puVar4 = (undefined8 *)(lVar16 + uVar17 * 0x70);
            uVar21 = *puVar3;
            uVar20 = puVar3[3];
            uVar19 = puVar3[2];
            puVar4[1] = puVar3[1];
            *puVar4 = uVar21;
            puVar4[3] = uVar20;
            puVar4[2] = uVar19;
            uVar21 = puVar3[4];
            uVar20 = puVar3[7];
            uVar19 = puVar3[6];
            puVar4[5] = puVar3[5];
            puVar4[4] = uVar21;
            puVar4[7] = uVar20;
            puVar4[6] = uVar19;
            uVar21 = puVar3[8];
            uVar20 = puVar3[0xb];
            uVar19 = puVar3[10];
            puVar4[9] = puVar3[9];
            puVar4[8] = uVar21;
            puVar4[0xb] = uVar20;
            puVar4[10] = uVar19;
            uVar19 = puVar3[0xc];
            puVar4[0xd] = puVar3[0xd];
            puVar4[0xc] = uVar19;
            uVar17 = (ulonglong)uVar13;
          } while (uVar13 < *(uint *)(plVar18 + 2));
        }
        thunk_FUN_180102fc0(*plVar18);
        *plVar18 = lVar16;
        plVar18[1] = lVar16;
        *(uint *)((longlong)plVar18 + 0x14) = uVar7;
      }
    }
    uVar17 = (ulonglong)*(uint *)(plVar18 + 2);
    if (*(uint *)((longlong)plVar18 + 0x14) != *(uint *)(plVar18 + 2)) {
      while ((uint)uVar12 < (uint)uVar17) {
        uVar14 = (ulonglong)((uint)uVar17 - 1);
        puVar3 = (undefined8 *)(*plVar1 + uVar17 * 0x70);
        puVar4 = (undefined8 *)(*plVar1 + uVar14 * 0x70);
        uVar21 = *puVar4;
        uVar20 = puVar4[3];
        uVar19 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar21;
        puVar3[3] = uVar20;
        puVar3[2] = uVar19;
        uVar21 = puVar4[4];
        uVar20 = puVar4[7];
        uVar19 = puVar4[6];
        puVar3[5] = puVar4[5];
        puVar3[4] = uVar21;
        puVar3[7] = uVar20;
        puVar3[6] = uVar19;
        uVar21 = puVar4[8];
        uVar20 = puVar4[0xb];
        uVar19 = puVar4[10];
        puVar3[9] = puVar4[9];
        puVar3[8] = uVar21;
        puVar3[0xb] = uVar20;
        puVar3[10] = uVar19;
        uVar19 = puVar4[0xc];
        puVar3[0xd] = puVar4[0xd];
        puVar3[0xc] = uVar19;
        uVar17 = uVar14;
      }
      *(int *)(plVar18 + 2) = (int)plVar18[2] + 1;
      lVar15 = uVar12 * 0x70;
      *(ulonglong *)(lVar15 + *plVar1 + 8) = uVar10;
      lVar16 = lVar15 + *plVar1;
      *(ulonglong *)(lVar16 + 0x18) = uStack_a8;
      *(ulonglong *)(lVar16 + 0x10) = local_b0;
      *(ulonglong *)(lVar16 + 0x28) = uStack_98;
      *(ulonglong *)(lVar16 + 0x20) = uStack_a0;
      *(ulonglong *)(lVar16 + 0x38) = uStack_88;
      *(ulonglong *)(lVar16 + 0x30) = local_90;
      *(ulonglong *)(lVar16 + 0x48) = uStack_78;
      *(ulonglong *)(lVar16 + 0x40) = uStack_80;
      *(ulonglong *)(lVar16 + 0x58) = uStack_68;
      *(ulonglong *)(lVar16 + 0x50) = local_70;
      *(ulonglong *)(lVar16 + 0x68) = uStack_58;
      *(ulonglong *)(lVar16 + 0x60) = uStack_60;
      *(ulonglong *)(*plVar1 + lVar15) = uVar10;
    }
  }
LAB_180043b08:
  local_b8 = *(undefined4 *)(param_3 + 0x10);
  puVar6 = &DAT_0000004c;
  if (param_4 != 0) {
    puVar6 = (undefined1 *)(param_4 + 0x1c);
  }
  local_c0 = puVar5;
  FUN_180059860(param_1,param_2,param_3,0,&local_c0,param_5,param_6,param_7,param_8,param_9,param_10
                ,param_11,param_12,0,*puVar6);
  return;
}

