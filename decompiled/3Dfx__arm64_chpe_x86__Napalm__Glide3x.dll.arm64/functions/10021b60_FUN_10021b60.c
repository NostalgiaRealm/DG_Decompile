/*
 * FUN_10021b60 at 10021b60
 * undefined FUN_10021b60(void)
 * Address ranges: 10021b60-10021bdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021b60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x9a0);
  if (iVar1 != 0) {
    FUN_10061340(iVar1);
    FUN_100833b0(iVar1,0x78);
  }
  FUN_1001f318(param_1);
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1f8 + uVar2 * 0x120) != 0) {
      FUN_10032be0(param_1 + uVar2 * 0x120 + 0x140);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  return;
}

