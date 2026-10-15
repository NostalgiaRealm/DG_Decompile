/*
 * FUN_10020d59 at 10020d59
 * undefined __fastcall FUN_10020d59(int param_1)
 * Address ranges: 10020d59-10020d92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10020d59(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(char *)(param_1 + 0x1c1 + iVar1) != '\0') && (*(int *)(param_1 + 0x194 + iVar1) != 0)) {
      FUN_10021981(param_1 + 0x140 + iVar1);
    }
    iVar1 = iVar1 + 0x120;
  } while (iVar1 != 0x360);
  return;
}

