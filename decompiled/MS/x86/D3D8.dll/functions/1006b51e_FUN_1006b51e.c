/*
 * FUN_1006b51e at 1006b51e
 * char __thiscall FUN_1006b51e(void * this, int * param_1, int * param_2, int param_3, int param_4, int param_5, int * param_6, int * param_7, uint param_8, uint param_9, int param_10)
 * Address ranges: 1006b51e-1006b61d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_1006b51e(void *this,int *param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6,
            int *param_7,uint param_8,uint param_9,int param_10)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  int local_8;
  
  if (param_6 == (int *)0x0) {
    local_8 = 0;
    if (param_7 != (int *)0x0) {
      local_8 = *param_7;
    }
  }
  else {
    local_8 = *param_6;
  }
  if ((*(int *)(param_3 + 0x24) != 1) || (*(int *)(param_3 + 0x28) != 0)) {
    piVar1 = param_1;
    if (param_2 != (int *)0x0) {
      piVar1 = param_2;
    }
    puVar2 = FUN_1006b471(this,piVar1,param_3,(uint *)param_3,local_8);
    *(uint **)((int)this + 0x10) = puVar2;
    if (puVar2 == (uint *)0x0) {
      return '\0';
    }
  }
  *(undefined4 *)(param_3 + 0x24) = 1;
  *(int *)(param_3 + 0x28) = 0;
  puVar2 = FUN_1006b471(this,param_1,param_3,(uint *)param_3,local_8);
  cVar4 = '\0';
  *(uint **)((int)this + 0xc) = puVar2;
  if (puVar2 == (uint *)0x0) {
LAB_1006b5d6:
    if (*(int *)((int)this + 0x10) == 0) goto LAB_1006b602;
    FUN_1006b4f2(this,*(int **)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  else {
    uVar3 = FUN_1006b1d2(this,param_4,param_5,(int)param_6,(int)param_7,param_8,param_9,param_10);
    cVar4 = (char)uVar3;
    if (cVar4 == '\0') {
      FUN_1006b4f2(this,*(int **)((int)this + 0xc));
      *(undefined4 *)((int)this + 0xc) = 0;
      goto LAB_1006b5d6;
    }
  }
  if (*(int *)((int)this + 0x10) != 0) {
    *(int *)((int)this + 0x10) =
         *(int *)((int)this + 0x10) + *(int *)(*(int *)((int)this + 4) * 0x28 + 0x30 + *(int *)this)
    ;
    return cVar4;
  }
LAB_1006b602:
  if (*(int *)((int)this + 0xc) != 0) {
    *(int *)((int)this + 0xc) =
         *(int *)((int)this + 0xc) + *(int *)(*(int *)((int)this + 4) * 0x28 + 0x30 + *(int *)this);
  }
  return cVar4;
}

