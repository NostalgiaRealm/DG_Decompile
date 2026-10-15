/*
 * FUN_100dad10 at 100dad10
 * undefined FUN_100dad10(void)
 * Address ranges: 100dad10-100dad9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100dad10(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 3;
  if ((((param_2 & 1) == 0) || ((param_3 & 1) == 0)) && (*(int *)(param_1 + 0x28) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 4);
    iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    if (((*(int *)(iVar1 + 100) != *(int *)(iVar2 + 100)) ||
        (*(int *)(iVar1 + 0x68) != *(int *)(iVar2 + 0x68))) ||
       (*(int *)(iVar1 + 0x74) != *(int *)(iVar2 + 0x74))) {
      uVar3 = param_2 & 0xff | (param_3 & 0xff) << 1;
    }
  }
  return uVar3;
}

