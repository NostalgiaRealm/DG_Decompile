/*
 * FUN_1000b700 at 1000b700
 * undefined FUN_1000b700(void)
 * Address ranges: 1000b700-1000bbef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b700(int param_1,char param_2)

{
  byte *pbVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint *puVar10;
  uint local_4c;
  uint *local_48;
  uint *puStack_44;
  
  puVar10 = (uint *)(param_1 + 0x6000);
  FUN_100260d0(param_1);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar9 = (uint *)(param_1 + 0xccc);
  local_4c = *puVar9;
  uVar7 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
  uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
  uVar7 = (uint)lVar8;
  if ((1 - (uVar7 >> 5) & 0xff) != 0) {
    pbVar1 = (byte *)((int)&local_4c + ((int)uVar7 >> 3));
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    local_48 = puVar9;
    while( true ) {
      iVar6 = *(int *)(param_1 + 0x1258 + (int)lVar8 * 4);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) - 3U < 3)) {
        uVar4 = (*pcVar3)();
        (*extraout_w11)(uVar4);
      }
      uVar7 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
      uVar7 = (uint)lVar8;
      puVar9 = local_48;
      if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
      pbVar1 = (byte *)((int)&local_4c + ((int)uVar7 >> 3));
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    }
  }
  local_4c = *(uint *)(param_1 + 0x6680);
  *puVar9 = 0;
  uVar7 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
  uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
  uVar7 = (uint)lVar8;
  if ((1 - (uVar7 >> 5) & 0xff) != 0) {
    pbVar1 = (byte *)((int)&local_4c + ((int)uVar7 >> 3));
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    while( true ) {
      iVar6 = *(int *)(param_1 + 0x1298 + (int)lVar8 * 4);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) - 3U < 3)) {
        uVar4 = (*pcVar3)();
        (*extraout_w11_00)(uVar4);
      }
      uVar7 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
      uVar7 = (uint)lVar8;
      if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
      pbVar1 = (byte *)((int)&local_4c + ((int)uVar7 >> 3));
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    }
  }
  uVar7 = *(uint *)(param_1 + 0x667c);
  *(undefined4 *)(param_1 + 0x6680) = 0;
  if ((uVar7 != 0) || (*(int *)(param_1 + 0x6688) != 0)) {
    piVar5 = (int *)FUN_1000fed0(param_1 + 0xe48,param_1 + 0x6674);
    local_4c = *(uint *)(param_1 + 0x6678) & uVar7;
    uVar7 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    uVar7 = (uint)lVar8;
    local_48 = puVar10;
    if ((1 - (uVar7 >> 5) & 0xff) != 0) {
      pbVar1 = (byte *)((int)&local_4c + ((int)uVar7 >> 3));
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      while( true ) {
        if (piVar5 == (int *)0x0) {
          iVar6 = 0;
          iVar2 = param_1 + 0xe58;
        }
        else {
          iVar6 = *piVar5;
          iVar2 = iVar6;
        }
        FUN_100202c0(*(undefined4 *)(param_1 + 0x1258 + (int)lVar8 * 4),iVar6,iVar2);
        uVar7 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
        uVar7 = (uint)lVar8;
        if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
        pbVar1 = (byte *)((int)&local_4c + ((int)uVar7 >> 3));
        *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      }
    }
    *(undefined4 *)(param_1 + 0x667c) = 0;
    puVar9 = (uint *)(param_1 + 0x6688);
    local_4c = *(uint *)(param_1 + 0x6684) & *puVar9;
    uVar7 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    uVar7 = (uint)lVar8;
    puVar10 = local_48;
    if ((1 - (uVar7 >> 5) & 0xff) != 0) {
      pbVar1 = (byte *)((int)&local_4c + ((int)uVar7 >> 3));
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      puStack_44 = puVar9;
      while( true ) {
        if (piVar5 == (int *)0x0) {
          iVar6 = 0;
          iVar2 = param_1 + 0xe58;
        }
        else {
          iVar6 = *piVar5;
          iVar2 = iVar6;
        }
        FUN_100202c0(*(undefined4 *)(param_1 + 0x1258 + (int)lVar8 * 4),iVar6,iVar2);
        uVar7 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
        uVar7 = (uint)lVar8;
        puVar9 = puStack_44;
        puVar10 = local_48;
        if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
        pbVar1 = (byte *)((int)&local_4c + ((int)uVar7 >> 3));
        *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      }
    }
    *puVar9 = 0;
  }
  local_48 = *(uint **)(param_1 + 0x668c);
  uVar7 = ((uint)local_48 & 0xaaaaaaaa) >> 1 | ((uint)local_48 & 0x55555555) << 1;
  uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
  uVar7 = (uint)lVar8;
  if ((1 - (uVar7 >> 5) & 0xff) != 0) {
    pbVar1 = (byte *)((int)&local_48 + ((int)uVar7 >> 3));
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    while( true ) {
      if (*(int *)(param_1 + 26000 + (int)lVar8 * 4) != 0) {
        uVar4 = (*pcVar3)();
        (*extraout_w11_01)(uVar4);
      }
      uVar7 = ((uint)local_48 & 0xaaaaaaaa) >> 1 | ((uint)local_48 & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      lVar8 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
      uVar7 = (uint)lVar8;
      if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
      pbVar1 = (byte *)((int)&local_48 + ((int)uVar7 >> 3));
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
    }
  }
  uVar7 = puVar10[0x1a7];
  *(undefined4 *)(param_1 + 0x668c) = 0;
  if ((char)uVar7 != '\0') {
    if (*(int *)(&DAT_0000658c + param_1) != 0) {
      uVar4 = (*pcVar3)();
      (*extraout_w11_02)(uVar4);
    }
    *(undefined1 *)(puVar10 + 0x1a7) = 0;
  }
  if (param_2 != '\0') {
    FUN_10025bb0(param_1);
  }
  return;
}

