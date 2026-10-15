/*
 * FUN_1002771a at 1002771a
 * int __thiscall FUN_1002771a(void * this, int param_1, int * param_2, int * param_3)
 * Address ranges: 1002771a-10027799
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002771a(void *this,int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = FUN_1002356c(this,param_1);
  iVar4 = -0x7fffbffe;
  if (iVar2 != 0) {
    iVar4 = 0;
    FUN_10022ecc(this);
    piVar3 = (int *)(iVar2 + 0x18);
    if (*piVar3 == 0) {
      iVar4 = FUN_100246d5((void *)(-(uint)(this != (void *)0x0) & (int)this - 0x44U),param_1,piVar3
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

