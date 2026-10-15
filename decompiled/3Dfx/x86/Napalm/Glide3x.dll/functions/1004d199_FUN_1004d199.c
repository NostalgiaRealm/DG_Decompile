/*
 * FUN_1004d199 at 1004d199
 * undefined8 __stdcall FUN_1004d199(uint * param_1)
 * Address ranges: 1004d199-1004d20b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004d199(uint *param_1)

{
  return CONCAT44(param_1[4] ^ param_1[3],
                  (-(uint)(param_1[9] != 0) & 0x100 | -(uint)(param_1[8] != 0) & 0x80 |
                   -(uint)(param_1[6] != 0) & 0x40 | -(uint)(param_1[7] != 0) & 0x20 |
                   -(uint)(param_1[2] != 0) & 0x10 | (*param_1 & 3) << 2 | param_1[1] & 3) ^
                  param_1[5]);
}

