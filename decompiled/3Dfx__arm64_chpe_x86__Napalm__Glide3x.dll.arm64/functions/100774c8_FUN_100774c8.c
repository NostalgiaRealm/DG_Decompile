/*
 * FUN_100774c8 at 100774c8
 * undefined FUN_100774c8(void)
 * Address ranges: 100774c8-1007753b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100774c8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_2 + 0x1c + uVar2 * 0x24);
    if (iVar1 != 0) {
      FUN_1006fc10(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),iVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  FUN_100833b0(param_2,0x2d0);
  return;
}

