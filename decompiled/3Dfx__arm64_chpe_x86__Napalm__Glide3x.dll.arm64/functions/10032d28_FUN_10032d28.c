/*
 * FUN_10032d28 at 10032d28
 * undefined FUN_10032d28(void)
 * Address ranges: 10032d28-10032fb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10032d28(int *param_1,longlong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar10 = *puVar1;
  uVar14 = 0;
  uVar6 = ((ulonglong)*(uint *)(param_2 + 9) |
          (ulonglong)*(uint *)((int)param_2 + 0x44) + (ulonglong)*(uint *)((int)param_2 + 0x4c) <<
          0x20) + (ulonglong)*(uint *)(param_2 + 8) + param_2[7] + param_2[6] + param_2[5] +
          param_2[4] + param_2[3] + param_2[2] + param_2[1] + *param_2;
  if (uVar10 != 0) {
    uVar11 = 0;
    uVar9 = uVar10;
    do {
      uVar14 = uVar9 + uVar11 >> 1;
      uVar13 = *(ulonglong *)(*param_1 + uVar14 * 0x60);
      uVar7 = uVar14;
      if (uVar13 <= uVar6) {
        if (uVar6 <= uVar13) break;
        uVar11 = uVar14 + 1;
        uVar14 = uVar11;
        uVar7 = uVar9;
      }
      uVar9 = uVar7;
    } while (uVar9 != uVar11);
    if ((uVar14 != uVar10) && (iVar8 = uVar14 * 0x60, *(ulonglong *)(iVar8 + *param_1) == uVar6))
    goto LAB_10032f88;
  }
  puVar2 = (uint *)(param_1 + 1);
  if (uVar10 == *puVar2) {
    uVar13 = (ulonglong)(*puVar2 << 1) * 0x60;
    uVar12 = (undefined4)uVar13;
    if (uVar13 >> 0x20 != 0) {
      uVar12 = 0xffffffff;
    }
    iVar8 = FUN_10083400(uVar12);
    if (iVar8 != 0) {
      uVar10 = 0;
      if (*puVar2 != 0) {
        do {
          uVar11 = uVar10 + 1;
          puVar3 = (undefined8 *)(*param_1 + uVar10 * 0x60);
          puVar4 = (undefined8 *)(iVar8 + uVar10 * 0x60);
          uVar19 = *puVar3;
          uVar17 = puVar3[3];
          uVar15 = puVar3[2];
          puVar4[1] = puVar3[1];
          *puVar4 = uVar19;
          puVar4[3] = uVar17;
          puVar4[2] = uVar15;
          uVar19 = puVar3[4];
          uVar17 = puVar3[7];
          uVar15 = puVar3[6];
          puVar4[5] = puVar3[5];
          puVar4[4] = uVar19;
          puVar4[7] = uVar17;
          puVar4[6] = uVar15;
          uVar19 = puVar3[8];
          uVar17 = puVar3[0xb];
          uVar15 = puVar3[10];
          puVar4[9] = puVar3[9];
          puVar4[8] = uVar19;
          puVar4[0xb] = uVar17;
          puVar4[10] = uVar15;
          uVar10 = uVar11;
        } while (uVar11 < *puVar2);
      }
      FUN_10083420(*param_1);
      *param_1 = iVar8;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar10 = *puVar1; uVar14 < uVar10; uVar10 = uVar10 - 1) {
    puVar3 = (undefined8 *)(*param_1 + uVar10 * 0x60);
    puVar3[1] = puVar3[-0xb];
    *puVar3 = puVar3[-0xc];
    puVar3[3] = puVar3[-9];
    puVar3[2] = puVar3[-10];
    puVar3[5] = puVar3[-7];
    puVar3[4] = puVar3[-8];
    puVar3[7] = puVar3[-5];
    puVar3[6] = puVar3[-6];
    puVar3[9] = puVar3[-3];
    puVar3[8] = puVar3[-4];
    puVar3[0xb] = puVar3[-1];
    puVar3[10] = puVar3[-2];
  }
  lVar21 = param_2[1];
  lVar20 = *param_2;
  lVar18 = param_2[3];
  lVar16 = param_2[2];
  iVar8 = uVar14 * 0x60;
  *(ulonglong *)(iVar8 + *param_1) = uVar6;
  iVar5 = iVar8 + *param_1;
  *(longlong *)(iVar5 + 0x10) = lVar21;
  *(longlong *)(iVar5 + 8) = lVar20;
  *(longlong *)(iVar5 + 0x20) = lVar18;
  *(longlong *)(iVar5 + 0x18) = lVar16;
  lVar20 = param_2[4];
  lVar18 = param_2[7];
  lVar16 = param_2[6];
  *(longlong *)(iVar5 + 0x30) = param_2[5];
  *(longlong *)(iVar5 + 0x28) = lVar20;
  *(longlong *)(iVar5 + 0x40) = lVar18;
  *(longlong *)(iVar5 + 0x38) = lVar16;
  lVar16 = param_2[8];
  *(longlong *)(iVar5 + 0x50) = param_2[9];
  *(longlong *)(iVar5 + 0x48) = lVar16;
  iVar5 = *(int *)param_1[3];
  *(int *)param_1[3] = iVar5 + 1;
  *(int *)(iVar8 + *param_1 + 0x58) = iVar5;
  *puVar1 = *puVar1 + 1;
LAB_10032f88:
  return *(undefined4 *)(*param_1 + iVar8 + 0x58);
}

