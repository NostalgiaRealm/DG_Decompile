/*
 * FUN_1002fae1 at 1002fae1
 * int __fastcall FUN_1002fae1(int param_1)
 * Address ranges: 1002fae1-1002fb12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1002fae1(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1b8);
  iVar2 = 1;
  if ((uVar1 & 0x200) == 0) {
    if ((uVar1 & 0x1008) == 0x1008) {
      iVar2 = *(int *)(param_1 + 0x168);
    }
  }
  else if ((uVar1 & 0x18) != 0) {
    return *(int *)(param_1 + 0x164) + 1;
  }
  return iVar2;
}

