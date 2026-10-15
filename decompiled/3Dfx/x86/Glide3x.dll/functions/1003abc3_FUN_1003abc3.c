/*
 * FUN_1003abc3 at 1003abc3
 * undefined __thiscall FUN_1003abc3(void * this, int * param_1)
 * Address ranges: 1003abc3-1003ac78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003abc3(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)((int)this + 0x14);
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    iVar2 = *(int *)((int)this + 0xc);
    this_00 = *(int **)(iVar1 * 0x18 + 0x10 + iVar2);
    for (iVar6 = this_00[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
      iVar3 = *this_00;
      iVar4 = *param_1;
      iVar5 = iVar6 * 0x74;
      if ((((*(int *)(iVar3 + -0x70 + iVar5) == iVar4) || (*(int *)(iVar3 + -0x6c + iVar5) == iVar4)
           ) || (*(int *)(iVar3 + -0x68 + iVar5) == iVar4)) ||
         ((*(int *)(iVar3 + -100 + iVar5) == iVar4 || (*(int *)(iVar3 + -0x60 + iVar5) == iVar4))))
      {
        FUN_1003bf7d(*(void **)this,*(uint *)(iVar3 + -4 + iVar5),FUN_1003abb5,'\x01');
        FUN_1003b3bb(this_00,iVar6 - 1);
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
      }
    }
    if (this_00[1] == 0) {
      FUN_1003afad((void *)((int)this + 0xc),(uint *)(iVar2 + 8 + iVar1 * 0x18));
    }
  }
  return;
}

