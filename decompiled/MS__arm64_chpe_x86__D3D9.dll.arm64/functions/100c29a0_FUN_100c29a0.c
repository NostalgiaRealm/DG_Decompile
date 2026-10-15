/*
 * FUN_100c29a0 at 100c29a0
 * undefined FUN_100c29a0(void)
 * Address ranges: 100c29a0-100c2a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c29a0(int param_1,uint param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x150) + param_2 * 0x20 + 0x10;
  (*(code *)PTR_FUN_1016c298)(iVar2,iVar2,param_3);
  iVar2 = *(int *)(param_1 + 0x18c) + param_2 * 0x20 + 0x10;
  (*(code *)PTR_FUN_1016c298)(iVar2,iVar2,param_3);
  param_1 = param_1 + (param_2 >> 5) * 4;
  pbVar1 = (byte *)((param_2 >> 3 & 3) + param_1 + 0x1c0);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  pbVar1 = (byte *)((param_2 >> 3 & 3) + param_1 + 0x1e4);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  pbVar1 = (byte *)((param_2 >> 3 & 3) + param_1 + 0x1cc);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  return;
}

