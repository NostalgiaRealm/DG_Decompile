/*
 * FUN_1004de33 at 1004de33
 * int * __thiscall FUN_1004de33(void * this, int * param_1, int param_2, uint param_3, undefined4 param_4, int param_5, undefined4 * param_6, int param_7, undefined4 param_8)
 * Address ranges: 1004de33-1004df9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_1004de33(void *this,int *param_1,int param_2,uint param_3,undefined4 param_4,int param_5,
            undefined4 *param_6,int param_7,undefined4 param_8)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 *local_14;
  int local_10;
  
  FUN_100cfed0(param_1,0,0x58);
  FUN_10036e19(&local_14,0x100);
  bVar4 = *(int *)(*(int *)((int)this + 8) * 0x16c0 + 0x6c4 + param_2) == 0x1002;
  if ((param_3 & 0x100) == 0) {
    cVar1 = FUN_10072c95((void *)((int)this + 0x88),*(undefined4 *)((int)this + 0x24),param_3,
                         param_4,param_5,param_6,param_7,param_8,0x10051,(int *)&local_14,
                         param_1 + 1,0,*(undefined1 *)((int)this + 0x29),bVar4);
    puVar3 = local_14;
    if (cVar1 != '\0') {
      piVar2 = FUN_100c630f(local_10 - (int)local_14,local_14);
      *param_1 = (int)piVar2;
    }
    goto LAB_1004df8d;
  }
  cVar1 = FUN_10067f77(param_3,param_4,param_6,param_7,0x10051,(int *)&local_14);
  puVar3 = local_14;
  if (cVar1 == '\0') goto LAB_1004df8d;
  piVar2 = FUN_100c630f(local_10 - (int)local_14,local_14);
  *param_1 = (int)piVar2;
  if (piVar2 == (int *)0x0) goto LAB_1004df8d;
  FUN_10036e19(&local_14,0x100);
  cVar1 = FUN_100681c0(param_3,param_4,param_6,*(undefined4 *)((int)this + 0x24),param_7,param_5,
                       param_8,0x20051,(int *)&local_14,param_1 + 0xc,extraout_ECX,
                       *(undefined1 *)((int)this + 0x29),bVar4);
  if (cVar1 == '\0') {
    piVar2 = (int *)*param_1;
LAB_1004df2b:
    (**(code **)(*piVar2 + 8))(piVar2);
    *param_1 = 0;
  }
  else {
    piVar2 = FUN_100c630f(local_10 - (int)local_14,local_14);
    param_1[0xb] = (int)piVar2;
    if (*param_1 == 0) {
      piVar2 = (int *)0x0;
      goto LAB_1004df2b;
    }
  }
  thunk_FUN_100cfd6c(local_14);
LAB_1004df8d:
  thunk_FUN_100cfd6c(puVar3);
  return param_1;
}

