/*
 * FUN_10096e70 at 10096e70
 * uint __thiscall FUN_10096e70(void * this, byte param_1, byte param_2)
 * Address ranges: 10096e70-10096ec1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10096e70(void *this,byte param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 3;
  if (((param_1 == 0) || (param_2 == 0)) && (*(int *)((int)this + 0x28) != 0)) {
    iVar1 = *(int *)(*(int *)((int)this + 0x28) + 4);
    iVar2 = *(int *)(*(int *)((int)this + 0x18) + 4);
    if (((*(int *)(iVar1 + 100) != *(int *)(iVar2 + 100)) ||
        (*(int *)(iVar1 + 0x68) != *(int *)(iVar2 + 0x68))) ||
       (*(int *)(iVar1 + 0x74) != *(int *)(iVar2 + 0x74))) {
      uVar3 = (uint)param_1 | (uint)param_2 * 2;
    }
  }
  return uVar3;
}

