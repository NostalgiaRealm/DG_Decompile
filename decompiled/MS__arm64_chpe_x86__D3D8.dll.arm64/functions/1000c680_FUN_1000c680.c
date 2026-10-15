/*
 * FUN_1000c680 at 1000c680
 * undefined FUN_1000c680(void)
 * Address ranges: 1000c680-1000c7e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c680(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  code *extraout_w11;
  undefined1 auVar8 [16];
  uint local_50;
  int local_4c;
  
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x32) = 1;
    uVar6 = *(uint *)(iVar3 + 0x2c);
    uVar2 = uVar6 & 0xffff;
    if (uVar2 != 0) {
      uVar6 = (uVar6 & 0xaaaa) >> 1 | (uVar6 & 0x5555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      lVar7 = LZCOUNT((uVar6 >> 8 | (uVar6 & 0xff00ff) << 8) << 0x10);
      uVar6 = (uint)lVar7;
      if ((1 - (uVar6 >> 5) & 0xff) != 0) {
        pbVar4 = (byte *)((int)&local_50 + ((int)uVar6 >> 3));
        puVar1 = (undefined4 *)(param_1 + 0x14);
        *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
        pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        local_50 = uVar2;
        local_4c = param_1;
        while( true ) {
          if ((*(int *)(iVar3 + 0x18) - 3U & 0xfffffffd) == 0) {
            auVar8 = (*pcVar5)(*puVar1,lVar7);
            (*extraout_w11)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff,0,
                            *(undefined4 *)(iVar3 + 0x44),0,0,0,0);
          }
          uVar6 = (local_50 & 0xaaaaaaaa) >> 1 | (local_50 & 0x55555555) << 1;
          uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
          uVar6 = (uint)lVar7;
          param_1 = local_4c;
          if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
          pbVar4 = (byte *)((int)&local_50 + ((int)uVar6 >> 3));
          *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
        }
      }
      *(uint *)(param_1 + 0xa08) = *(uint *)(param_1 + 0xa08) | uVar2;
    }
  }
  return;
}

