/*
 * FUN_100300df at 100300df
 * undefined __fastcall FUN_100300df(int param_1, uint param_2)
 * Address ranges: 100300df-10030109
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100300df(int param_1,uint param_2)

{
  if (((byte)param_2 & 0xf0) == 0x80) {
    FUN_10047bce(param_1,*(uint *)(param_1 + 0x90 + (param_2 & 0xf) * 4));
    *(undefined4 *)(param_1 + 0x90 + (param_2 & 0xf) * 4) = 0;
  }
  return;
}

