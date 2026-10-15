/*
 * FUN_1800ac71c at 1800ac71c
 * uint __fastcall FUN_1800ac71c(longlong param_1, uint param_2, byte param_3)
 * Address ranges: 1800ac71c-1800ac754
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800ac71c(longlong param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_2 >> (param_3 & 0x1f) != 0) {
    uVar1 = param_2 >> (param_3 & 0x1f);
  }
  if ((&DAT_1800fe9f8)[*(uint *)(param_1 + 0x2c)] != '\0') {
    uVar1 = (uVar1 - 1) + (uint)(byte)(&DAT_1800fead8)[*(uint *)(param_1 + 0x2c)] &
            -(uint)(byte)(&DAT_1800fead8)[*(uint *)(param_1 + 0x2c)];
  }
  return uVar1;
}

