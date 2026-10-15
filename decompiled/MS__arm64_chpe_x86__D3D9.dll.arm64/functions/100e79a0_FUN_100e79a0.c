/*
 * FUN_100e79a0 at 100e79a0
 * undefined FUN_100e79a0(void)
 * Address ranges: 100e79a0-100e7d23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e79a0(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  code *extraout_w11;
  uint local_54;
  uint local_50;
  
  if (((*(uint *)(param_1[4] + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar5 = true;
    iVar7 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar7 == 0) {
      FUN_100071d0(0);
    }
  }
  piVar1 = param_1 + 6;
  if ((*(char *)(*piVar1 + 0xac1d) != '\0') && (iVar7 = *(int *)(*piVar1 + 0x4f98), iVar7 != 0)) {
    FUN_100ec110(iVar7);
  }
  if ((*(char *)(*piVar1 + 0xac1c) != '\0') && (iVar7 = *(int *)(*piVar1 + 0x4f94), iVar7 != 0)) {
    FUN_100e6f00(iVar7);
  }
  if (*(int *)(*piVar1 + 0x4f9c) != 0) {
    FUN_100eb670(*(int *)(*piVar1 + 0x4f9c));
  }
  puVar2 = (uint *)(*piVar1 + 0xac50);
  local_54 = *puVar2;
  local_50 = 0;
  uVar10 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
  uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  for (uVar10 = (uint)LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10); (1 - (uVar10 >> 5) & 0xff) == 0;
      uVar10 = (uint)LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10)) {
    local_50 = local_50 + 0x20;
    if (4 < local_50) goto LAB_100e7c2c;
    local_54 = puVar2[local_50 >> 5];
    uVar10 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
    uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  }
  pbVar4 = (byte *)((int)&local_54 + ((int)uVar10 >> 3));
  *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar7 = local_50 + uVar10;
  uVar10 = local_50;
  while (local_50 = uVar10, iVar7 != -1) {
    if (*(int *)(*piVar1 + iVar7 * 4 + 0x4fa0) != 0) {
      uVar8 = (*pcVar6)();
      (*extraout_w11)(uVar8);
    }
    uVar9 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
    uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar9 = (uint)LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
    while ((1 - (uVar9 >> 5) & 0xff) == 0) {
      local_50 = uVar10 + 0x20;
      if (4 < local_50) goto LAB_100e7c2c;
      local_54 = puVar2[local_50 >> 5];
      uVar10 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
      uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      uVar9 = (uint)LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
      uVar10 = local_50;
    }
    pbVar4 = (byte *)((int)&local_54 + ((int)uVar9 >> 3));
    *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
    uVar10 = local_50;
    iVar7 = local_50 + uVar9;
  }
LAB_100e7c2c:
  iVar7 = param_1[4];
  uVar8 = param_1[5];
  puVar2 = (uint *)(iVar7 + 0x6794);
  uVar10 = *puVar2;
  if (uVar10 != 0) {
    uVar9 = 0;
    do {
      if (*(undefined4 **)(*(int *)(iVar7 + 0x6790) + uVar9 * 4) == param_1) {
        if (uVar9 != 0xffffffff) {
          uVar9 = uVar9 + 1;
          if (uVar9 < uVar10) {
            do {
              puVar3 = (undefined4 *)(*(int *)(iVar7 + 0x6790) + uVar9 * 4);
              uVar9 = uVar9 + 1;
              puVar3[-1] = *puVar3;
            } while (uVar9 < *puVar2);
          }
          *puVar2 = *puVar2 - 1;
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar10);
  }
  FUN_10008c80(iVar7,uVar8);
  *param_1 = &PTR_FUN_1015fb94;
  FUN_10132260(param_1,0x1c);
  if (bVar5) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return;
}

