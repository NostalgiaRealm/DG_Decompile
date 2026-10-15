/*
 * FUN_100541ff at 100541ff
 * undefined __thiscall FUN_100541ff(void * this, int * param_1)
 * Address ranges: 100541ff-10054292
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100541ff(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *this_00;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x14);
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    iVar2 = *(int *)((int)this + 0xc);
    this_00 = *(int **)(iVar1 * 0x18 + 0x10 + iVar2);
    uVar4 = this_00[1];
    while (uVar4 != 0) {
      iVar3 = uVar4 * 0x74;
      uVar4 = uVar4 - 1;
      if (*(int *)(*this_00 + -0x4c + iVar3) == *param_1) {
        FUN_10055793(*(void **)this,*(uint *)(*this_00 + -4 + iVar3),FUN_10053f7f,'\x01');
        FUN_100546fb(this_00,uVar4);
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
      }
    }
    if (this_00[1] == 0) {
      FUN_10054377((void *)((int)this + 0xc),(uint *)(iVar2 + 8 + iVar1 * 0x18));
    }
  }
  return;
}

