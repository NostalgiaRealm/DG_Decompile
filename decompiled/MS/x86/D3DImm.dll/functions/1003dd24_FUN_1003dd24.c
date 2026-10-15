/*
 * FUN_1003dd24 at 1003dd24
 * int __thiscall FUN_1003dd24(void * this, int * param_1, int * param_2)
 * Address ranges: 1003dd24-1003dd9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003dd24(void *this,int *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x38))();
  iVar4 = -0x7789fdb0;
  if (((*(uint *)(iVar3 + 0x68) & 0x2001) != 0) &&
     (((iVar4 = -0x7789fd15, *(char *)(*(int *)((int)this + 0xa58) + 0x20) != '\0' ||
       ((*(uint *)(iVar3 + 0x68) & 0x4000) != 0)) && (iVar4 = 0, param_2 != (int *)0x0)))) {
    iVar3 = (**(code **)(*param_2 + 0x38))();
    cVar1 = *(char *)(*(int *)((int)this + 0xa58) + 0x20);
    if (cVar1 == '\0') {
      uVar2 = *(uint *)(iVar3 + 0x68) & 0x4000;
    }
    else {
      uVar2 = *(uint *)(iVar3 + 0x68) & 0x800;
    }
    if (uVar2 == 0) {
      iVar4 = (cVar1 == '\0') + 0x887602e9;
    }
  }
  return iVar4;
}

