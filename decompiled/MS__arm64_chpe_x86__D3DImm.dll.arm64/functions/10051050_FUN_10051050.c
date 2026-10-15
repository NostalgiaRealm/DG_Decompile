/*
 * FUN_10051050 at 10051050
 * undefined FUN_10051050(void)
 * Address ranges: 10051050-1005120f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10051050(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *extraout_w11;
  uint local_4c;
  uint local_48;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x214) + param_2 * 4);
  local_48 = 0;
  puVar1 = (uint *)(iVar2 + 0xa50);
  local_4c = *puVar1;
  uVar8 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
  uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  for (uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10); (1 - (uVar8 >> 5) & 0xff) == 0;
      uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10)) {
    local_48 = local_48 + 0x20;
    if (7 < local_48) goto LAB_100511e8;
    local_4c = puVar1[local_48 >> 5];
    uVar8 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  }
  pbVar3 = (byte *)((int)&local_4c + ((int)uVar8 >> 3));
  *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar6 = local_48 + uVar8;
  if (iVar6 != -1) {
    do {
      uVar8 = local_48;
      if (*(int *)(iVar2 + 0x9fc + iVar6 * 4) != 0) {
        uVar5 = (*pcVar4)();
        (*extraout_w11)(uVar5);
      }
      uVar7 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
      while ((1 - (uVar7 >> 5) & 0xff) == 0) {
        local_48 = uVar8 + 0x20;
        if (7 < local_48) goto LAB_100511e8;
        local_4c = puVar1[local_48 >> 5];
        uVar8 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        uVar7 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
        uVar8 = local_48;
      }
      pbVar3 = (byte *)((int)&local_4c + ((int)uVar7 >> 3));
      *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      iVar6 = local_48 + uVar7;
    } while (iVar6 != -1);
  }
LAB_100511e8:
  FUN_10003270(param_1,param_2);
  return;
}

