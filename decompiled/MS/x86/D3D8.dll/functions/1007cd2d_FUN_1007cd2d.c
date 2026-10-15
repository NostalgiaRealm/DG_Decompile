/*
 * FUN_1007cd2d at 1007cd2d
 * int * __thiscall FUN_1007cd2d(void * this, int * param_1)
 * Address ranges: 1007cd2d-1007cd80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1007cd2d(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  *param_1 = (int)this + 0x44;
  param_1[1] = (int)this + 0x44;
  piVar1 = *(int **)((int)this + 0x5940);
  param_1[2] = 0;
  if (((uint)piVar1 & 1) != 0) {
    param_1 = piVar1;
    iVar3 = FUN_100809ad((void *)((int)this + 0x590c),(uint *)&param_1);
    if (iVar3 != 0) {
      *piVar2 = iVar3 + 4;
      piVar2[1] = iVar3 + 0xb4;
      piVar2[2] = *(int *)(iVar3 + 0x164);
    }
  }
  return piVar2;
}

