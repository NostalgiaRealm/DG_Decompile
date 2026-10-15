/*
 * FUN_1002e4f0 at 1002e4f0
 * undefined FUN_1002e4f0(void)
 * Address ranges: 1002e4f0-1002e64b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002e4f0(undefined8 param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = (param_2 + 4) * 4;
  *param_3 = 0;
  if (param_2 + 4 >> 0x1e != 0) {
    iVar9 = -1;
  }
  *param_4 = 0;
  iVar9 = FUN_1007a4c0(iVar9);
  if (iVar9 != 0) {
    uVar5 = 2;
    if (param_2 != 0x40) {
      uVar5 = 3;
    }
    uVar6 = 3;
    if (param_2 != 0x40) {
      uVar6 = 7;
    }
    uVar7 = 0;
    if (param_2 != 0) {
      do {
        uVar3 = uVar7 >> (ulonglong)uVar5;
        uVar2 = uVar7 & uVar6;
        iVar8 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(iVar9 + iVar8) = (float)(1 << (ulonglong)(uVar3 + 3 & 0x1f)) / (float)(8 - uVar2)
        ;
      } while (uVar7 < param_2);
    }
    puVar4 = (undefined4 *)(iVar9 + param_2 * 4);
    puVar4[3] = 0x5bb1a2bc;
    puVar4[2] = 0x5bb1a2bc;
    puVar4[1] = 0x5bb1a2bc;
    *puVar4 = 0x5bb1a2bc;
    puVar4 = (undefined4 *)FUN_1007a4c0(0x40004);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      iVar8 = 0;
      uVar5 = 2;
      do {
        pfVar1 = (float *)(iVar8 * 4 + iVar9 + 4);
        iVar10 = iVar8 * 4;
        while (*pfVar1 <= (float)uVar5) {
          iVar8 = iVar8 + 1;
          pfVar1 = (float *)(iVar9 + 8 + iVar10);
          iVar10 = iVar10 + 4;
        }
        iVar10 = uVar5 - 1;
        uVar5 = uVar5 + 1;
        puVar4[iVar10] = iVar8;
      } while (uVar5 < 0x10002);
      *param_4 = puVar4;
      *param_3 = iVar9;
      return 1;
    }
    FUN_1007a4e0(iVar9);
  }
  return 0;
}

