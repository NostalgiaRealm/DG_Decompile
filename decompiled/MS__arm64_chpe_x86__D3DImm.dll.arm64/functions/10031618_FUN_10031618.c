/*
 * FUN_10031618 at 10031618
 * undefined FUN_10031618(void)
 * Address ranges: 10031618-10031917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_10031618(int param_1,ulonglong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  code *extraout_w11;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
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
  ulonglong local_50;
  
  iVar11 = *(int *)(param_1 + 0xc);
  uVar4 = *(uint *)(iVar11 + 8);
  if (uVar4 != 0) {
    uVar13 = 0;
    uVar14 = uVar4;
    do {
      uVar15 = uVar14 + uVar13 >> 1;
      uVar16 = *(ulonglong *)(*(int *)(iVar11 + 4) + uVar15 * 0x68);
      uVar9 = uVar15;
      if (uVar16 <= param_2) {
        if (param_2 <= uVar16) break;
        uVar13 = uVar15 + 1;
        uVar15 = uVar13;
        uVar9 = uVar14;
      }
      uVar14 = uVar9;
    } while (uVar14 != uVar13);
    if ((uVar15 != uVar4) &&
       (puVar6 = (ulonglong *)(*(int *)(iVar11 + 4) + uVar15 * 0x68), puVar12 = puVar6 + 2,
       *puVar6 == param_2)) goto LAB_100316bc;
  }
  puVar12 = (ulonglong *)0x0;
LAB_100316bc:
  if (puVar12 == (ulonglong *)0x0) {
    uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar10,&local_a0,param_2);
    piVar5 = *(int **)(param_1 + 0xc);
    uVar13 = 0;
    puVar1 = (uint *)(piVar5 + 2);
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      uVar14 = 0;
      uVar15 = uVar4;
      do {
        uVar13 = uVar15 + uVar14 >> 1;
        uVar16 = *(ulonglong *)(piVar5[1] + uVar13 * 0x68);
        uVar9 = uVar13;
        if (uVar16 <= param_2) {
          if (param_2 <= uVar16) break;
          uVar14 = uVar13 + 1;
          uVar13 = uVar14;
          uVar9 = uVar15;
        }
        uVar15 = uVar9;
      } while (uVar15 != uVar14);
    }
    piVar2 = piVar5 + 1;
    if ((uVar13 == uVar4) || (puVar12 = (ulonglong *)(*piVar2 + uVar13 * 0x68), *puVar12 != param_2)
       ) {
      puVar3 = (uint *)(piVar5 + 3);
      uVar14 = *puVar3;
      if (uVar14 == uVar4) {
        uVar4 = 0x10;
        if (uVar14 != 0) {
          uVar4 = uVar14 << 1;
        }
        iVar11 = FUN_10081da0(uVar4 * 0x68);
        if (iVar11 != 0) {
          uVar14 = 0;
          if (*puVar1 != 0) {
            do {
              puVar7 = (undefined8 *)(iVar11 + uVar14 * 0x68);
              puVar8 = (undefined8 *)(*piVar2 + uVar14 * 0x68);
              uVar14 = uVar14 + 1;
              uVar19 = *puVar8;
              uVar18 = puVar8[3];
              uVar17 = puVar8[2];
              puVar7[1] = puVar8[1];
              *puVar7 = uVar19;
              puVar7[3] = uVar18;
              puVar7[2] = uVar17;
              uVar19 = puVar8[4];
              uVar18 = puVar8[7];
              uVar17 = puVar8[6];
              puVar7[5] = puVar8[5];
              puVar7[4] = uVar19;
              puVar7[7] = uVar18;
              puVar7[6] = uVar17;
              uVar19 = puVar8[8];
              uVar18 = puVar8[0xb];
              uVar17 = puVar8[10];
              puVar7[9] = puVar8[9];
              puVar7[8] = uVar19;
              puVar7[0xb] = uVar18;
              puVar7[10] = uVar17;
              puVar7[0xc] = puVar8[0xc];
            } while (uVar14 < *puVar1);
          }
          FUN_10081dc0(*piVar5);
          *piVar5 = iVar11;
          *piVar2 = iVar11;
          *puVar3 = uVar4;
        }
      }
      uVar4 = *puVar1;
      if (*puVar3 != uVar4) {
        for (; uVar13 < uVar4; uVar4 = uVar4 - 1) {
          puVar7 = (undefined8 *)(*piVar2 + uVar4 * 0x68);
          puVar7[1] = puVar7[-0xc];
          *puVar7 = puVar7[-0xd];
          puVar7[3] = puVar7[-10];
          puVar7[2] = puVar7[-0xb];
          puVar7[5] = puVar7[-8];
          puVar7[4] = puVar7[-9];
          puVar7[7] = puVar7[-6];
          puVar7[6] = puVar7[-7];
          puVar7[9] = puVar7[-4];
          puVar7[8] = puVar7[-5];
          puVar7[0xb] = puVar7[-2];
          puVar7[10] = puVar7[-3];
          puVar7[0xc] = puVar7[-1];
        }
        *puVar1 = *puVar1 + 1;
        *(ulonglong *)(*piVar2 + uVar13 * 0x68 + 8) = param_2;
        iVar11 = *piVar2 + uVar13 * 0x68;
        *(ulonglong *)(iVar11 + 0x18) = uStack_98;
        *(ulonglong *)(iVar11 + 0x10) = local_a0;
        *(ulonglong *)(iVar11 + 0x28) = uStack_88;
        *(ulonglong *)(iVar11 + 0x20) = uStack_90;
        *(ulonglong *)(iVar11 + 0x38) = uStack_78;
        *(ulonglong *)(iVar11 + 0x30) = local_80;
        *(ulonglong *)(iVar11 + 0x48) = uStack_68;
        *(ulonglong *)(iVar11 + 0x40) = uStack_70;
        *(ulonglong *)(iVar11 + 0x58) = uStack_58;
        *(ulonglong *)(iVar11 + 0x50) = local_60;
        *(ulonglong *)(iVar11 + 0x60) = local_50;
        *(ulonglong *)(*piVar2 + uVar13 * 0x68) = param_2;
      }
    }
    else {
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
      puVar12[0xc] = local_50;
    }
    puVar12 = (ulonglong *)(*piVar2 + uVar13 * 0x68 + 0x10);
  }
  return puVar12;
}

