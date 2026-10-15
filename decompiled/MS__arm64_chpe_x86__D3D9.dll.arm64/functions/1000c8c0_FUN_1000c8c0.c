/*
 * FUN_1000c8c0 at 1000c8c0
 * undefined FUN_1000c8c0(void)
 * Address ranges: 1000c8c0-1000cc2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c8c0(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint local_54;
  uint local_50;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = *(int *)(*(int *)(param_1 + 0x3b4) + param_2 * 4);
  local_50 = 0;
  local_54 = *(uint *)(iVar1 + 0xac0c);
  uVar7 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
  uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  for (uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10); (1 - (uVar7 >> 5) & 0xff) == 0;
      uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10)) {
    local_50 = local_50 + 0x20;
    if (0xf < local_50) goto LAB_1000ca68;
    local_54 = *(uint *)(iVar1 + 0xac0c + (local_50 >> 5) * 4);
    uVar7 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  }
  pbVar2 = (byte *)((int)&local_54 + ((int)uVar7 >> 3));
  *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
  iVar5 = local_50 + uVar7;
  if (iVar5 != -1) {
    do {
      uVar7 = local_50;
      if (*(int *)(iVar1 + 0x52d8 + iVar5 * 4) != 0) {
        uVar4 = (*pcVar3)();
        (*extraout_w11)(uVar4);
      }
      uVar6 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      for (uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10); (1 - (uVar6 >> 5) & 0xff) == 0;
          uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10)) {
        uVar7 = uVar7 + 0x20;
        if (0xf < uVar7) goto LAB_1000ca68;
        local_54 = *(uint *)(iVar1 + 0xac0c + (uVar7 >> 5) * 4);
        uVar6 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        local_50 = uVar7;
      }
      pbVar2 = (byte *)((int)&local_54 + ((int)uVar6 >> 3));
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
      iVar5 = local_50 + uVar6;
    } while (iVar5 != -1);
  }
LAB_1000ca68:
  local_54 = *(uint *)(iVar1 + 0xac18);
  local_50 = 0;
  uVar7 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
  uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  for (uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10); (1 - (uVar7 >> 5) & 0xff) == 0;
      uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10)) {
    local_50 = local_50 + 0x20;
    if (0xf < local_50) goto LAB_1000cbcc;
    local_54 = *(uint *)(iVar1 + 0xac18 + (local_50 >> 5) * 4);
    uVar7 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  }
  pbVar2 = (byte *)((int)&local_54 + ((int)uVar7 >> 3));
  *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
  iVar5 = local_50 + uVar7;
  if (iVar5 != -1) {
    do {
      uVar7 = local_50;
      if (*(int *)(iVar1 + 0xaae4 + iVar5 * 4) != 0) {
        uVar4 = (*pcVar3)();
        (*extraout_w11_00)(uVar4);
      }
      uVar6 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      while ((1 - (uVar6 >> 5) & 0xff) == 0) {
        local_50 = uVar7 + 0x20;
        if (0xf < local_50) goto LAB_1000cbcc;
        local_54 = *(uint *)(iVar1 + 0xac18 + (local_50 >> 5) * 4);
        uVar7 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        uVar6 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
        uVar7 = local_50;
      }
      pbVar2 = (byte *)((int)&local_54 + ((int)uVar6 >> 3));
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
      iVar5 = local_50 + uVar6;
    } while (iVar5 != -1);
  }
LAB_1000cbcc:
  if ((*(char *)(iVar1 + 0xac1e) != '\0') && (*(int *)(iVar1 + 0xaae0) != 0)) {
    uVar4 = (*pcVar3)();
    (*extraout_w11_01)(uVar4);
  }
  FUN_10026cc0(param_1,param_2);
  return;
}

