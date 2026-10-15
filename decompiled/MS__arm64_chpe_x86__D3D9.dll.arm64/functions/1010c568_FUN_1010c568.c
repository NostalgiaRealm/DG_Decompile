/*
 * FUN_1010c568 at 1010c568
 * undefined FUN_1010c568(void)
 * Address ranges: 1010c568-1010c5db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010c568(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_2 + 0x1c + uVar2 * 0x24);
    if (iVar1 != 0) {
      FUN_10109700(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),iVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  FUN_10132260(param_2,0x2d0);
  return;
}

