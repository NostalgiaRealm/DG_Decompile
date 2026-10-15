/*
 * FUN_1000c7f0 at 1000c7f0
 * undefined FUN_1000c7f0(void)
 * Address ranges: 1000c7f0-1000c92f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c7f0(int param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  code *extraout_w11;
  undefined1 auVar6 [16];
  uint local_50 [4];
  
  *(undefined1 *)(param_2 + 0x32) = 1;
  uVar4 = *(uint *)(param_2 + 0x2c);
  uVar1 = uVar4 & 0xffff;
  if (uVar1 != 0) {
    uVar4 = (uVar4 & 0xaaaa) >> 1 | (uVar4 & 0x5555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    lVar5 = LZCOUNT((uVar4 >> 8 | (uVar4 & 0xff00ff) << 8) << 0x10);
    uVar4 = (uint)lVar5;
    if ((1 - (uVar4 >> 5) & 0xff) != 0) {
      pbVar2 = (byte *)((int)local_50 + ((int)uVar4 >> 3));
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
      pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      local_50[0] = uVar1;
      while( true ) {
        auVar6 = (*pcVar3)(*(undefined4 *)(param_1 + 0x14),lVar5);
        (*extraout_w11)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_ & 0xffffffff,0,
                        *(undefined4 *)(param_2 + 0x94),0,0,0,0);
        uVar4 = (local_50[0] & 0xaaaaaaaa) >> 1 | (local_50[0] & 0x55555555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        lVar5 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
        uVar4 = (uint)lVar5;
        if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
        pbVar2 = (byte *)((int)local_50 + ((int)uVar4 >> 3));
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
      }
    }
    *(uint *)(param_1 + 0xa08) = uVar1 | *(uint *)(param_1 + 0xa08);
  }
  return;
}

