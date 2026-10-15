/*
 * FUN_1000a880 at 1000a880
 * undefined FUN_1000a880(void)
 * Address ranges: 1000a880-1000ab9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000a880(int param_1,char param_2)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint *puVar12;
  uint local_4c;
  uint *local_48;
  
  puVar12 = (uint *)(param_1 + 0x5000);
  FUN_100205e0(param_1);
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_1 + 0xa08);
  local_4c = *puVar1;
  uVar9 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
  uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  lVar10 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
  uVar9 = (uint)lVar10;
  if ((1 - (uVar9 >> 5) & 0xff) != 0) {
    pbVar3 = (byte *)((int)&local_4c + ((int)uVar9 >> 3));
    *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
    local_48 = puVar1;
    while( true ) {
      iVar8 = *(int *)(param_1 + 0xf94 + (int)lVar10 * 4);
      if ((iVar8 != 0) && (*(int *)(iVar8 + 0x18) - 3U < 3)) {
        uVar6 = (*pcVar5)();
        (*extraout_w11)(uVar6);
      }
      uVar9 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
      uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      lVar10 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
      uVar9 = (uint)lVar10;
      puVar1 = local_48;
      if ((1 - (uVar9 >> 5) & 0xff) == 0) break;
      pbVar3 = (byte *)((int)&local_4c + ((int)uVar9 >> 3));
      *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
    }
  }
  uVar9 = *(uint *)(param_1 + 0x58a8);
  *puVar1 = 0;
  if (uVar9 != 0) {
    piVar7 = (int *)FUN_1000eba0(param_1 + 0xb84,param_1 + 0x58a0);
    local_4c = *(uint *)(param_1 + 0x58a4) & uVar9;
    uVar9 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
    uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    lVar10 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
    if ((1 - ((uint)lVar10 >> 5) & 0xff) != 0) {
      bVar2 = (byte)(1 << (ulonglong)((uint)lVar10 & 7));
      lVar11 = ((lVar10 << 0x20) >> 0x23) + ZEXT48(&local_4c);
      local_48 = puVar12;
      while( true ) {
        *(byte *)lVar11 = *(byte *)lVar11 & (bVar2 ^ 0xff);
        if (piVar7 == (int *)0x0) {
          iVar8 = 0;
          iVar4 = param_1 + 0xb94;
        }
        else {
          iVar8 = *piVar7;
          iVar4 = iVar8;
        }
        FUN_1001adb0(*(undefined4 *)(param_1 + 0xf94 + (int)lVar10 * 4),iVar8,iVar4);
        uVar9 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        lVar10 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
        puVar12 = local_48;
        if ((1 - ((uint)lVar10 >> 5) & 0xff) == 0) break;
        bVar2 = (byte)(1 << (ulonglong)((uint)lVar10 & 7));
        lVar11 = ((lVar10 << 0x20) >> 0x23) + ZEXT48(&local_4c);
      }
    }
    *(undefined4 *)(param_1 + 0x58a8) = 0;
  }
  local_4c = *(uint *)(param_1 + 0x58ac);
  uVar9 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
  uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  lVar10 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
  uVar9 = (uint)lVar10;
  if ((1 - (uVar9 >> 5) & 0xff) != 0) {
    pbVar3 = (byte *)((int)&local_4c + ((int)uVar9 >> 3));
    *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
    while( true ) {
      if (*(int *)(param_1 + 0x57bc + (int)lVar10 * 4) != 0) {
        uVar6 = (*pcVar5)();
        (*extraout_w11_00)(uVar6);
      }
      uVar9 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
      uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      lVar10 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
      uVar9 = (uint)lVar10;
      if ((1 - (uVar9 >> 5) & 0xff) == 0) break;
      pbVar3 = (byte *)((int)&local_4c + ((int)uVar9 >> 3));
      *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
    }
  }
  uVar9 = puVar12[0x22f];
  *(undefined4 *)(param_1 + 0x58ac) = 0;
  if ((char)uVar9 != '\0') {
    if (*(int *)(&DAT_000057b8 + param_1) != 0) {
      uVar6 = (*pcVar5)();
      (*extraout_w11_01)(uVar6);
    }
    *(undefined1 *)(puVar12 + 0x22f) = 0;
  }
  if (param_2 != '\0') {
    FUN_10020170(param_1);
  }
  return;
}

