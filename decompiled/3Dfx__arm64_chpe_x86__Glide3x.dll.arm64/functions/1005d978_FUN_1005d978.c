/*
 * FUN_1005d978 at 1005d978
 * undefined FUN_1005d978(void)
 * Address ranges: 1005d978-1005db5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005d978(int *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar7 = *puVar1;
  uVar12 = (ulonglong)*param_2;
  uVar11 = 0;
  if (uVar7 != 0) {
    uVar8 = 0;
    uVar6 = uVar7;
    do {
      uVar11 = uVar6 + uVar8 >> 1;
      uVar10 = *(ulonglong *)(*param_1 + uVar11 * 0x10);
      uVar4 = uVar11;
      if (uVar10 <= uVar12) {
        if (uVar12 <= uVar10) break;
        uVar8 = uVar11 + 1;
        uVar11 = uVar8;
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
    } while (uVar6 != uVar8);
    if ((uVar11 != uVar7) && (iVar9 = uVar11 * 0x10, *(ulonglong *)(iVar9 + *param_1) == uVar12))
    goto LAB_1005db34;
  }
  puVar2 = (uint *)(param_1 + 1);
  uVar8 = *puVar2;
  if (uVar7 == uVar8) {
    iVar9 = uVar8 << 5;
    if ((uVar8 & 0x7fffffff) >> 0x1b != 0) {
      iVar9 = -1;
    }
    iVar9 = FUN_1007dd60(iVar9);
    if (iVar9 != 0) {
      uVar7 = 0;
      if (*puVar2 != 0) {
        do {
          puVar5 = (undefined8 *)(*param_1 + uVar7 * 0x10);
          puVar3 = (undefined8 *)(iVar9 + uVar7 * 0x10);
          uVar7 = uVar7 + 1;
          uVar13 = *puVar5;
          puVar3[1] = puVar5[1];
          *puVar3 = uVar13;
        } while (uVar7 < *puVar2);
      }
      FUN_1007dd80(*param_1);
      *param_1 = iVar9;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar7 = *puVar1; uVar11 < uVar7; uVar7 = uVar7 - 1) {
    puVar5 = (undefined8 *)(*param_1 + uVar7 * 0x10);
    puVar5[1] = puVar5[-1];
    *puVar5 = puVar5[-2];
  }
  iVar9 = uVar11 * 0x10;
  *(ulonglong *)(iVar9 + *param_1) = uVar12;
  *(int *)(iVar9 + *param_1 + 8) = *param_2;
  puVar5 = (undefined8 *)FUN_1007dc70(0x14);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
  }
  *(undefined8 **)(iVar9 + *param_1 + 0xc) = puVar5;
  *puVar1 = *puVar1 + 1;
LAB_1005db34:
  return *(undefined4 *)(*param_1 + iVar9 + 0xc);
}

