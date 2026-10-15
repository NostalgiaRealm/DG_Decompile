/*
 * FUN_1009ee9f at 1009ee9f
 * undefined __fastcall FUN_1009ee9f(int param_1)
 * Address ranges: 1009ee9f-1009eec7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009ee9f(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(short *)(param_1 + 0x30) != 0) {
    do {
      FUN_1002d0eb(*(void **)(param_1 + 0x38 + uVar1 * 4),0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_1 + 0x30));
  }
  *(undefined1 *)(param_1 + 0x32) = 0;
  return;
}

