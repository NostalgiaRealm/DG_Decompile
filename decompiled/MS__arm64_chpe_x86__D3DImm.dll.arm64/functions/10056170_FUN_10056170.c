/*
 * FUN_10056170 at 10056170
 * undefined FUN_10056170(void)
 * Address ranges: 10056170-100561e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10056170(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  uVar2 = *(uint *)(iVar1 + 100);
  if ((*(uint *)(param_2 + 4) < uVar2) &&
     (*(int *)(param_2 + 0xc) + *(uint *)(param_2 + 4) <= uVar2)) {
    uVar2 = *(uint *)(iVar1 + 0x68);
    if (*(uint *)(param_2 + 8) < uVar2) {
      bVar3 = *(int *)(param_2 + 0x10) + *(uint *)(param_2 + 8) <= uVar2;
    }
  }
  return bVar3;
}

