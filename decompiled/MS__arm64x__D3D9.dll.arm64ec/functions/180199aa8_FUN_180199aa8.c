/*
 * FUN_180199aa8 at 180199aa8
 * undefined FUN_180199aa8(void)
 * Address ranges: 180199aa8-180199b37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180199aa8(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 & 0xffffffff;
  lVar1 = *(longlong *)(param_1 + 0x90) + uVar2 * 0x28;
  thunk_FUN_180223c70(lVar1 + 0x18,lVar1 + 0x18);
  if (*(longlong *)(param_1 + 0x148) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x148) + uVar2 * 0x28;
    thunk_FUN_180223c70(lVar1 + 0x18,lVar1 + 0x18,param_3);
  }
  *(undefined1 *)(param_1 + 0x16b) = 0;
  param_1 = param_1 + ((uVar2 >> 6) + 0x2b) * 8;
  uVar2 = uVar2 >> 3 & 7;
  *(byte *)(param_1 + uVar2) = *(byte *)(param_1 + uVar2) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
  return;
}

