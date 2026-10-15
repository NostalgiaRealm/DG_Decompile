/*
 * FUN_180027c18 at 180027c18
 * undefined __fastcall FUN_180027c18(longlong param_1)
 * Address ranges: 180027c18-180027c55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027c18(longlong param_1)

{
  SetRect((LPRECT)(param_1 + 0x34),0,0,0,0);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfe;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}

