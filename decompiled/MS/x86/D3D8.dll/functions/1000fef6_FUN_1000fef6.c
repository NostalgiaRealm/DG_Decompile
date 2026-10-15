/*
 * FUN_1000fef6 at 1000fef6
 * uint __thiscall FUN_1000fef6(void * this, int * param_1)
 * Address ranges: 1000fef6-1000ff6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000fef6(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 1;
  if ((((*(int *)(DAT_100ba2b4 + 0x7e0) != 2) && (*(int *)(DAT_100ba2b4 + 0x7e0) != 3)) ||
      ((*(uint *)((int)this + 0x54) & 0x202) != 0)) || (*(short *)((int)this + 0x30) != 1)) {
    iVar2 = 0;
  }
  iVar1 = *(int *)((int)this + 0x60);
  if (iVar1 == 0) {
    uVar3 = iVar2 << 2;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      return 1;
    }
    uVar3 = iVar2 << 2 | 2;
  }
  if ((uVar3 & 4) != 0) {
    iVar2 = FUN_1002546f(*(uint *)((int)this + 0x4c),*(uint *)((int)this + 0x50),1);
    *param_1 = iVar2;
  }
  return uVar3;
}

