/*
 * FUN_10050660 at 10050660
 * undefined FUN_10050660(void)
 * Address ranges: 10050660-10050953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10050660(int *param_1,int *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar11 = *puVar1;
  uVar15 = (ulonglong)*param_2;
  uVar14 = 0;
  if (uVar11 != 0) {
    uVar12 = 0;
    uVar10 = uVar11;
    do {
      uVar14 = uVar10 + uVar12 >> 1;
      uVar13 = *(ulonglong *)(param_1[1] + uVar14 * 0x18);
      uVar8 = uVar14;
      if (uVar13 <= uVar15) {
        if (uVar15 <= uVar13) break;
        uVar12 = uVar14 + 1;
        uVar14 = uVar12;
        uVar8 = uVar10;
      }
      uVar10 = uVar8;
    } while (uVar10 != uVar12);
  }
  piVar2 = param_1 + 1;
  if ((uVar14 != uVar11) && (puVar4 = (ulonglong *)(*piVar2 + uVar14 * 0x18), *puVar4 == uVar15)) {
    *(undefined4 *)((int)puVar4 + 0xc) = *param_3;
    *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(param_3 + 1);
    *(undefined1 *)((int)puVar4 + 0x12) = *(undefined1 *)((int)param_3 + 6);
    goto LAB_1005092c;
  }
  puVar3 = (uint *)(param_1 + 3);
  uVar12 = *puVar3;
  if (uVar12 == uVar11) {
    uVar11 = 0x10;
    if (uVar12 != 0) {
      uVar11 = uVar12 << 1;
    }
    iVar9 = FUN_100fece0(uVar11 * 0x18);
    if (iVar9 != 0) {
      uVar12 = 0;
      if (*puVar1 != 0) {
        do {
          puVar5 = (undefined8 *)(iVar9 + uVar12 * 0x18);
          puVar6 = (undefined8 *)(*piVar2 + uVar12 * 0x18);
          uVar12 = uVar12 + 1;
          uVar16 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar16;
          puVar5[2] = puVar6[2];
        } while (uVar12 < *puVar1);
      }
      FUN_100fed00(*param_1);
      *param_1 = iVar9;
      *piVar2 = iVar9;
      *puVar3 = uVar11;
    }
  }
  uVar11 = *puVar1;
  if (*puVar3 == uVar11) goto LAB_1005092c;
  if (uVar14 < uVar11) {
    if (3 < uVar11 - uVar14) {
      do {
        puVar5 = (undefined8 *)(*piVar2 + uVar11 * 0x18);
        puVar5[1] = puVar5[-2];
        *puVar5 = puVar5[-3];
        puVar5[2] = puVar5[-1];
        puVar5 = (undefined8 *)(*piVar2 + (uVar11 - 2) * 0x18);
        iVar9 = *piVar2 + uVar11 * 0x18;
        uVar16 = *puVar5;
        *(undefined8 *)(iVar9 + -0x10) = puVar5[1];
        *(undefined8 *)(iVar9 + -0x18) = uVar16;
        iVar7 = uVar11 - 3;
        *(undefined8 *)(iVar9 + -8) = puVar5[2];
        puVar5 = (undefined8 *)(*piVar2 + iVar7 * 0x18);
        puVar6 = (undefined8 *)(*piVar2 + (uVar11 - 2) * 0x18);
        uVar16 = *puVar5;
        puVar6[1] = puVar5[1];
        *puVar6 = uVar16;
        puVar6[2] = puVar5[2];
        iVar9 = uVar11 - 4;
        uVar11 = uVar11 - 4;
        puVar5 = (undefined8 *)(*piVar2 + iVar9 * 0x18);
        puVar6 = (undefined8 *)(*piVar2 + iVar7 * 0x18);
        uVar16 = *puVar5;
        puVar6[1] = puVar5[1];
        *puVar6 = uVar16;
        puVar6[2] = puVar5[2];
      } while (uVar14 + 3 < uVar11);
      if (uVar11 <= uVar14) goto LAB_100508d0;
    }
    do {
      puVar5 = (undefined8 *)(*piVar2 + uVar11 * 0x18);
      uVar11 = uVar11 - 1;
      puVar5[1] = puVar5[-2];
      *puVar5 = puVar5[-3];
      puVar5[2] = puVar5[-1];
    } while (uVar14 < uVar11);
  }
LAB_100508d0:
  *puVar1 = *puVar1 + 1;
  *(int *)(*piVar2 + uVar14 * 0x18 + 8) = *param_2;
  iVar9 = *piVar2 + uVar14 * 0x18;
  *(undefined4 *)(iVar9 + 0xc) = *param_3;
  *(undefined2 *)(iVar9 + 0x10) = *(undefined2 *)(param_3 + 1);
  *(undefined1 *)(iVar9 + 0x12) = *(undefined1 *)((int)param_3 + 6);
  *(ulonglong *)(*piVar2 + uVar14 * 0x18) = uVar15;
LAB_1005092c:
  return *piVar2 + uVar14 * 0x18 + 8;
}

