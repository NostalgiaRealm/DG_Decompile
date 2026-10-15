/*
 * FUN_10083133 at 10083133
 * int __thiscall FUN_10083133(void * this, int * param_1, int param_2, int param_3)
 * Address ranges: 10083133-1008319d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10083133(void *this,int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_18 [5];
  
  iVar3 = -0x7fffbffb;
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1,local_18,0);
  if (-1 < iVar2) {
    iVar2 = *(int *)((int)this + 0x2c);
    if ((((local_18[0] == 4) && (cVar1 = FUN_1003a4d0(*(int *)((int)this + 0x34)), cVar1 == '\0'))
        && (*(int *)(*(int *)((int)this + 0x44) + 0x12e8) == 0)) &&
       (cVar1 = FUN_100c18c8(*(void **)(*(int *)((int)this + 0x40) + 0x172c0)), cVar1 != '\0')) {
      return iVar2 * param_3 + param_2;
    }
    iVar3 = -1;
  }
  return iVar3;
}

