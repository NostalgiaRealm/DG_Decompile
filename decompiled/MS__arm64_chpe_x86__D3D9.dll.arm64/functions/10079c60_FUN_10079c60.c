/*
 * FUN_10079c60 at 10079c60
 * undefined FUN_10079c60(void)
 * Address ranges: 10079c60-10079d5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079c60(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  iVar1 = param_1 + 0x90;
  puVar2 = param_3 + 1;
  puVar3 = param_3 + 2;
  *(undefined4 *)(iVar1 + (param_2 + 0x6d7) * 0x10) = *param_3;
  iVar5 = iVar1 + param_2 * 0x10;
  puVar4 = param_3 + 3;
  *(undefined4 *)(iVar5 + 0x6d74) = *puVar2;
  *(undefined4 *)(iVar5 + 0x6d78) = *puVar3;
  *(undefined4 *)(iVar5 + 0x6d7c) = *puVar4;
  *(undefined1 *)(param_1 + 0xf671) = 1;
  *(undefined4 *)(iVar1 + (param_2 + 0x63c) * 0x10) = *param_3;
  *(undefined4 *)(iVar5 + 0x63c4) = *puVar2;
  *(undefined4 *)(iVar5 + 0x63c8) = *puVar3;
  *(undefined4 *)(iVar5 + 0x63cc) = *puVar4;
  *(undefined1 *)(param_1 + 0xf6a3) = 1;
  *(undefined4 *)(iVar1 + (param_2 + 0x512) * 0x10) = *param_3;
  *(undefined4 *)(iVar5 + 0x5124) = *puVar2;
  *(undefined4 *)(iVar5 + 0x5128) = *puVar3;
  *(undefined4 *)(iVar5 + 0x512c) = *puVar4;
  *(undefined1 *)(param_1 + 0xf694) = 1;
  return;
}

