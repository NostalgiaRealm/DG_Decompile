/*
 * FUN_10025a87 at 10025a87
 * int __thiscall FUN_10025a87(void * this, int param_1, int * param_2, undefined4 param_3)
 * Address ranges: 10025a87-10025af9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10025a87(void *this,int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_2;
  iVar2 = -0x7ff8ffa9;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    param_2 = (int *)0x0;
    iVar2 = FUN_1002771a((void *)((int)this + 0x44),param_1,piVar1,(int *)&param_2);
    if (iVar2 == -0x7fffbffe) {
      FUN_10022705();
      if (DAT_1006c238 != (int *)0x0) {
        iVar2 = (**(code **)(*DAT_1006c238 + 8))
                          (this,&DAT_1006c2b0 + *(int *)((int)this + 0x11c) * 0x8a,param_1,piVar1,
                           param_3);
      }
    }
  }
  return iVar2;
}

