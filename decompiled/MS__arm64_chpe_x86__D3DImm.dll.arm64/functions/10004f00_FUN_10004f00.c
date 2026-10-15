/*
 * FUN_10004f00 at 10004f00
 * undefined FUN_10004f00(void)
 * Address ranges: 10004f00-10005057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004f00(int param_1,uint param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  code *extraout_w11;
  undefined1 auVar6 [16];
  undefined1 auStack_70 [64];
  
  if (9 < (int)param_2) {
    uVar4 = param_2 - 10;
    pbVar1 = (byte *)((uVar4 >> 3 & 3) + param_1 + ((uVar4 >> 5) + 0x244) * 4);
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
  }
  if (param_2 == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    auVar6 = FUN_100123f0(*(int *)(param_1 + 0x9cc) + 0x40,auStack_70,param_1 + 0x964);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
              (auVar6._0_8_,auVar6._8_8_,auVar6._0_8_ & 0xffffffff);
    (*extraout_w11)(uVar2,1);
    iVar3 = *(int *)(param_1 + 0x9cc);
    if ((((*(float *)(iVar3 + 0x70) != 0.0) || (*(float *)(iVar3 + 0x74) != 0.0)) ||
        (*(float *)(iVar3 + 0x78) != 0.0)) || (uVar5 = 0, *(float *)(iVar3 + 0x7c) != 1.0)) {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x225) = uVar5;
  }
  else {
    pbVar1 = (byte *)((param_2 >> 3 & 3) + param_1 + ((param_2 >> 5) + 0x24f) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  FUN_100074e0(param_1,param_2);
  return;
}

