/*
 * FUN_18002ed28 at 18002ed28
 * undefined __cdecl FUN_18002ed28(longlong * param_1)
 * Address ranges: 18002ed28-18002ed57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ed28(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x2bb4) = *(undefined4 *)(lVar1 + 0x2b84);
  *(undefined4 *)(lVar1 + 0x2bb8) = *(undefined4 *)(lVar1 + 0x2b88);
  *(undefined8 *)(lVar1 + 0x2bc0) = *(undefined8 *)(lVar1 + 0x2b90);
  *(undefined4 *)(lVar1 + 0x2bc8) = *(undefined4 *)(lVar1 + 0x2b98);
  *(undefined4 *)(lVar1 + 0x2bcc) = *(undefined4 *)(lVar1 + 0x2b9c);
  return;
}

