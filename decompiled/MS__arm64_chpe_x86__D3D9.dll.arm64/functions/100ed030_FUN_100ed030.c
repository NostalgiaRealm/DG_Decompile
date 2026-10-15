/*
 * FUN_100ed030 at 100ed030
 * undefined FUN_100ed030(void)
 * Address ranges: 100ed030-100ed08f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ed030(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(ushort *)(param_1 + 0x30) != 0) {
    do {
      FUN_1003f5e0(*(undefined4 *)(param_1 + 0x38 + uVar1 * 4),0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_1 + 0x30));
  }
  *(undefined1 *)(param_1 + 0x32) = 0;
  return;
}

