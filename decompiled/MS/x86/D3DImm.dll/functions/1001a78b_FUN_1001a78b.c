/*
 * FUN_1001a78b at 1001a78b
 * undefined4 * __thiscall FUN_1001a78b(void * this, undefined4 * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 1001a78b-1001a843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001a78b(void *this,undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  LPVOID local_18;
  int local_14;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  if ((param_2 & 0x100) == 0) {
    FUN_10019cac(&local_18,0x100);
    uVar5 = 0x10040;
    if (0xafff < *(int *)(iVar1 * 0x1510 + iVar2 + 0x520)) {
      uVar5 = 0x10050;
    }
    cVar4 = FUN_1003c0da((int)this + 0x18,param_2,param_3,uVar5,(int *)&local_18,
                         *(char *)((int)this + 0x120),(undefined4 *)0x0);
    if (cVar4 != '\0') {
      piVar3 = *(int **)(*(int *)((int)this + 8) * 0x1510 + 0x510 + *(int *)((int)this + 4));
      (**(code **)(*piVar3 + 0x30))(piVar3,local_18,local_14 - (int)local_18,0,param_1);
    }
    thunk_FUN_1005c76c(local_18);
  }
  return param_1;
}

