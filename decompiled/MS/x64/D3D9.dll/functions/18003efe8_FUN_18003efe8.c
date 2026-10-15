/*
 * FUN_18003efe8 at 18003efe8
 * longlong __fastcall FUN_18003efe8(undefined8 * param_1, uint * param_2, ulonglong param_3, byte param_4)
 * Address ranges: 18003efe8-18003f2f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18003efe8(undefined8 *param_1,uint *param_2,ulonglong param_3,byte param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong local_68 [4];
  undefined8 local_48;
  
  FUN_18003eea0(param_2,param_4,local_68);
  uVar14 = *(uint *)(param_1 + 4);
  if (uVar14 != 0) {
    uVar13 = 0;
    uVar15 = uVar14;
    do {
      uVar11 = uVar15 + uVar13 >> 1;
      lVar17 = (ulonglong)uVar11 * 0x30 + param_1[3];
      uVar19 = 0;
      do {
        uVar16 = *(ulonglong *)(lVar17 + uVar19 * 8);
        if (uVar16 != local_68[uVar19]) {
          uVar18 = uVar11;
          if (local_68[uVar19] < uVar16) goto LAB_18003f072;
          break;
        }
        uVar18 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
      } while (uVar18 < 5);
      uVar19 = 0;
      while (uVar16 = *(ulonglong *)(lVar17 + uVar19 * 8), uVar16 == local_68[uVar19]) {
        uVar13 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar13;
        if (4 < uVar13) goto LAB_18003f077;
      }
      if (local_68[uVar19] <= uVar16) break;
      uVar11 = uVar11 + 1;
      uVar18 = uVar15;
      uVar13 = uVar11;
LAB_18003f072:
      uVar15 = uVar18;
    } while (uVar15 != uVar13);
LAB_18003f077:
    if (uVar11 != uVar14) {
      uVar19 = 0;
      lVar17 = (ulonglong)uVar11 * 0x30 + param_1[3];
      do {
        if (*(ulonglong *)(lVar17 + uVar19 * 8) != local_68[uVar19]) goto LAB_18003f0ad;
        uVar14 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar14;
      } while (uVar14 < 5);
      puVar12 = (undefined8 *)(lVar17 + 0x28);
      if (puVar12 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)*puVar12;
        goto LAB_18003f2df;
      }
    }
  }
LAB_18003f0ad:
  uVar14 = 0;
  puVar12 = (undefined8 *)FUN_1800fbccc(0x2f8);
  if (puVar12 == (undefined8 *)0x0) {
    return 0;
  }
  uVar7 = *param_1;
  uVar4 = *(undefined1 *)((longlong)param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 1);
  *puVar12 = &PTR_D3DPERF_GetStatus_180101e70;
  puVar12[3] = 0;
  puVar12[1] = 0;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[4] = &PTR_FUN_1801029a0;
  uVar10 = *(undefined8 *)(param_2 + 2);
  puVar12[6] = *(undefined8 *)param_2;
  puVar12[7] = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 6);
  puVar12[8] = *(undefined8 *)(param_2 + 4);
  puVar12[9] = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 10);
  puVar12[10] = *(undefined8 *)(param_2 + 8);
  puVar12[0xb] = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0xe);
  puVar12[0xc] = *(undefined8 *)(param_2 + 0xc);
  puVar12[0xd] = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x12);
  puVar12[0xe] = *(undefined8 *)(param_2 + 0x10);
  puVar12[0xf] = uVar10;
  *puVar12 = &PTR_FUN_180101e80;
  puVar12[1] = uVar7;
  puVar12[0x10] = 0;
  puVar12[0x11] = 0;
  puVar12[0x12] = 0;
  *(undefined1 *)(puVar12 + 0x5e) = uVar4;
  *(undefined4 *)(puVar12 + 2) = uVar5;
  puVar12[3] = puVar12 + 0x10;
  uVar15 = *(uint *)(param_1 + 4);
  if (uVar15 != 0) {
    uVar14 = 0;
    do {
      uVar13 = uVar15 + uVar14 >> 1;
      uVar16 = (ulonglong)uVar13;
      lVar17 = (ulonglong)uVar13 * 0x30 + param_1[3];
      uVar19 = 0;
      do {
        uVar8 = *(ulonglong *)(lVar17 + uVar19 * 8);
        if (uVar8 != local_68[uVar19]) {
          if (local_68[uVar19] < uVar8) goto LAB_18003f1ab;
          break;
        }
        uVar11 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar11;
      } while (uVar11 < 5);
      uVar19 = 0;
      while (uVar8 = *(ulonglong *)(lVar17 + uVar19 * 8), uVar8 == local_68[uVar19]) {
        uVar14 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar14;
        if (4 < uVar14) goto LAB_18003f1b0;
      }
      if (local_68[uVar19] <= uVar8) break;
      uVar14 = uVar13 + 1;
      uVar16 = (ulonglong)uVar14;
      uVar13 = uVar15;
LAB_18003f1ab:
      uVar15 = uVar13;
    } while (uVar15 != uVar14);
LAB_18003f1b0:
    uVar14 = (uint)uVar16;
    if (uVar14 != *(uint *)(param_1 + 4)) {
      uVar19 = 0;
      lVar17 = uVar16 * 0x30 + param_1[3];
      do {
        if (*(ulonglong *)(lVar17 + uVar19 * 8) != local_68[uVar19]) goto LAB_18003f1df;
        uVar15 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar15;
      } while (uVar15 < 5);
      *(undefined8 **)(lVar17 + 0x28) = puVar12;
      goto LAB_18003f2df;
    }
  }
LAB_18003f1df:
  iVar6 = *(int *)((longlong)param_1 + 0x24);
  if (iVar6 == *(int *)(param_1 + 4)) {
    uVar19 = (ulonglong)(uint)(iVar6 * 2);
    if (iVar6 == 0) {
      uVar19 = 0x10;
    }
    lVar17 = thunk_FUN_1800fbccc(uVar19 * 0x30);
    if (lVar17 != 0) {
      uVar16 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        do {
          lVar9 = param_1[3];
          uVar15 = (int)uVar16 + 1;
          puVar1 = (undefined8 *)(lVar9 + uVar16 * 0x30);
          uVar7 = puVar1[1];
          puVar3 = (undefined8 *)(lVar17 + uVar16 * 0x30);
          *puVar3 = *puVar1;
          puVar3[1] = uVar7;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + uVar16 * 0x30);
          uVar7 = puVar1[1];
          puVar3 = (undefined8 *)(lVar17 + 0x10 + uVar16 * 0x30);
          *puVar3 = *puVar1;
          puVar3[1] = uVar7;
          puVar1 = (undefined8 *)(lVar9 + 0x20 + uVar16 * 0x30);
          uVar7 = puVar1[1];
          puVar3 = (undefined8 *)(lVar17 + 0x20 + uVar16 * 0x30);
          *puVar3 = *puVar1;
          puVar3[1] = uVar7;
          uVar16 = (ulonglong)uVar15;
        } while (uVar15 < *(uint *)(param_1 + 4));
      }
      FUN_1800fbcf0((LPVOID)param_1[2]);
      param_1[2] = lVar17;
      param_1[3] = lVar17;
      *(int *)((longlong)param_1 + 0x24) = (int)uVar19;
    }
  }
  uVar15 = *(uint *)(param_1 + 4);
  uVar19 = (ulonglong)uVar15;
  if (*(uint *)((longlong)param_1 + 0x24) != uVar15) {
    while (uVar14 < uVar15) {
      lVar17 = param_1[3];
      uVar15 = (int)uVar19 - 1;
      uVar16 = (ulonglong)uVar15;
      puVar1 = (undefined8 *)(lVar17 + uVar16 * 0x30);
      uVar7 = puVar1[1];
      puVar3 = (undefined8 *)(lVar17 + uVar19 * 0x30);
      *puVar3 = *puVar1;
      puVar3[1] = uVar7;
      puVar1 = (undefined8 *)(lVar17 + 0x10 + uVar16 * 0x30);
      uVar7 = puVar1[1];
      puVar3 = (undefined8 *)(lVar17 + 0x10 + uVar19 * 0x30);
      *puVar3 = *puVar1;
      puVar3[1] = uVar7;
      puVar1 = (undefined8 *)(lVar17 + 0x20 + uVar16 * 0x30);
      uVar7 = puVar1[1];
      puVar3 = (undefined8 *)(lVar17 + 0x20 + uVar19 * 0x30);
      *puVar3 = *puVar1;
      puVar3[1] = uVar7;
      uVar19 = uVar16;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    uVar19 = (ulonglong)uVar14;
    lVar17 = param_1[3];
    puVar2 = (ulonglong *)(lVar17 + uVar19 * 0x30);
    *puVar2 = local_68[0];
    puVar2[1] = local_68[1];
    puVar1 = (undefined8 *)(lVar17 + 0x10 + uVar19 * 0x30);
    *puVar1 = local_68[2];
    puVar1[1] = local_68[3];
    *(undefined8 *)(lVar17 + 0x20 + uVar19 * 0x30) = local_48;
    *(undefined8 **)(param_1[3] + 0x28 + uVar19 * 0x30) = puVar12;
  }
LAB_18003f2df:
  lVar17 = FUN_18003ecdc(puVar12,param_3);
  return lVar17;
}

