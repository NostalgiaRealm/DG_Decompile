/*
 * FUN_1001416a at 1001416a
 * undefined __fastcall FUN_1001416a(int param_1)
 * Address ranges: 1001416a-100141a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001416a(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(char *)(param_1 + 0x1c1 + iVar1) != '\0') && (*(int *)(param_1 + 0x194 + iVar1) != 0)) {
      FUN_10014d8b(param_1 + 0x140 + iVar1);
    }
    iVar1 = iVar1 + 0x120;
  } while (iVar1 != 0x7e0);
  return;
}

