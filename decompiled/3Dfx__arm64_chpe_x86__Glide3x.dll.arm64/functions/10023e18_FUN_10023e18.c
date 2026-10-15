/*
 * FUN_10023e18 at 10023e18
 * undefined FUN_10023e18(void)
 * Address ranges: 10023e18-10023e6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023e18(int param_1)

{
  (*(code *)PTR_FUN_100a01e8)(param_1 + 0x34,0,0,0,0);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfe;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  return;
}

