/*
 * FUN_100362d9 at 100362d9
 * undefined __fastcall FUN_100362d9(int param_1)
 * Address ranges: 100362d9-10036301
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100362d9(int param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (DAT_1006c244 != 0) {
      DAT_1006c244 = DAT_1006c244 + -1;
    }
    if (DAT_1006c280 != 0) {
      DAT_1006c280 = DAT_1006c280 + -1;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}

