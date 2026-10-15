/*
 * FUN_1000d740 at 1000d740
 * undefined FUN_1000d740(void)
 * Address ranges: 1000d740-1000d9af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000d740(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar8;
  undefined1 auVar9 [16];
  uint local_60;
  int local_5c;
  uint uStack_58;
  uint local_54;
  int local_50;
  
  local_50 = param_1 + 0x4000;
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x32) = 1;
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar8 = *(uint *)(iVar2 + 0x2c);
    local_60 = uVar8 & 0xffff;
    if (local_60 != 0) {
      uVar6 = (uVar8 & 0xaaaa) >> 1 | (uVar8 & 0x5555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      lVar7 = LZCOUNT((uVar6 >> 8 | (uVar6 & 0xff00ff) << 8) << 0x10);
      uVar5 = (uint)lVar7;
      uVar6 = local_60;
      if ((1 - (uVar5 >> 5) & 0xff) != 0) {
        pbVar3 = (byte *)((int)&local_60 + ((int)uVar5 >> 3));
        puVar1 = (undefined4 *)(param_1 + 0x14);
        *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
        local_5c = param_1;
        uStack_58 = uVar8;
        local_54 = local_60;
        while( true ) {
          if ((*(int *)(iVar2 + 0x18) - 3U & 0xfffffffd) == 0) {
            auVar9 = (*pcVar4)(*puVar1,lVar7);
            (*extraout_w11)(auVar9._0_8_ & 0xffffffff,auVar9._8_8_ & 0xffffffff,0,
                            *(undefined4 *)(iVar2 + 0x44),0,0,0,0);
          }
          uVar8 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
          uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          lVar7 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
          uVar5 = (uint)lVar7;
          param_1 = local_5c;
          uVar8 = uStack_58;
          uVar6 = local_54;
          if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
          pbVar3 = (byte *)((int)&local_60 + ((int)uVar5 >> 3));
          *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
        }
      }
      *(uint *)(param_1 + 0xccc) = *(uint *)(param_1 + 0xccc) | uVar6;
    }
    uVar8 = uVar8 >> 0x10;
    if (uVar8 != 0) {
      uVar6 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      lVar7 = LZCOUNT((uVar6 >> 8 | (uVar6 & 0xff00ff) << 8) << 0x10);
      uVar6 = (uint)lVar7;
      if ((1 - (uVar6 >> 5) & 0xff) != 0) {
        pbVar3 = (byte *)((int)&local_60 + ((int)uVar6 >> 3));
        *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
        local_60 = uVar8;
        while( true ) {
          if ((*(int *)(iVar2 + 0x18) - 3U & 0xfffffffd) == 0) {
            auVar9 = (*pcVar4)(*(undefined4 *)(param_1 + 0x14),lVar7);
            (*extraout_w11_00)(auVar9._0_8_ & 0xffffffff,auVar9._8_8_ & 0xffffffff,0,
                               *(undefined4 *)(iVar2 + 0x44),0);
          }
          uVar6 = (local_60 & 0xaaaaaaaa) >> 1 | (local_60 & 0x55555555) << 1;
          uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
          uVar6 = (uint)lVar7;
          if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
          pbVar3 = (byte *)((int)&local_60 + ((int)uVar6 >> 3));
          *pbVar3 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
        }
      }
      *(uint *)(local_50 + 0x2680) = uVar8 | *(uint *)(local_50 + 0x2680);
    }
  }
  return;
}

