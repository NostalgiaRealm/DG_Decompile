/*
 * FUN_18002ee40 at 18002ee40
 * undefined __cdecl FUN_18002ee40(longlong * param_1)
 * Address ranges: 18002ee40-18002ee6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ee40(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x2ba8) = *(undefined4 *)(lVar1 + 0x2b78);
  *(undefined4 *)(lVar1 + 0x2bac) = *(undefined4 *)(lVar1 + 0x2b7c);
  *(undefined4 *)(lVar1 + 0x2bb0) = *(undefined4 *)(lVar1 + 0x2b80);
  *(undefined4 *)(lVar1 + 0x2bd0) = *(undefined4 *)(lVar1 + 0x2ba0);
  return;
}

