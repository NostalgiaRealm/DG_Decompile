/*
 * FUN_1004f170 at 1004f170
 * undefined __fastcall FUN_1004f170(int param_1)
 * Address ranges: 1004f170-1004f1a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004f170(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  *(undefined1 *)(param_1 + 0x7644) = 0;
  while (((*(uint *)(param_1 + 0x6e80 + uVar1 * 0x10) & 0x70000) == 0 &&
         (*(char *)(param_1 + 0x6e88 + uVar1 * 0x10) == '\0'))) {
    uVar1 = uVar1 + 1;
    if (7 < uVar1) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x7644) = 1;
  return;
}

