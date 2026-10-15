/*
 * FUN_10023710 at 10023710
 * undefined FUN_10023710(void)
 * Address ranges: 10023710-10023847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023710(int param_1,ulonglong param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  code *extraout_w11;
  uint uVar6;
  undefined1 auStack_30 [16];
  
  FUN_10121020(auStack_30);
  uVar6 = (uint)param_2;
  if (*(char *)(param_1 + 0x220) == '\0') {
    iVar1 = param_1 + uVar6 * 0x10;
    uVar5 = ZEXT48((undefined4 *)(iVar1 + 0x22cU));
    *(undefined4 *)(iVar1 + 0x22cU) = *param_3;
    *(undefined4 *)(param_1 + (uVar6 + 0x23) * 0x10) = param_3[1];
    *(undefined4 *)(iVar1 + 0x234) = param_3[2];
    *(undefined4 *)(iVar1 + 0x238) = param_3[3];
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4,param_2 & 0xffffffff,uVar5 & 0xffffffff);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c) * 4);
    iVar1 = iVar2 + uVar6 * 0x10;
    *(undefined4 *)(iVar1 + 0x493c) = *param_3;
    *(undefined4 *)(iVar2 + (uVar6 + 0x494) * 0x10) = param_3[1];
    *(undefined4 *)(iVar1 + 0x4944) = param_3[2];
    *(undefined4 *)(iVar1 + 0x4948) = param_3[3];
    pbVar3 = (byte *)(((uint)((param_2 & 0xffffffff) >> 3) & 3) +
                     iVar2 + ((uVar6 >> 5) + 0x24e5) * 4);
    *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(uVar6 & 7));
  }
  FUN_10120f70(auStack_30);
  return;
}

