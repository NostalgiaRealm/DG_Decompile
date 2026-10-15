/*
 * FUN_10039d32 at 10039d32
 * undefined8 __stdcall FUN_10039d32(int * param_1)
 * Address ranges: 10039d32-10039deb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10039d32(int *param_1)

{
  return CONCAT44(((((param_1[6] & 0xfU) << 4 | param_1[6] & 0xfU) << 4 | param_1[7] & 0xfU) << 4 |
                  param_1[8] & 0xfU) << 0x10 |
                  (((param_1[10] & 0xfU) << 4 | param_1[10] & 0xfU) << 4 | param_1[0xb] & 0xfU) << 4
                  | param_1[0xc] & 0xfU,
                  (((uint)*(ushort *)(param_1 + 4) << 5 | param_1[2] & 0xfU) * 2 | param_1[1] & 1U)
                  * 2 | -(uint)(param_1[3] != 0) & 0x40 | (uint)(*param_1 != 0));
}

