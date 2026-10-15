/*
 * FUN_180087c30 at 180087c30
 * undefined FUN_180087c30(void)
 * Address ranges: 180087c30-180087d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180087c30(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_2 & 0xffffffff;
  lVar1 = *(longlong *)(param_1 + 0x1b0) + uVar2 * 0x28;
  (*__imp_USER32_dll_UnionRect)(lVar1 + 0x18,lVar1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x1f0) + uVar2 * 0x28;
  (*__imp_USER32_dll_UnionRect)(lVar1 + 0x18,lVar1 + 0x18,param_3);
  lVar1 = param_1 + (uVar2 >> 6) * 8;
  uVar3 = uVar2 >> 3 & 7;
  *(byte *)(lVar1 + 0x250 + uVar3) =
       *(byte *)(lVar1 + 0x250 + uVar3) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
  uVar3 = uVar2 >> 3 & 7;
  *(byte *)(lVar1 + 0x280 + uVar3) =
       *(byte *)(lVar1 + 0x280 + uVar3) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
  uVar3 = uVar2 >> 3 & 7;
  *(byte *)(lVar1 + 0x260 + uVar3) =
       *(byte *)(lVar1 + 0x260 + uVar3) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
  *(undefined1 *)(param_1 + 0x16b) = 0;
  uVar2 = uVar2 >> 3 & 7;
  *(byte *)(lVar1 + 0x158 + uVar2) =
       *(byte *)(lVar1 + 0x158 + uVar2) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
  return;
}

