/*
 * FUN_10015782 at 10015782
 * undefined __fastcall FUN_10015782(int param_1)
 * Address ranges: 10015782-100157bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10015782(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(char *)(param_1 + 0x1c1 + iVar1) != '\0') && (*(int *)(param_1 + 0x194 + iVar1) != 0)) {
      FUN_1001641c(param_1 + 0x140 + iVar1);
    }
    iVar1 = iVar1 + 0x120;
  } while (iVar1 != 0x7e0);
  return;
}

