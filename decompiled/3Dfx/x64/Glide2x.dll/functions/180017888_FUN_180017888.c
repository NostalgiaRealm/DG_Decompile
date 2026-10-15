/*
 * FUN_180017888 at 180017888
 * uint __fastcall FUN_180017888(int param_1, int param_2)
 * Address ranges: 180017888-1800178d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180017888(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(&DAT_180062c20 + (longlong)param_1 * 4);
  uVar3 = uVar1 >> ((&DAT_180062c14)[param_2] & 0x1f);
  if (uVar1 >> ((&DAT_180062c14)[param_2] & 0x1f) == 0) {
    uVar3 = 1;
  }
  if (((param_2 == 4) || (param_2 == 5)) || (uVar2 = uVar1, param_2 == 6)) {
    uVar2 = uVar3;
    uVar3 = uVar1;
  }
  return uVar2 << 0x10 | uVar3;
}

