/*
 * FUN_10019c90 at 10019c90
 * undefined FUN_10019c90(void)
 * Address ranges: 10019c90-10019cf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019c90(int param_1,byte param_2,byte param_3)

{
  FUN_100196b8(param_1,param_2,param_3,*(undefined1 *)(param_1 + 0x2b88),
               *(undefined1 *)(param_1 + 0x2b89),*(undefined1 *)(param_1 + 0x2b8a),
               *(undefined1 *)(param_1 + 0x2b8b));
  *(uint *)(param_1 + 0x2b2c) = (uint)param_2;
  *(uint *)(param_1 + 0x2b30) = (uint)param_3;
  return;
}

