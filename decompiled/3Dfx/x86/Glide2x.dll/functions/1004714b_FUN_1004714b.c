/*
 * FUN_1004714b at 1004714b
 * undefined8 __stdcall FUN_1004714b(int * param_1)
 * Address ranges: 1004714b-10047246
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004714b(int *param_1)

{
  return CONCAT44(((((uint)(*(byte *)(param_1 + 0x21) & 0xf) << 4 |
                    (uint)(*(byte *)(param_1 + 0x19) & 0xf)) << 4 |
                   (uint)(*(byte *)(param_1 + 0x11) & 0xf)) << 4 |
                  (uint)(*(byte *)(param_1 + 9) & 0xf)) << 2,
                  (((((param_1[7] & 0x1fU) << 5 | param_1[6] & 0x1fU) << 3 | param_1[5] & 7U) << 5 |
                   param_1[4] & 0x1fU) << 5 | param_1[3] & 0x1fU) << 6 |
                  -(uint)(param_1[0x1a] != 0) & 0x20 | -(uint)(param_1[0x12] != 0) & 0x10 |
                  -(uint)(param_1[10] != 0) & 8 | -(uint)(param_1[2] != 0) & 4 |
                  -(uint)(param_1[1] != 0) & 2 | (uint)(*param_1 != 0) | param_1[8] << 0x1d);
}

