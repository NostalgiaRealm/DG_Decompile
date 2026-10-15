/*
 * FUN_100417d0 at 100417d0
 * undefined __fastcall FUN_100417d0(int param_1)
 * Address ranges: 100417d0-10041809
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100417d0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  *(undefined1 *)(param_1 + 0x5957) = 0;
  while (((*(uint *)(param_1 + 0x5210 + uVar1 * 0x10) & 0x30000) == 0 &&
         (*(char *)(param_1 + 0x5218 + uVar1 * 0x10) == '\0'))) {
    uVar1 = uVar1 + 1;
    if (7 < uVar1) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x5957) = 1;
  return;
}

