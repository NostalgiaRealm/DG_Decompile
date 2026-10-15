/*
 * FUN_1003ffc5 at 1003ffc5
 * int * __thiscall FUN_1003ffc5(void * this, int * param_1, int param_2, uint param_3, undefined4 param_4, int param_5, undefined4 * param_6, int param_7)
 * Address ranges: 1003ffc5-10040120
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_1003ffc5(void *this,int *param_1,int param_2,uint param_3,undefined4 param_4,int param_5,
            undefined4 *param_6,int param_7)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 *local_14;
  int local_10;
  
  FUN_100ada8e(param_1,0,0x58);
  FUN_1002d6f1(&local_14,0x100);
  bVar4 = *(int *)(*(int *)((int)this + 8) * 0x16c0 + 0x6c4 + param_2) == 0x1002;
  if ((param_3 & 0x100) == 0) {
    cVar1 = FUN_1005cfde((void *)((int)this + 0x34),*(undefined4 *)((int)this + 0x24),param_3,
                         param_4,param_5,param_6,param_7,0,0x10051,(int *)&local_14,param_1 + 1,0,
                         *(undefined1 *)((int)this + 0x29),bVar4);
    puVar3 = local_14;
    if (cVar1 != '\0') {
      piVar2 = FUN_100a3a3a(local_10 - (int)local_14,local_14);
      *param_1 = (int)piVar2;
    }
    goto LAB_10040111;
  }
  cVar1 = FUN_10055305(param_3,param_4,param_6,param_7,0x10051,(int *)&local_14);
  puVar3 = local_14;
  if (cVar1 == '\0') goto LAB_10040111;
  piVar2 = FUN_100a3a3a(local_10 - (int)local_14,local_14);
  *param_1 = (int)piVar2;
  if (piVar2 == (int *)0x0) goto LAB_10040111;
  FUN_1002d6f1(&local_14,0x100);
  cVar1 = FUN_10055548(param_3,param_4,param_6,*(undefined4 *)((int)this + 0x24),param_7,param_5,
                       extraout_ECX,0x20051,(int *)&local_14,param_1 + 0xc,extraout_ECX,
                       *(undefined1 *)((int)this + 0x29),bVar4);
  if (cVar1 == '\0') {
    piVar2 = (int *)*param_1;
LAB_100400b0:
    (**(code **)(*piVar2 + 8))(piVar2);
    *param_1 = 0;
  }
  else {
    piVar2 = FUN_100a3a3a(local_10 - (int)local_14,local_14);
    param_1[0xb] = (int)piVar2;
    if (*param_1 == 0) {
      piVar2 = (int *)0x0;
      goto LAB_100400b0;
    }
  }
  thunk_FUN_100ad48c(local_14);
LAB_10040111:
  thunk_FUN_100ad48c(puVar3);
  return param_1;
}

