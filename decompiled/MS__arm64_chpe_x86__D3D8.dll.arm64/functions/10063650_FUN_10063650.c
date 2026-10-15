/*
 * FUN_10063650 at 10063650
 * undefined FUN_10063650(void)
 * Address ranges: 10063650-1006374b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063650(int param_1,int param_2,undefined4 *param_3)

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
  *(undefined4 *)(iVar1 + (param_2 + 0x510) * 0x10) = *param_3;
  iVar5 = iVar1 + param_2 * 0x10;
  puVar4 = param_3 + 3;
  *(undefined4 *)(iVar5 + 0x5104) = *puVar2;
  *(undefined4 *)(iVar5 + 0x5108) = *puVar3;
  *(undefined4 *)(iVar5 + 0x510c) = *puVar4;
  *(undefined1 *)(param_1 + 0xd981) = 1;
  *(undefined4 *)(iVar1 + (param_2 + 0x47e) * 0x10) = *param_3;
  *(undefined4 *)(iVar5 + 0x47e4) = *puVar2;
  *(undefined4 *)(iVar5 + 0x47e8) = *puVar3;
  *(undefined4 *)(iVar5 + 0x47ec) = *puVar4;
  *(undefined1 *)(param_1 + 0xd9a8) = 1;
  *(undefined4 *)(iVar1 + (param_2 + 0x46c) * 0x10) = *param_3;
  *(undefined4 *)(iVar5 + 0x46c4) = *puVar2;
  *(undefined4 *)(iVar5 + 0x46c8) = *puVar3;
  *(undefined4 *)(iVar5 + 0x46cc) = *puVar4;
  *(undefined1 *)(param_1 + 0xd9a4) = 1;
  return;
}

