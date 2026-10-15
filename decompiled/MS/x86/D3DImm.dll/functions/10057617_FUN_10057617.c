/*
 * FUN_10057617 at 10057617
 * undefined __fastcall FUN_10057617(uint param_1, byte param_2)
 * Address ranges: 10057617-1005766d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10057617(uint param_1,byte param_2)

{
  FUN_10057f7b(param_1 >> 8 & 0x3f,
               (('\x01' << ((byte)(param_1 >> 0x14) & 7)) - 1U & param_2) <<
               ((byte)(param_1 >> 0x12) & 3),param_1 >> 0x10 & 3,~(param_1 >> 0x1b) & 4,param_1,
               -(uint)((param_1 & 0x40000000) != 0) & 3);
  return;
}

