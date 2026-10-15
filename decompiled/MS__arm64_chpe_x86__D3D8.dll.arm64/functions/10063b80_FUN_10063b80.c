/*
 * FUN_10063b80 at 10063b80
 * undefined FUN_10063b80(void)
 * Address ranges: 10063b80-10063c53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063b80(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  iVar1 = param_1 + 0x90;
  *(uint *)(iVar1 + param_2 * 0x70 + 0x52d4) = param_3 & 0xff;
  *(undefined1 *)(param_1 + 0xd981) = 1;
  iVar1 = iVar1 + (*(byte *)(iVar1 + param_2 + 0x604) + 0x17d) * 4;
  iVar2 = (int)param_2 >> 3;
  if ((param_3 & 0xff) == 0) {
    bVar3 = *(byte *)(iVar2 + iVar1) & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  }
  else {
    bVar3 = *(byte *)(iVar2 + iVar1) | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  *(byte *)(iVar2 + iVar1) = bVar3;
  *(undefined1 *)(param_1 + 0xd9aa) = 1;
  return;
}

