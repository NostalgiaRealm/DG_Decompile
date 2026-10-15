/*
 * FUN_100b623d at 100b623d
 * undefined8 __stdcall FUN_100b623d(int * param_1)
 * Address ranges: 100b623d-100b6430
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100b623d(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (((((param_1[0x18] & 7U) << 5 | param_1[0x17] & 0x1fU) << 5 | param_1[0x16] & 0x1fU) << 3
           | param_1[0x15] & 7U) << 5 | param_1[0x14] & 0x1fU) << 5 | param_1[0x13] & 0x1fU;
  uVar2 = (((((param_1[8] & 7U) << 5 | param_1[7] & 0x1fU) << 5 | param_1[6] & 0x1fU) << 3 |
           param_1[5] & 7U) << 5 | param_1[4] & 0x1fU) << 5 | param_1[3] & 0x1fU;
  uVar4 = uVar1 + uVar2;
  uVar3 = -(uint)(param_1[0x1a] != 0) & 0x20 | -(uint)(param_1[0x12] != 0) & 0x10 |
          -(uint)(param_1[10] != 0) & 8 | -(uint)(param_1[2] != 0) & 4 |
          -(uint)(param_1[1] != 0) & 2 | (uint)(*param_1 != 0);
  return CONCAT44(((((((param_1[0x20] & 7U) << 5 | param_1[0x1f] & 0x1fU) << 5 |
                     param_1[0x1e] & 0x1fU) << 3 | param_1[0x1d] & 7U) << 5 | param_1[0x1c] & 0x1fU)
                   << 5 | param_1[0x1b] & 0x1fU) +
                  ((((((param_1[0x10] & 7U) << 5 | param_1[0xf] & 0x1fU) << 5 | param_1[0xe] & 0x1fU
                     ) << 3 | param_1[0xd] & 7U) << 5 | param_1[0xc] & 0x1fU) << 5 |
                  param_1[0xb] & 0x1fU) + (uint)CARRY4(uVar1,uVar2) +
                  ((((uint)(*(byte *)(param_1 + 0x21) & 0xf) << 4 |
                    (uint)(*(byte *)(param_1 + 0x19) & 0xf)) << 4 |
                   (uint)(*(byte *)(param_1 + 0x11) & 0xf)) << 4 |
                  (uint)(*(byte *)(param_1 + 9) & 0xf)) * 4 + (uint)CARRY4(uVar4,uVar3),
                  uVar4 + uVar3);
}

