/*
 * FUN_1006e938 at 1006e938
 * undefined FUN_1006e938(void)
 * Address ranges: 1006e938-1006eb63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006e938(int *param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  int local_6c;
  int iStack_68;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar8 = *puVar1;
  uVar12 = 0;
  local_6c = (int)(param_2[2] >> 0x20);
  iStack_68 = (int)param_2[3];
  uStack_74 = (uint)(param_2[1] >> 0x20);
  uStack_7c = (uint)(*param_2 >> 0x20);
  uStack_78 = (uint)param_2[1];
  uVar13 = ((ulonglong)
            (uStack_7c |
            (uStack_78 | (uStack_74 | (local_6c - 1U | (iStack_68 + -1) * 0x10) << 3) << 3) << 3) &
           0xffffff) << 8 | *param_2 & 0xffffffff;
  if (uVar8 != 0) {
    uVar9 = 0;
    uVar7 = uVar8;
    do {
      uVar12 = uVar7 + uVar9 >> 1;
      uVar11 = *(ulonglong *)(*param_1 + uVar12 * 0x40);
      uVar5 = uVar12;
      if (uVar11 <= uVar13) {
        if (uVar13 <= uVar11) break;
        uVar9 = uVar12 + 1;
        uVar12 = uVar9;
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar9);
    if ((uVar12 != uVar8) && (iVar10 = uVar12 * 0x40, *(ulonglong *)(iVar10 + *param_1) == uVar13))
    goto LAB_1006eb3c;
  }
  puVar2 = (uint *)(param_1 + 1);
  uVar9 = *puVar2;
  if (uVar8 == uVar9) {
    iVar10 = uVar9 << 7;
    if ((uVar9 & 0x7fffffff) >> 0x19 != 0) {
      iVar10 = -1;
    }
    iVar10 = FUN_1007a4c0(iVar10);
    if (iVar10 != 0) {
      uVar8 = 0;
      if (*puVar2 != 0) {
        do {
          puVar3 = (undefined8 *)(*param_1 + uVar8 * 0x40);
          puVar4 = (undefined8 *)(iVar10 + uVar8 * 0x40);
          uVar8 = uVar8 + 1;
          uVar16 = *puVar3;
          uVar15 = puVar3[3];
          uVar14 = puVar3[2];
          puVar4[1] = puVar3[1];
          *puVar4 = uVar16;
          puVar4[3] = uVar15;
          puVar4[2] = uVar14;
          uVar16 = puVar3[4];
          uVar15 = puVar3[7];
          uVar14 = puVar3[6];
          puVar4[5] = puVar3[5];
          puVar4[4] = uVar16;
          puVar4[7] = uVar15;
          puVar4[6] = uVar14;
        } while (uVar8 < *puVar2);
      }
      FUN_1007a4e0(*param_1);
      *param_1 = iVar10;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar8 = *puVar1; uVar12 < uVar8; uVar8 = uVar8 - 1) {
    puVar3 = (undefined8 *)(*param_1 + uVar8 * 0x40);
    puVar3[1] = puVar3[-7];
    *puVar3 = puVar3[-8];
    puVar3[3] = puVar3[-5];
    puVar3[2] = puVar3[-6];
    puVar3[5] = puVar3[-3];
    puVar3[4] = puVar3[-4];
    puVar3[7] = puVar3[-1];
    puVar3[6] = puVar3[-2];
  }
  iVar10 = uVar12 * 0x40;
  *(ulonglong *)(iVar10 + *param_1) = uVar13;
  uVar17 = *param_2;
  uVar11 = param_2[3];
  uVar13 = param_2[2];
  iVar6 = iVar10 + *param_1;
  *(ulonglong *)(iVar6 + 0x10) = param_2[1];
  *(ulonglong *)(iVar6 + 8) = uVar17;
  *(ulonglong *)(iVar6 + 0x20) = uVar11;
  *(ulonglong *)(iVar6 + 0x18) = uVar13;
  uVar13 = param_2[4];
  *(ulonglong *)(iVar6 + 0x30) = param_2[5];
  *(ulonglong *)(iVar6 + 0x28) = uVar13;
  *(int *)(iVar6 + 0x38) = (int)param_2[6];
  iVar6 = FUN_1007a3d0(0x2d0);
  if (iVar6 != 0) {
    FUN_1007ac30(iVar6,0,0x2d0);
  }
  *(int *)(iVar10 + *param_1 + 0x3c) = iVar6;
  *puVar1 = *puVar1 + 1;
LAB_1006eb3c:
  return *(undefined4 *)(*param_1 + iVar10 + 0x3c);
}

