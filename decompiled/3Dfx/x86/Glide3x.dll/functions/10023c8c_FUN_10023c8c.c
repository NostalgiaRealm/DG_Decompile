/*
 * FUN_10023c8c at 10023c8c
 * undefined __fastcall FUN_10023c8c(int param_1, uint param_2)
 * Address ranges: 10023c8c-10023cb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10023c8c(int param_1,uint param_2)

{
  if (((byte)param_2 & 0xf0) == 0x80) {
    FUN_1004a6b6(param_1,*(uint *)(param_1 + 0x90 + (param_2 & 0xf) * 4));
    *(undefined4 *)(param_1 + 0x90 + (param_2 & 0xf) * 4) = 0;
  }
  return;
}

