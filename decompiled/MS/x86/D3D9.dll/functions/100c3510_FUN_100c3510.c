/*
 * FUN_100c3510 at 100c3510
 * undefined __fastcall FUN_100c3510(uint param_1, byte param_2)
 * Address ranges: 100c3510-100c3566
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c3510(uint param_1,byte param_2)

{
  FUN_100c3f98(param_1 >> 8 & 0x3f,
               (('\x01' << ((byte)(param_1 >> 0x14) & 7)) - 1U & param_2) <<
               ((byte)(param_1 >> 0x12) & 3),param_1 >> 0x10 & 3,~(param_1 >> 0x1b) & 4,param_1,
               -(uint)((param_1 & 0x40000000) != 0) & 3);
  return;
}

