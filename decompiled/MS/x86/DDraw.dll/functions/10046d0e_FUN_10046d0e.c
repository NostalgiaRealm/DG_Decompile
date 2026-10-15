/*
 * FUN_10046d0e at 10046d0e
 * undefined __thiscall FUN_10046d0e(void * this, int param_1, undefined4 param_2, undefined4 param_3, int * param_4, int * param_5, int * param_6)
 * Address ranges: 10046d0e-10046d8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10046d0e(void *this,int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
            int *param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x1510;
  if (((*(int *)((int)this + iVar4 + 0x704) != *param_4) ||
      (*(int *)(iVar4 + 0x744 + (int)this) != *param_5)) ||
     (*(int *)(iVar4 + 0x784 + (int)this) != *param_6)) {
    *(int *)((int)this + iVar4 + 0x704) = *param_4;
    piVar3 = (int *)(iVar4 + 0x744 + (int)this);
    piVar2 = (int *)(iVar4 + 0x784 + (int)this);
    *piVar3 = *param_5;
    *piVar2 = *param_6;
    piVar1 = *(int **)(iVar4 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x48))(piVar1,0,1,iVar4 + 0x704 + (int)this,piVar3,piVar2);
  }
  return;
}

