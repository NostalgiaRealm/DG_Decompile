/*
 * FUN_1004859c at 1004859c
 * undefined __fastcall FUN_1004859c(uint param_1, byte param_2)
 * Address ranges: 1004859c-100485f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004859c(uint param_1,byte param_2)

{
  FUN_10048cf2(param_1 >> 8 & 0x3f,
               (('\x01' << ((byte)(param_1 >> 0x14) & 7)) - 1U & param_2) <<
               ((byte)(param_1 >> 0x12) & 3),param_1 >> 0x10 & 3,~(param_1 >> 0x1b) & 4,param_1,
               -(uint)((param_1 & 0x40000000) != 0) & 3);
  return;
}

