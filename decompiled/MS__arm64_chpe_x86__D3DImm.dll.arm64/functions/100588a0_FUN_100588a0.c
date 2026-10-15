/*
 * FUN_100588a0 at 100588a0
 * undefined FUN_100588a0(void)
 * Address ranges: 100588a0-10058b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100588a0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int iVar11;
  undefined1 auStack_5c [4];
  uint *local_58;
  uint local_54;
  uint local_50;
  
  iVar6 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar6 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_5c);
  iVar6 = FUN_100045e0(param_1,param_2,0x88760835,0x88760834);
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (-1 < iVar6) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x214) + param_2 * 4 + -4);
    local_50 = 0;
    local_58 = (uint *)(iVar3 + 0xa50);
    local_54 = *local_58;
    uVar10 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
    uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
    for (uVar10 = (uint)LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10); (1 - (uVar10 >> 5) & 0xff) == 0;
        uVar10 = (uint)LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10)) {
      local_50 = local_50 + 0x20;
      if (7 < local_50) goto LAB_10058b00;
      local_54 = local_58[local_50 >> 5];
      uVar10 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
      uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
    }
    pbVar4 = (byte *)((int)&local_54 + ((int)uVar10 >> 3));
    *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
    iVar11 = local_50 + uVar10;
    if (iVar11 != -1) {
      do {
        uVar10 = local_50;
        piVar1 = (int *)(param_1 + 0x14f4 + iVar11 * 4);
        if (*piVar1 != 0) {
          uVar7 = (*pcVar5)();
          (*extraout_w11)(uVar7);
        }
        piVar2 = (int *)(iVar3 + 0x9fc + iVar11 * 4);
        if (*piVar2 != 0) {
          uVar7 = (*pcVar5)();
          (*extraout_w11_00)(uVar7);
        }
        *(undefined4 *)(iVar3 + 0x9dc + iVar11 * 4) = *(undefined4 *)(param_1 + 0x14d4 + iVar11 * 4)
        ;
        *piVar2 = *piVar1;
        uVar9 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        uVar9 = (uint)LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
        while ((1 - (uVar9 >> 5) & 0xff) == 0) {
          local_50 = uVar10 + 0x20;
          if (7 < local_50) goto LAB_10058b00;
          local_54 = local_58[local_50 >> 5];
          uVar10 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
          uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
          uVar9 = (uint)LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
          uVar10 = local_50;
        }
        pbVar4 = (byte *)((int)&local_54 + ((int)uVar9 >> 3));
        *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
        iVar11 = local_50 + uVar9;
      } while (iVar11 != -1);
    }
LAB_10058b00:
    puVar8 = (undefined4 *)(iVar3 + 4);
    uVar7 = (*pcVar5)();
    (*extraout_w11_01)(uVar7,iVar3,*puVar8);
  }
  FUN_10096790(auStack_5c);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar6;
}

