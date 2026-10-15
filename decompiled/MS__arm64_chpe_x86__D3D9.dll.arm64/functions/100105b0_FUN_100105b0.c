/*
 * FUN_100105b0 at 100105b0
 * undefined FUN_100105b0(void)
 * Address ranges: 100105b0-1001073b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100105b0(int param_1,uint param_2,char param_3)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  uint local_50 [4];
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
  uVar6 = (uint)lVar7;
  local_50[0] = param_2;
  if ((1 - (uVar6 >> 5) & 0xff) != 0) {
    pbVar3 = (byte *)((int)local_50 + ((int)uVar6 >> 3));
    *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
    while( true ) {
      iVar2 = *(int *)(param_1 + 26000 + (int)lVar7 * 4);
      if ((*(int *)(iVar2 + 0x44) != 0) && ((*(uint *)(iVar2 + 0x34) >> 9 & 1) != 0)) {
        uVar5 = (*pcVar4)();
        (*extraout_w11)(uVar5);
      }
      uVar6 = (local_50[0] & 0xaaaaaaaa) >> 1 | (local_50[0] & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      uVar6 = (uint)lVar7;
      if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
      pbVar3 = (byte *)((int)local_50 + ((int)uVar6 >> 3));
      *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
    }
  }
  if (param_3 != '\0') {
    iVar2 = *(int *)(&DAT_0000658c + param_1);
    if ((*(int *)(iVar2 + 0x40) != 0) && ((*(uint *)(iVar2 + 0x34) >> 9 & 1) != 0)) {
      pcVar1 = &DAT_00000010;
      if (*(int *)(iVar2 + 0x2c) != 0) {
        pcVar1 = (char *)(*(int *)(iVar2 + 0x2c) + -0x66a4);
      }
      if (*pcVar1 != '\0') {
        uVar5 = (*pcVar4)();
        (*extraout_w11_00)(uVar5);
      }
    }
  }
  return;
}

