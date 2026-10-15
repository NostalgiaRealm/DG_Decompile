/*
 * FUN_10037240 at 10037240
 * undefined FUN_10037240(void)
 * Address ranges: 10037240-1003731f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037240(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  iVar1 = param_1 + 0x80;
  *(uint *)(iVar1 + param_2 * 0x70 + 0xfd4) = param_3 & 0xff;
  *(undefined1 *)(param_1 + 0x1d41) = 1;
  bVar5 = *(byte *)(iVar1 + param_2 + 0x420);
  uVar2 = (-(uint)(bVar5 >> 7) & 8) + param_2;
  iVar1 = iVar1 + ((bVar5 & 3) + 0x104) * 4;
  uVar3 = uVar2 & 7;
  iVar4 = (int)uVar2 >> 3;
  if ((param_3 & 0xff) == 0) {
    bVar5 = *(byte *)(iVar4 + iVar1) & ((byte)(1 << (ulonglong)uVar3) ^ 0xff);
  }
  else {
    bVar5 = *(byte *)(iVar4 + iVar1) | (byte)(1 << (ulonglong)uVar3);
  }
  *(byte *)(iVar4 + iVar1) = bVar5;
  *(undefined1 *)(param_1 + 0x1d4a) = 1;
  return;
}

