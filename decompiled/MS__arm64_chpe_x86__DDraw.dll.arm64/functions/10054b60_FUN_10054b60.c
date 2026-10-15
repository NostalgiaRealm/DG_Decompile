/*
 * FUN_10054b60 at 10054b60
 * undefined FUN_10054b60(void)
 * Address ranges: 10054b60-10054bab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10054b60(int param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (DAT_100c2948 != 0) {
      DAT_100c2948 = DAT_100c2948 + -1;
    }
    if (DAT_100c296c != 0) {
      DAT_100c296c = DAT_100c296c + -1;
    }
    *(char *)(param_1 + 0x10) = '\0';
  }
  return;
}

