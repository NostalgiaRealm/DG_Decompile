/*
 * FUN_18002ab30 at 18002ab30
 * undefined __cdecl FUN_18002ab30(longlong param_1)
 * Address ranges: 18002ab30-18002ab7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ab30(longlong param_1)

{
  SetRect((LPRECT)(param_1 + 0x34),0,0,0,0);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfe;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}

