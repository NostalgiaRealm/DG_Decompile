/*
 * FUN_100823af at 100823af
 * undefined __fastcall FUN_100823af(int param_1)
 * Address ranges: 100823af-100823d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100823af(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(short *)(param_1 + 0x30) != 0) {
    do {
      FUN_10025a89(*(void **)(param_1 + 0x38 + uVar1 * 4),0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_1 + 0x30));
  }
  *(undefined1 *)(param_1 + 0x32) = 0;
  return;
}

