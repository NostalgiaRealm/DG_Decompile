/*
 * FUN_100971a9 at 100971a9
 * undefined __fastcall FUN_100971a9(int param_1)
 * Address ranges: 100971a9-100971df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100971a9(int param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xc2ef) != '\0') {
    bVar1 = *(int *)(param_1 + 0x18) != 0;
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x3c))(param_1 + 0x2c);
    }
    *(bool *)(param_1 + 0xc2ea) = bVar1;
    *(undefined1 *)(param_1 + 0xc2ef) = 0;
  }
  return;
}

