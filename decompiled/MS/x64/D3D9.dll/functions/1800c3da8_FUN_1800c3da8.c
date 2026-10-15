/*
 * FUN_1800c3da8 at 1800c3da8
 * undefined __fastcall FUN_1800c3da8(longlong param_1)
 * Address ranges: 1800c3da8-1800c3de3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c3da8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(short *)(param_1 + 0x3c) != 0) {
    do {
      FUN_180031d4c(*(longlong **)(param_1 + 0x40 + uVar2 * 8),'\0');
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(ushort *)(param_1 + 0x3c));
  }
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return;
}

