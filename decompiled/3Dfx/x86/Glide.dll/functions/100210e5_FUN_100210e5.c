/*
 * FUN_100210e5 at 100210e5
 * undefined __fastcall FUN_100210e5(int param_1)
 * Address ranges: 100210e5-1002111e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100210e5(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(char *)(param_1 + 0x1c1 + iVar1) != '\0') && (*(int *)(param_1 + 0x194 + iVar1) != 0)) {
      FUN_10021d0d(param_1 + 0x140 + iVar1);
    }
    iVar1 = iVar1 + 0x120;
  } while (iVar1 != 0x360);
  return;
}

