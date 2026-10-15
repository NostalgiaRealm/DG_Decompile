/*
 * FUN_10016480 at 10016480
 * undefined FUN_10016480(void)
 * Address ranges: 10016480-100165a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016480(int param_1,uint param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x100) + param_2 * 0x1c + 0xc;
  (*(code *)PTR_FUN_100ba2e0)(iVar2,iVar2,param_3);
  iVar2 = *(int *)(param_1 + 0x120) + param_2 * 0x1c + 0xc;
  (*(code *)PTR_FUN_100ba2e0)(iVar2,iVar2,param_3);
  iVar2 = param_1 + (param_2 >> 5) * 4;
  pbVar1 = (byte *)((param_2 >> 3 & 3) + iVar2 + 0x154);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  pbVar1 = (byte *)((param_2 >> 3 & 3) + iVar2 + 0x178);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  pbVar1 = (byte *)((param_2 >> 3 & 3) + iVar2 + 0x160);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  *(undefined1 *)(param_1 + 0xdb) = 0;
  pbVar1 = (byte *)((param_2 >> 3 & 3) + iVar2 + 0xcc);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  return;
}

