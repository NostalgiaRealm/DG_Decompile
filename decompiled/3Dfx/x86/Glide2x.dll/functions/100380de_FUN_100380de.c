/*
 * FUN_100380de at 100380de
 * undefined __thiscall FUN_100380de(void * this, int * param_1)
 * Address ranges: 100380de-10038193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100380de(void *this,int *param_1)

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
        FUN_10039498(*(void **)this,*(uint *)(iVar3 + -4 + iVar5),FUN_100380d0,'\x01');
        FUN_100388d6(this_00,iVar6 - 1);
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
      }
    }
    if (this_00[1] == 0) {
      FUN_100384c8((void *)((int)this + 0xc),(uint *)(iVar2 + 8 + iVar1 * 0x18));
    }
  }
  return;
}

