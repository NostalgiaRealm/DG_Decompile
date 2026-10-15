/*
 * FUN_10009d90 at 10009d90
 * undefined FUN_10009d90(void)
 * Address ranges: 10009d90-10009edf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10009d90(int param_1,ulonglong param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 uVar7;
  uint uVar8;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar8 = (uint)param_2;
  uVar6 = 0x8876086c;
  uVar7 = uVar6;
  if ((uVar8 < 0x10) && ((param_3 == 0 || (*(int *)(param_3 + 0x40) != 3)))) {
    if (*(char *)(param_1 + 0x3c4) == '\0') {
      cVar5 = FUN_1000c450(param_1,param_2 & 0xffffffff,param_3,param_4,param_5,0);
      uVar7 = 0;
      if (cVar5 == '\0') {
        uVar7 = uVar6;
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x3b4) + *(int *)(param_1 + 0x3c0) * 4);
      if (param_3 != 0) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(param_3);
      }
      iVar1 = iVar2 + uVar8 * 4;
      if (*(int *)(iVar1 + 0xaae4) != 0) {
        uVar6 = (*pcVar4)();
        (*extraout_w11_00)(uVar6);
      }
      *(int *)(iVar1 + 0xaae4) = param_3;
      *(undefined4 *)(iVar1 + 0xab24) = param_4;
      *(undefined4 *)(iVar1 + 0xab64) = param_5;
      pbVar3 = (byte *)(((uint)((param_2 & 0xffffffff) >> 3) & 3) +
                       iVar2 + ((uVar8 >> 5) + 0x2b06) * 4);
      *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(uVar8 & 7));
      uVar7 = 0;
    }
  }
  return uVar7;
}

