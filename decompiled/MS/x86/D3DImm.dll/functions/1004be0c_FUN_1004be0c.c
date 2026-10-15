/*
 * FUN_1004be0c at 1004be0c
 * int __thiscall FUN_1004be0c(void * this, int param_1, int * param_2, int * param_3)
 * Address ranges: 1004be0c-1004be8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004be0c(void *this,int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = FUN_10042a6d(this,param_1);
  iVar4 = -0x7fffbffe;
  if (iVar2 != 0) {
    iVar4 = 0;
    FUN_1003d453(this);
    piVar3 = (int *)(iVar2 + 0x18);
    if (*piVar3 == 0) {
      iVar4 = FUN_1004b913((void *)(-(uint)(this != (void *)0x0) & (int)this - 0x20U),param_1,piVar3
                          );
    }
    *(undefined4 *)this = 0;
    piVar1 = *(int **)(iVar2 + 0x10);
    iVar2 = *piVar1;
    if (-1 < iVar4) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      iVar2 = iVar2 + 1;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = *piVar3;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
  }
  return iVar4;
}

