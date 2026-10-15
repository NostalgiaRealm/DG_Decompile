/*
 * FUN_10037801 at 10037801
 * undefined8 __stdcall FUN_10037801(int * param_1)
 * Address ranges: 10037801-10037a91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10037801(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((((param_1[0x28] & 0xfU) << 4 | param_1[0x1e] & 0xfU) << 4 | param_1[0x14] & 0xfU) << 4 |
          param_1[10] & 0xfU) << 10 |
          -(uint)(param_1[0x21] != 0) & 0x200 | -(uint)(param_1[0x20] != 0) & 0x100 |
          -(uint)(param_1[0x17] != 0) & 0x80 | -(uint)(param_1[0x16] != 0) & 0x40 |
          -(uint)(param_1[0xd] != 0) & 0x20 | -(uint)(param_1[0xc] != 0) & 0x10 |
          -(uint)(param_1[3] != 0) & 8 | -(uint)(param_1[2] != 0) & 4;
  uVar3 = (((((param_1[0x1d] & 7U) << 5 | param_1[0x1c] & 0x1fU) << 5 | param_1[0x1b] & 0x1fU) << 3
           | param_1[0x1a] & 7U) << 5 | param_1[0x19] & 0x1fU) << 5 | param_1[0x18] & 0x1fU;
  uVar2 = uVar1 + uVar3;
  uVar4 = (((((param_1[9] & 7U) << 5 | param_1[8] & 0x1fU) << 5 | param_1[7] & 0x1fU) << 3 |
           param_1[6] & 7U) << 5 | param_1[5] & 0x1fU) << 5 | param_1[4] & 0x1fU;
  return CONCAT44(((((((param_1[0x13] & 7U) << 5 | param_1[0x12] & 0x1fU) << 5 |
                     param_1[0x11] & 0x1fU) << 3 | param_1[0x10] & 7U) << 5 | param_1[0xf] & 0x1fU)
                   << 5 | param_1[0xe] & 0x1fU) +
                  (((((uint)(param_1[1] != 0) * 2 | (uint)(*param_1 != 0)) << 0x10 |
                    (uint)(*(byte *)(param_1 + 0x29) & 0xf)) << 4 |
                   (uint)(*(byte *)(param_1 + 0x1f) & 0xf)) << 10 |
                  ((uint)(*(byte *)(param_1 + 0x15) & 0xf) << 4 |
                  (uint)(*(byte *)(param_1 + 0xb) & 0xf)) << 2) +
                  ((((((param_1[0x27] & 7U) << 5 | param_1[0x26] & 0x1fU) << 5 |
                     param_1[0x25] & 0x1fU) << 3 | param_1[0x24] & 7U) << 5 | param_1[0x23] & 0x1fU)
                   << 5 | param_1[0x22] & 0x1fU) + (uint)CARRY4(uVar1,uVar3) +
                  (uint)CARRY4(uVar2,uVar4),uVar2 + uVar4);
}

