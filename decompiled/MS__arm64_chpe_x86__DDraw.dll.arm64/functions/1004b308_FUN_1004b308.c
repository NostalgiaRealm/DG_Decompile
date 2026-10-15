/*
 * FUN_1004b308 at 1004b308
 * undefined FUN_1004b308(void)
 * Address ranges: 1004b308-1004b34f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004b308(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1b8);
  iVar2 = 1;
  if ((uVar1 >> 9 & 1) == 0) {
    if (((uVar1 ^ 0xffffffff) & 0x1008) == 0) {
      iVar2 = *(int *)(param_1 + 0x168);
    }
  }
  else if ((uVar1 & 0x18) != 0) {
    iVar2 = *(int *)(param_1 + 0x164) + 1;
  }
  return iVar2;
}

