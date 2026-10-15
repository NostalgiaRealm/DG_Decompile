/*
 * FUN_10029190 at 10029190
 * undefined __fastcall FUN_10029190(int param_1)
 * Address ranges: 10029190-100291c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10029190(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  *(undefined1 *)(param_1 + 0x1907) = 0;
  while (((*(uint *)(param_1 + 0xf20 + uVar1 * 0x10) & 0x30000) == 0 &&
         (*(char *)(param_1 + 0xf28 + uVar1 * 0x10) == '\0'))) {
    uVar1 = uVar1 + 1;
    if (7 < uVar1) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x1907) = 1;
  return;
}

