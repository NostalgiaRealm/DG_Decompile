/*
 * FUN_1801aeba8 at 1801aeba8
 * undefined FUN_1801aeba8(void)
 * Address ranges: 1801aeba8-1801aec6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801aeba8(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 & 0xffffffff;
  uVar1 = uVar2 << 5 | 0x10;
  thunk_FUN_180223c70(*(longlong *)(param_1 + 0x1c8) + uVar1,*(longlong *)(param_1 + 0x1c8) + uVar1)
  ;
  uVar1 = uVar2 << 5 | 0x10;
  thunk_FUN_180223c70(*(longlong *)(param_1 + 0x218) + uVar1,*(longlong *)(param_1 + 0x218) + uVar1,
                      param_3);
  param_1 = param_1 + (uVar2 >> 6) * 8;
  uVar1 = uVar2 >> 3 & 7;
  *(byte *)(param_1 + 0x250 + uVar1) =
       *(byte *)(param_1 + 0x250 + uVar1) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
  uVar1 = uVar2 >> 3 & 7;
  *(byte *)(param_1 + 0x280 + uVar1) =
       *(byte *)(param_1 + 0x280 + uVar1) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
  uVar1 = uVar2 >> 3 & 7;
  *(byte *)(param_1 + 0x260 + uVar1) =
       *(byte *)(param_1 + 0x260 + uVar1) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
  return;
}

