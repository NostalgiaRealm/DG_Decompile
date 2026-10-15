/*
 * FUN_10071538 at 10071538
 * undefined FUN_10071538(void)
 * Address ranges: 10071538-1007172b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10071538(int *param_1,int *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar7 = *puVar1;
  uVar14 = (ulonglong)*param_2;
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar11 = 0;
    uVar10 = uVar7;
    do {
      uVar13 = uVar10 + uVar11 >> 1;
      uVar12 = *(ulonglong *)(param_1[1] + uVar13 * 0x10);
      uVar8 = uVar13;
      if (uVar12 <= uVar14) {
        if (uVar14 <= uVar12) break;
        uVar11 = uVar13 + 1;
        uVar13 = uVar11;
        uVar8 = uVar10;
      }
      uVar10 = uVar8;
    } while (uVar10 != uVar11);
  }
  piVar2 = param_1 + 1;
  if ((uVar13 == uVar7) || (puVar4 = (ulonglong *)(*piVar2 + uVar13 * 0x10), *puVar4 != uVar14)) {
    puVar3 = (uint *)(param_1 + 3);
    uVar11 = *puVar3;
    if (uVar11 == uVar7) {
      uVar7 = 0x10;
      if (uVar11 != 0) {
        uVar7 = uVar11 << 1;
      }
      iVar9 = FUN_101322b0(uVar7 << 4);
      if (iVar9 != 0) {
        uVar11 = 0;
        if (*puVar1 != 0) {
          do {
            puVar5 = (undefined8 *)(*piVar2 + uVar11 * 0x10);
            puVar6 = (undefined8 *)(iVar9 + uVar11 * 0x10);
            uVar11 = uVar11 + 1;
            uVar15 = *puVar5;
            puVar6[1] = puVar5[1];
            *puVar6 = uVar15;
          } while (uVar11 < *puVar1);
        }
        FUN_101322d0(*param_1);
        *param_1 = iVar9;
        *piVar2 = iVar9;
        *puVar3 = uVar7;
      }
    }
    uVar7 = *puVar1;
    if (*puVar3 != uVar7) {
      for (; uVar13 < uVar7; uVar7 = uVar7 - 1) {
        puVar5 = (undefined8 *)(*piVar2 + uVar7 * 0x10);
        puVar5[1] = puVar5[-1];
        *puVar5 = puVar5[-2];
      }
      *puVar1 = *puVar1 + 1;
      *(int *)(*piVar2 + uVar13 * 0x10 + 8) = *param_2;
      *(undefined4 *)(*piVar2 + uVar13 * 0x10 + 0xc) = *param_3;
      *(ulonglong *)(*piVar2 + uVar13 * 0x10) = uVar14;
    }
  }
  else {
    *(undefined4 *)((int)puVar4 + 0xc) = *param_3;
  }
  return *piVar2 + uVar13 * 0x10 + 8;
}

