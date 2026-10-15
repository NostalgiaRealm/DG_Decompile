/*
 * FUN_1800fa780 at 1800fa780
 * undefined __fastcall FUN_1800fa780(uint * param_1)
 * Address ranges: 1800fa780-1800fa7bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fa780(uint *param_1)

{
  ushort in_FPUControlWord;
  
  *param_1 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    *param_1 = (uint)in_FPUControlWord;
  }
  return;
}

