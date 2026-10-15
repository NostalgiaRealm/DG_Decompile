/*
 * FUN_10029230 at 10029230
 * undefined FUN_10029230(void)
 * Address ranges: 10029230-1002936f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029230(int param_1,ulonglong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  code *extraout_w11;
  uint uVar7;
  undefined1 auStack_30 [16];
  
  FUN_10157b40(auStack_30);
  uVar7 = (uint)param_2;
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    iVar1 = param_1 + uVar7 * 0x10;
    puVar2 = (undefined4 *)(param_1 + (uVar7 + 0x3d) * 0x10);
    uVar6 = ZEXT48(puVar2);
    *puVar2 = *param_3;
    *(undefined4 *)(iVar1 + 0x3d4) = param_3[1];
    *(undefined4 *)(iVar1 + 0x3d8) = param_3[2];
    *(undefined4 *)(iVar1 + 0x3dc) = param_3[3];
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5,param_2 & 0xffffffff,uVar6 & 0xffffffff);
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x3b4) + *(int *)(param_1 + 0x3c0) * 4);
    iVar1 = iVar3 + uVar7 * 0x10;
    *(undefined4 *)(iVar1 + 0x4a4c) = *param_3;
    *(undefined4 *)(iVar3 + (uVar7 + 0x4a5) * 0x10) = param_3[1];
    *(undefined4 *)(iVar1 + 0x4a54) = param_3[2];
    *(undefined4 *)(iVar1 + 0x4a58) = param_3[3];
    pbVar4 = (byte *)(((uint)((param_2 & 0xffffffff) >> 3) & 3) +
                     iVar3 + ((uVar7 >> 5) + 0x2b04) * 4);
    *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(uVar7 & 7));
  }
  FUN_10157a90(auStack_30);
  return;
}

