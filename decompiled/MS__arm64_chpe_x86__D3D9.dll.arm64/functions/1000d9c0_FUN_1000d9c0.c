/*
 * FUN_1000d9c0 at 1000d9c0
 * undefined FUN_1000d9c0(void)
 * Address ranges: 1000d9c0-1000dbf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000d9c0(int param_1,int param_2)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  uint local_50;
  int local_4c;
  uint uStack_48;
  uint local_44;
  
  *(undefined1 *)(param_2 + 0x32) = 1;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = *(uint *)(param_2 + 0x2c);
  iVar7 = param_1 + 0x4000;
  local_50 = uVar6 & 0xffff;
  if (local_50 != 0) {
    uVar4 = (uVar6 & 0xaaaa) >> 1 | (uVar6 & 0x5555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    lVar5 = LZCOUNT((uVar4 >> 8 | (uVar4 & 0xff00ff) << 8) << 0x10);
    uVar3 = (uint)lVar5;
    uVar4 = local_50;
    if ((1 - (uVar3 >> 5) & 0xff) != 0) {
      pbVar1 = (byte *)((int)&local_50 + ((int)uVar3 >> 3));
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
      local_4c = iVar7;
      uStack_48 = uVar6;
      local_44 = local_50;
      while( true ) {
        auVar8 = (*pcVar2)(*(undefined4 *)(param_1 + 0x14),lVar5);
        (*extraout_w11)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff,0,
                        *(undefined4 *)(param_2 + 0x94),0,0,0,0);
        uVar6 = (local_50 & 0xaaaaaaaa) >> 1 | (local_50 & 0x55555555) << 1;
        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        lVar5 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
        uVar3 = (uint)lVar5;
        uVar6 = uStack_48;
        uVar4 = local_44;
        iVar7 = local_4c;
        if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
        pbVar1 = (byte *)((int)&local_50 + ((int)uVar3 >> 3));
        *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
      }
    }
    *(uint *)(param_1 + 0xccc) = uVar4 | *(uint *)(param_1 + 0xccc);
  }
  uVar6 = uVar6 >> 0x10;
  if (uVar6 != 0) {
    uVar4 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    lVar5 = LZCOUNT((uVar4 >> 8 | (uVar4 & 0xff00ff) << 8) << 0x10);
    uVar4 = (uint)lVar5;
    if ((1 - (uVar4 >> 5) & 0xff) != 0) {
      pbVar1 = (byte *)((int)&local_50 + ((int)uVar4 >> 3));
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
      local_50 = uVar6;
      while( true ) {
        auVar8 = (*pcVar2)(*(undefined4 *)(param_1 + 0x14),lVar5);
        (*extraout_w11_00)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff,0,
                           *(undefined4 *)(param_2 + 0x94),0);
        uVar4 = (local_50 & 0xaaaaaaaa) >> 1 | (local_50 & 0x55555555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        lVar5 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
        uVar4 = (uint)lVar5;
        if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
        pbVar1 = (byte *)((int)&local_50 + ((int)uVar4 >> 3));
        *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
      }
    }
    *(uint *)(iVar7 + 0x2680) = *(uint *)(iVar7 + 0x2680) | uVar6;
  }
  return;
}

