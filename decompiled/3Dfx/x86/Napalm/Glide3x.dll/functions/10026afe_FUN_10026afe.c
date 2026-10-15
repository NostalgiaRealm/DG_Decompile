/*
 * FUN_10026afe at 10026afe
 * undefined __fastcall FUN_10026afe(int param_1, uint param_2)
 * Address ranges: 10026afe-10026b28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10026afe(int param_1,uint param_2)

{
  if (((byte)param_2 & 0xf0) == 0x80) {
    FUN_1004dabf(param_1,*(uint *)(param_1 + 0x90 + (param_2 & 0xf) * 4));
    *(undefined4 *)(param_1 + 0x90 + (param_2 & 0xf) * 4) = 0;
  }
  return;
}

