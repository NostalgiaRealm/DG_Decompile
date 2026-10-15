/*
 * FUN_10051b20 at 10051b20
 * undefined FUN_10051b20(void)
 * Address ranges: 10051b20-10051c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10051b20(int param_1,char param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  uint local_40 [4];
  
  FUN_10002630(param_1);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_2 != *(char *)(param_1 + 0xa85)) {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,param_2);
    *(char *)(param_1 + 0xa85) = param_2;
  }
  local_40[0] = *(uint *)(param_1 + 0x938);
  uVar4 = (local_40[0] & 0xaaaaaaaa) >> 1 | (local_40[0] & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  lVar5 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  uVar4 = (uint)lVar5;
  if ((1 - (uVar4 >> 5) & 0xff) != 0) {
    pbVar1 = (byte *)((int)local_40 + ((int)uVar4 >> 3));
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    while( true ) {
      if (*(int *)(param_1 + 0x14d4 + (int)lVar5 * 4) != 0) {
        uVar3 = (*pcVar2)();
        (*extraout_w11_00)(uVar3);
      }
      uVar4 = (local_40[0] & 0xaaaaaaaa) >> 1 | (local_40[0] & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      lVar5 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      uVar4 = (uint)lVar5;
      if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
      pbVar1 = (byte *)((int)local_40 + ((int)uVar4 >> 3));
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    }
  }
  *(uint *)(param_1 + 0x938) = 0;
  return;
}

