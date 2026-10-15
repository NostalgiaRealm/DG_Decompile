/*
 * FUN_1004a79f at 1004a79f
 * int __thiscall FUN_1004a79f(void * this, int param_1, undefined4 * param_2, int * param_3, int param_4)
 * Address ranges: 1004a79f-1004a82a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004a79f(void *this,int param_1,undefined4 *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_10042a6d(this,param_1);
  iVar4 = -0x7fffbffe;
  if (iVar2 != 0) {
    iVar4 = 0;
    FUN_1003d453(this);
    if (*(int *)(iVar2 + 0x18) == 0) {
      if (param_4 != 0) {
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_4 + 0x10);
      }
      iVar4 = FUN_10048966((void *)(-(uint)(this != (void *)0x0) & (int)this - 4U),param_1,
                           (undefined4 *)(iVar2 + 0x18));
    }
    *(undefined4 *)this = 0;
    piVar1 = *(int **)(iVar2 + 0x10);
    iVar3 = *piVar1;
    if (-1 < iVar4) {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      iVar3 = iVar3 + 1;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(iVar2 + 0x18);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar3;
    }
  }
  return iVar4;
}

