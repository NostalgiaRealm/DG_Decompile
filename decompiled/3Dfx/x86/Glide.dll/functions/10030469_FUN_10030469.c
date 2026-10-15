/*
 * FUN_10030469 at 10030469
 * undefined __fastcall FUN_10030469(int param_1, uint param_2)
 * Address ranges: 10030469-10030493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10030469(int param_1,uint param_2)

{
  if (((byte)param_2 & 0xf0) == 0x80) {
    FUN_10047f5e(param_1,*(uint *)(param_1 + 0x90 + (param_2 & 0xf) * 4));
    *(undefined4 *)(param_1 + 0x90 + (param_2 & 0xf) * 4) = 0;
  }
  return;
}

