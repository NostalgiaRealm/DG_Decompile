/*
 * FUN_18001d7d8 at 18001d7d8
 * undefined __cdecl FUN_18001d7d8(longlong param_1)
 * Address ranges: 18001d7d8-18001d827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d7d8(longlong param_1)

{
  SetRect((LPRECT)(param_1 + 0x34),0,0,0,0);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfe;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}

