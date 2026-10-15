/*
 * FUN_10037307 at 10037307
 * undefined8 __stdcall FUN_10037307(int * param_1)
 * Address ranges: 10037307-10037470
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10037307(int *param_1)

{
  return CONCAT44(((uint)(param_1[1] != 0) * 2 | (uint)(*param_1 != 0)) << 0x1e |
                  (((((((uint)(*(byte *)(param_1 + 0x29) & 0xf) << 4 |
                       (uint)(*(byte *)(param_1 + 0x1f) & 0xf)) << 4 |
                      (uint)(*(byte *)(param_1 + 0x15) & 0xf)) << 4 |
                     (uint)(*(byte *)(param_1 + 0xb) & 0xf)) << 4 | param_1[10] & 0xfU) << 3 |
                   param_1[9] & 7U) << 5 | param_1[8] & 0x1fU) >> 4,
                  param_1[8] << 0x1c |
                  -(uint)(param_1[0x21] != 0) & 0x200 | -(uint)(param_1[0x20] != 0) & 0x100 |
                  -(uint)(param_1[0x17] != 0) & 0x80 | -(uint)(param_1[0x16] != 0) & 0x40 |
                  -(uint)(param_1[0xd] != 0) & 0x20 | -(uint)(param_1[0xc] != 0) & 0x10 |
                  -(uint)(param_1[3] != 0) & 8 | -(uint)(param_1[2] != 0) & 4 |
                  ((((param_1[7] & 0x1fU) << 3 | param_1[6] & 7U) << 5 | param_1[5] & 0x1fU) << 5 |
                  param_1[4] & 0x1fU) << 10);
}

