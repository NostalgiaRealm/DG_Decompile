/*
 * FUN_18002c06c at 18002c06c
 * undefined __fastcall FUN_18002c06c(longlong * param_1)
 * Address ranges: 18002c06c-18002c09f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002c06c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x2bac) = *(undefined4 *)(lVar1 + 0x2b7c);
  *(undefined4 *)(lVar1 + 0x2ba8) = *(undefined4 *)(lVar1 + 0x2b78);
  *(undefined4 *)(lVar1 + 0x2bb0) = *(undefined4 *)(lVar1 + 0x2b80);
  *(undefined4 *)(lVar1 + 0x2bd0) = *(undefined4 *)(lVar1 + 0x2ba0);
  return;
}

