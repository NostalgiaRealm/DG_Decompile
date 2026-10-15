/*
 * FUN_10097610 at 10097610
 * undefined FUN_10097610(void)
 * Address ranges: 10097610-10097967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10097610(int *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  
  uVar17 = 0x800;
  if (param_2[1] == 0) {
    uVar17 = 0;
  }
  uVar3 = 0x400;
  if (*param_2 == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x200;
  if (param_2[0x21] == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x100;
  if (param_2[0x20] == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x80;
  if (param_2[0x17] == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x40;
  if (param_2[0x16] == 0) {
    uVar7 = 0;
  }
  uVar8 = 0x20;
  if (param_2[0xd] == 0) {
    uVar8 = 0;
  }
  uVar9 = 0x10;
  if (param_2[0xc] == 0) {
    uVar9 = 0;
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar19 = *puVar1;
  uVar18 = 0;
  uVar10 = 8;
  if (param_2[3] == 0) {
    uVar10 = 0;
  }
  uVar20 = 4;
  if (param_2[2] == 0) {
    uVar20 = 0;
  }
  uVar20 = (ulonglong)
           (param_2[4] & 0x1fU |
           (param_2[5] & 0x1fU | (param_2[6] & 7U | (param_2[7] & 0x1fU) << 3) << 5) << 5) << 10 |
           ((ulonglong)(uint)param_2[8] & 0x1f |
           ((ulonglong)(uint)param_2[9] & 7 |
           ((ulonglong)(uint)param_2[10] & 0xf |
           ((ulonglong)*(byte *)(param_2 + 0xb) & 0xf |
           ((ulonglong)*(byte *)(param_2 + 0x15) & 0xf |
           ((ulonglong)*(byte *)(param_2 + 0x1f) & 0xf |
           ((ulonglong)*(byte *)(param_2 + 0x29) & 0xf | uVar17 | uVar3) << 4) << 4) << 4) << 4) <<
           3) << 5) << 0x1c | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar20;
  if (uVar19 != 0) {
    uVar15 = 0;
    uVar14 = uVar19;
    do {
      uVar18 = uVar14 + uVar15 >> 1;
      uVar17 = *(ulonglong *)(*param_1 + uVar18 * 0x158);
      uVar11 = uVar18;
      if (uVar17 <= uVar20) {
        if (uVar20 <= uVar17) break;
        uVar15 = uVar18 + 1;
        uVar18 = uVar15;
        uVar11 = uVar14;
      }
      uVar14 = uVar11;
    } while (uVar14 != uVar15);
    if ((uVar18 != uVar19) && (iVar12 = uVar18 * 0x158, *(ulonglong *)(iVar12 + *param_1) == uVar20)
       ) goto LAB_1009793c;
  }
  puVar2 = (uint *)(param_1 + 1);
  if (uVar19 == *puVar2) {
    uVar17 = (ulonglong)(*puVar2 << 1) * 0x158;
    uVar16 = (undefined4)uVar17;
    if (uVar17 >> 0x20 != 0) {
      uVar16 = 0xffffffff;
    }
    iVar12 = FUN_100fece0(uVar16);
    if (iVar12 != 0) {
      if (*puVar2 != 0) {
        uVar19 = 0;
        do {
          FUN_100ff660(iVar12 + uVar19 * 0x158,*param_1 + uVar19 * 0x158,0x158);
          uVar19 = uVar19 + 1;
        } while (uVar19 < *puVar2);
      }
      FUN_100fed00(*param_1);
      *param_1 = iVar12;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar19 = *puVar1; uVar18 < uVar19; uVar19 = uVar19 - 1) {
    iVar12 = *param_1 + uVar19 * 0x158;
    FUN_100ff660(iVar12,iVar12 + -0x158,0x158);
  }
  iVar12 = uVar18 * 0x158;
  *(ulonglong *)(iVar12 + *param_1) = uVar20;
  FUN_100ff660(iVar12 + *param_1 + 8,param_2,0x148);
  iVar13 = FUN_100febf0(0x148);
  if (iVar13 != 0) {
    FUN_100ff660(iVar13,param_2,0x148);
  }
  *(int *)(iVar12 + *param_1 + 0x150) = iVar13;
  *puVar1 = *puVar1 + 1;
LAB_1009793c:
  return *(undefined4 *)(iVar12 + *param_1 + 0x150);
}

