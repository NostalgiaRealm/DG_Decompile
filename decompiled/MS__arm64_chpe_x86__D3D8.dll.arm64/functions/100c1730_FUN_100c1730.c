/*
 * FUN_100c1730 at 100c1730
 * undefined FUN_100c1730(void)
 * Address ranges: 100c1730-100c178f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c1730(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(ushort *)(param_1 + 0x30) != 0) {
    do {
      FUN_100357a0(*(undefined4 *)(param_1 + 0x38 + uVar1 * 4),0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_1 + 0x30));
  }
  *(undefined1 *)(param_1 + 0x32) = 0;
  return;
}

