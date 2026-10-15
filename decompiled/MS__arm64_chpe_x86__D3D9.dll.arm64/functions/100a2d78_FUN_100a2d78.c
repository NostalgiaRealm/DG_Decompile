/*
 * FUN_100a2d78 at 100a2d78
 * undefined FUN_100a2d78(void)
 * Address ranges: 100a2d78-100a2ddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a2d78(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_101325d0(param_1,0,0x254);
  uVar2 = 0;
  do {
    *(undefined1 *)(param_1 + 0x14 + uVar2 * 8) = 0xff;
    iVar1 = uVar2 * 8;
    uVar2 = uVar2 + 1;
    *(undefined1 *)(param_1 + 0x19 + iVar1) = 0xff;
  } while (uVar2 < 0x40);
  *(undefined4 *)(param_1 + 4) = 4;
  return;
}

