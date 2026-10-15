/*
 * FUN_100228c4 at 100228c4
 * undefined4 __thiscall FUN_100228c4(void * this, undefined4 param_1, int * param_2, int * param_3)
 * Address ranges: 100228c4-100229a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100228c4(void *this,undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_84 [31];
  HDC local_8;
  
  if (*(void **)((int)this + 0xbc) == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    if ((*param_2 == *(int *)(&DAT_1006c48c + *(int *)((int)this + 0xe4) * 0x228)) &&
       (*(int *)(&DAT_1006c48c + *(int *)((int)this + 0xe4) * 0x228) != 0)) {
      local_8 = (HDC)0x0;
      iVar1 = FUN_10032df8(*(void **)((int)this + 0xbc),&local_8);
      if (-1 < iVar1) {
        piVar2 = (int *)(**(code **)(**(int **)((int)this + 0xbc) + 0x38))();
        piVar4 = local_84;
        for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = *piVar2;
          piVar2 = piVar2 + 1;
          piVar4 = piVar4 + 1;
        }
        BitBlt(local_8,0,0,local_84[3],local_84[2],(HDC)*param_2,0,0,0xcc0020);
        FUN_10032e6e(*(void **)((int)this + 0xbc),(int)local_8);
      }
    }
    uVar3 = 0;
    if (((HDC)*param_2 == *(HDC *)(&DAT_1006c48c + (int)*(void **)((int)this + 0xe4) * 0x228)) &&
       (*(HDC *)(&DAT_1006c48c + (int)*(void **)((int)this + 0xe4) * 0x228) != (HDC)0x0)) {
      FUN_10002c4f(*(void **)((int)this + 0xe4),(HDC)*param_2,param_3);
      uVar3 = 1;
    }
    if (*param_3 == 1) {
      FUN_100036fd(*(int *)(&DAT_1006c488 + *(int *)((int)this + 0xe4) * 0x228));
    }
  }
  return uVar3;
}

