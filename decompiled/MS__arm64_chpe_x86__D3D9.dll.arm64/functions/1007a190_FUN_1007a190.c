/*
 * FUN_1007a190 at 1007a190
 * undefined FUN_1007a190(void)
 * Address ranges: 1007a190-1007a263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a190(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  iVar1 = param_1 + 0x90;
  *(uint *)(iVar1 + param_2 * 0x70 + 0x6f64) = param_3 & 0xff;
  *(undefined1 *)(param_1 + 0xf671) = 1;
  iVar1 = iVar1 + (*(byte *)(iVar1 + param_2 + 0xf28) + 0x3c6) * 4;
  iVar2 = (int)param_2 >> 3;
  if ((param_3 & 0xff) == 0) {
    bVar3 = *(byte *)(iVar2 + iVar1) & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  }
  else {
    bVar3 = *(byte *)(iVar2 + iVar1) | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  *(byte *)(iVar2 + iVar1) = bVar3;
  *(undefined1 *)(param_1 + 0xf6a5) = 1;
  return;
}

