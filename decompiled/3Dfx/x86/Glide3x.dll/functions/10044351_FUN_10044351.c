/*
 * FUN_10044351 at 10044351
 * undefined __thiscall FUN_10044351(void * this, int param_1, int param_2, undefined4 param_3, int * param_4, int * param_5, int * param_6)
 * Address ranges: 10044351-100443d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10044351(void *this,int param_1,int param_2,undefined4 param_3,int *param_4,int *param_5,
            int *param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1 * 0x1510;
  iVar4 = iVar6 + 0x510;
  iVar5 = param_2 * 4 + iVar4;
  if (((*(int *)((int)this + iVar5 + 500) != *param_4) ||
      (*(int *)((int)this + param_2 * 4 + iVar6 + 0x744) != *param_5)) ||
     (*(int *)((int)this + param_2 * 4 + iVar6 + 0x784) != *param_6)) {
    *(int *)((int)this + iVar5 + 500) = *param_4;
    piVar1 = (int *)((int)this + (param_2 + 0x8d) * 4 + iVar4);
    *piVar1 = *param_5;
    piVar2 = (int *)((int)this + (param_2 + 0x9d) * 4 + iVar4);
    *piVar2 = *param_6;
    piVar3 = *(int **)((int)this + iVar6 + 0x514);
    (**(code **)(*piVar3 + 0x48))
              (piVar3,param_2,1,(int)this + (param_2 + 0x7d) * 4 + iVar4,piVar1,piVar2);
  }
  return;
}

