/*
 * FUN_100b4740 at 100b4740
 * undefined FUN_100b4740(void)
 * Address ranges: 100b4740-100b4d1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b4740(int param_1,int param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong uVar20;
  ulonglong uVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar11 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar7 = true;
    iVar14 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar14 == 0) {
      FUN_10006560(0);
    }
  }
  piVar22 = (int *)(param_1 + 0x3c);
  puVar10 = (uint *)FUN_100bd3f0(piVar22,param_2);
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (puVar10 == (uint *)0x0) goto LAB_100b4cd0;
  puVar12 = puVar10;
  if (param_2 == *(int *)(param_1 + 100)) {
    *(int *)(param_1 + 100) = 0;
    uVar11 = (*pcVar8)();
    puVar12 = (uint *)(*extraout_w11)(uVar11,0);
  }
  puVar1 = (uint *)(param_1 + 0x44);
  uVar5 = *puVar1;
  puVar2 = (ulonglong *)(puVar10 + 10);
  if (uVar5 == 0) {
LAB_100b48d0:
    piVar13 = (int *)FUN_100febf0(0xc);
    puVar12 = (uint *)0x0;
    if (piVar13 == (int *)0x0) goto LAB_100b4c00;
    piVar13[0] = 0;
    piVar13[1] = 0;
    piVar13[2] = 0;
    uVar5 = *puVar1;
    uVar16 = 0;
    uVar20 = *puVar2;
    if (uVar5 != 0) {
      uVar17 = 0;
      uVar18 = uVar5;
      do {
        uVar16 = uVar18 + uVar17 >> 1;
        uVar21 = *(ulonglong *)(*(int *)(param_1 + 0x40) + uVar16 * 0x18);
        uVar19 = uVar16;
        if (uVar21 <= uVar20) {
          if (uVar20 <= uVar21) break;
          uVar17 = uVar16 + 1;
          uVar16 = uVar17;
          uVar19 = uVar18;
        }
        uVar18 = uVar19;
      } while (uVar18 != uVar17);
      if ((uVar16 != uVar5) &&
         (puVar3 = (ulonglong *)(*(int *)(param_1 + 0x40) + uVar16 * 0x18), *puVar3 == uVar20)) {
        *(int **)(puVar3 + 2) = piVar13;
        goto LAB_100b4ae4;
      }
    }
    puVar12 = (uint *)(param_1 + 0x48);
    uVar17 = *puVar12;
    if (uVar17 == uVar5) {
      uVar5 = 0x10;
      if (uVar17 != 0) {
        uVar5 = uVar17 << 1;
      }
      iVar14 = FUN_100fece0(uVar5 * 0x18);
      if (iVar14 != 0) {
        if (*puVar1 != 0) {
          uVar17 = 0;
          do {
            uVar18 = uVar17 + 1;
            puVar4 = (undefined8 *)(*(int *)(param_1 + 0x40) + uVar17 * 0x18);
            puVar15 = (undefined8 *)(iVar14 + uVar17 * 0x18);
            uVar23 = *puVar4;
            puVar15[1] = puVar4[1];
            *puVar15 = uVar23;
            puVar15[2] = puVar4[2];
            uVar17 = uVar18;
          } while (uVar18 < *(uint *)(param_1 + 0x44));
        }
        FUN_100fed00(*piVar22);
        *piVar22 = iVar14;
        *(int *)(param_1 + 0x40) = iVar14;
        *puVar12 = uVar5;
      }
    }
    piVar22 = (int *)(param_1 + 0x40);
    uVar5 = *puVar1;
    if (*puVar12 != uVar5) {
      for (; uVar16 < uVar5; uVar5 = uVar5 - 1) {
        puVar4 = (undefined8 *)(*piVar22 + uVar5 * 0x18);
        puVar4[1] = puVar4[-2];
        *puVar4 = puVar4[-3];
        puVar4[2] = puVar4[-1];
      }
      *puVar1 = *puVar1 + 1;
      *(ulonglong *)(*piVar22 + uVar16 * 0x18 + 8) = *puVar2;
      *(int **)(*piVar22 + uVar16 * 0x18 + 0x10) = piVar13;
      *(ulonglong *)(*piVar22 + uVar16 * 0x18) = uVar20;
    }
LAB_100b4ae4:
    puVar12 = (uint *)(piVar13 + 2);
    puVar1 = (uint *)(piVar13 + 1);
    uVar5 = *puVar12;
    if (*puVar1 == uVar5) {
      uVar16 = uVar5 << 1;
      if (uVar5 == 0) {
        uVar16 = 0x10;
      }
      uVar11 = (undefined4)((ulonglong)uVar16 * 0x30);
      if ((ulonglong)uVar16 * 0x30 >> 0x20 != 0) {
        uVar11 = 0xffffffff;
      }
      puVar15 = (undefined8 *)FUN_100fece0(uVar11);
      uVar5 = uVar16;
      puVar4 = puVar15;
      if (puVar15 != (undefined8 *)0x0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 1) = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          *(undefined2 *)((int)puVar4 + 0xc) = 0xffff;
          puVar4 = puVar4 + 6;
        }
        FUN_100ff660(puVar15,*piVar13,((ulonglong)(*puVar12 * 3) & 0xfffffff) << 4);
        FUN_100fed00(*piVar13);
        *piVar13 = (int)puVar15;
        *puVar12 = uVar16;
        goto LAB_100b4b98;
      }
      bVar6 = true;
    }
    else {
LAB_100b4b98:
      uVar25 = *(undefined8 *)puVar10;
      uVar24 = *(undefined8 *)(puVar10 + 6);
      uVar23 = *(undefined8 *)(puVar10 + 4);
      puVar4 = (undefined8 *)(*piVar13 + *puVar1 * 0x30);
      puVar4[1] = *(undefined8 *)(puVar10 + 2);
      *puVar4 = uVar25;
      puVar4[3] = uVar24;
      puVar4[2] = uVar23;
      uVar23 = *(undefined8 *)(puVar10 + 8);
      puVar4[5] = *(undefined8 *)(puVar10 + 10);
      puVar4[4] = uVar23;
      *puVar1 = *puVar1 + 1;
      bVar6 = false;
    }
    uVar11 = (*pcVar8)();
    puVar12 = (uint *)(*extraout_w11_00)(uVar11,0);
    if (bVar6) goto LAB_100b4c00;
  }
  else {
    uVar20 = *puVar2;
    uVar16 = 0;
    uVar17 = uVar5;
    do {
      uVar18 = uVar17 + uVar16 >> 1;
      uVar21 = *(ulonglong *)(*(int *)(param_1 + 0x40) + uVar18 * 0x18);
      uVar19 = uVar18;
      if (uVar21 <= uVar20) {
        if (uVar20 <= uVar21) break;
        uVar16 = uVar18 + 1;
        uVar18 = uVar16;
        uVar19 = uVar17;
      }
      uVar17 = uVar19;
    } while (uVar17 != uVar16);
    if (((uVar18 == uVar5) ||
        (puVar3 = (ulonglong *)(*(int *)(param_1 + 0x40) + uVar18 * 0x18), *puVar3 != uVar20)) ||
       (puVar3 = puVar3 + 2, puVar3 == (ulonglong *)0x0)) goto LAB_100b48d0;
    piVar13 = *(int **)puVar3;
    if (piVar13 != (int *)0x0) goto LAB_100b4ae4;
LAB_100b4c00:
    FUN_100bd380(puVar12,puVar10);
  }
  puVar12 = (uint *)(param_1 + 0x58);
  uVar5 = *puVar12;
  if (uVar5 != 0) {
    uVar17 = *puVar10;
    uVar16 = 0;
    uVar18 = uVar5;
    do {
      uVar19 = uVar18 + uVar16 >> 1;
      uVar20 = *(ulonglong *)(*(int *)(param_1 + 0x54) + uVar19 * 0x40);
      uVar9 = uVar19;
      if (uVar20 <= uVar17) {
        if (uVar17 <= uVar20) break;
        uVar16 = uVar19 + 1;
        uVar19 = uVar16;
        uVar9 = uVar18;
      }
      uVar18 = uVar9;
    } while (uVar18 != uVar16);
    if ((uVar19 != uVar5) &&
       (*(ulonglong *)(*(int *)(param_1 + 0x54) + uVar19 * 0x40) == (ulonglong)uVar17)) {
      uVar19 = uVar19 + 1;
      if (uVar19 < uVar5) {
        do {
          puVar4 = (undefined8 *)(*(int *)(param_1 + 0x54) + uVar19 * 0x40);
          uVar19 = uVar19 + 1;
          puVar4[-7] = puVar4[1];
          puVar4[-8] = *puVar4;
          puVar4[-5] = puVar4[3];
          puVar4[-6] = puVar4[2];
          puVar4[-3] = puVar4[5];
          puVar4[-4] = puVar4[4];
          puVar4[-1] = puVar4[7];
          puVar4[-2] = puVar4[6];
        } while (uVar19 < *puVar12);
      }
      *puVar12 = *puVar12 - 1;
    }
  }
  uVar11 = 0;
LAB_100b4cd0:
  if (bVar7) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar11;
}

