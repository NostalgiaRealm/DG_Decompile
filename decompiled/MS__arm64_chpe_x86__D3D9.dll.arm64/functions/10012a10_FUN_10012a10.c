/*
 * FUN_10012a10 at 10012a10
 * undefined FUN_10012a10(void)
 * Address ranges: 10012a10-10012ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10012a10(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar10 = *puVar1;
  uVar11 = (ulonglong)*param_2;
  uVar9 = 0;
  if (uVar10 != 0) {
    uVar6 = 0;
    uVar5 = uVar10;
    do {
      uVar9 = uVar5 + uVar6 >> 1;
      uVar8 = *(ulonglong *)(*param_1 + uVar9 * 0x260);
      uVar3 = uVar9;
      if (uVar8 <= uVar11) {
        if (uVar11 <= uVar8) break;
        uVar6 = uVar9 + 1;
        uVar9 = uVar6;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
    } while (uVar5 != uVar6);
    if ((uVar9 != uVar10) && (*(ulonglong *)(*param_1 + uVar9 * 0x260) == uVar11))
    goto LAB_10012b80;
  }
  puVar2 = (uint *)(param_1 + 1);
  if (uVar10 == *puVar2) {
    uVar8 = (ulonglong)(*puVar2 << 1) * 0x260;
    uVar7 = (undefined4)uVar8;
    if (uVar8 >> 0x20 != 0) {
      uVar7 = 0xffffffff;
    }
    iVar4 = FUN_101322b0(uVar7);
    if (iVar4 != 0) {
      if (*puVar2 != 0) {
        uVar10 = 0;
        do {
          FUN_101325a0(iVar4 + uVar10 * 0x260,*param_1 + uVar10 * 0x260,0x260);
          uVar10 = uVar10 + 1;
        } while (uVar10 < *puVar2);
      }
      FUN_101322d0(*param_1);
      *param_1 = iVar4;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar10 = *puVar1; uVar9 < uVar10; uVar10 = uVar10 - 1) {
    iVar4 = *param_1 + uVar10 * 0x260;
    FUN_101325a0(iVar4,iVar4 + -0x260,0x260);
  }
  FUN_10012ba8(param_1,uVar9,uVar11,param_2);
  *puVar1 = *puVar1 + 1;
LAB_10012b80:
  return *param_1 + uVar9 * 0x260 + 0xc;
}

