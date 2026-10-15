/*
 * FUN_10081411 at 10081411
 * char __thiscall FUN_10081411(void * this, int * param_1, int * param_2, int param_3, int param_4, int param_5, int * param_6, int * param_7, uint param_8, uint param_9, int param_10)
 * Address ranges: 10081411-10081510
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_10081411(void *this,int *param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6,
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
    puVar2 = FUN_10081364(this,piVar1,param_3,(uint *)param_3,local_8);
    *(uint **)((int)this + 0x10) = puVar2;
    if (puVar2 == (uint *)0x0) {
      return '\0';
    }
  }
  *(undefined4 *)(param_3 + 0x24) = 1;
  *(int *)(param_3 + 0x28) = 0;
  puVar2 = FUN_10081364(this,param_1,param_3,(uint *)param_3,local_8);
  cVar4 = '\0';
  *(uint **)((int)this + 0xc) = puVar2;
  if (puVar2 == (uint *)0x0) {
LAB_100814c9:
    if (*(int *)((int)this + 0x10) == 0) goto LAB_100814f5;
    FUN_100813e5(this,*(int **)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  else {
    uVar3 = FUN_100810c8(this,param_4,param_5,(int)param_6,(int)param_7,param_8,param_9,param_10);
    cVar4 = (char)uVar3;
    if (cVar4 == '\0') {
      FUN_100813e5(this,*(int **)((int)this + 0xc));
      *(undefined4 *)((int)this + 0xc) = 0;
      goto LAB_100814c9;
    }
  }
  if (*(int *)((int)this + 0x10) != 0) {
    *(int *)((int)this + 0x10) =
         *(int *)((int)this + 0x10) + *(int *)(*(int *)((int)this + 4) * 0x28 + 0x30 + *(int *)this)
    ;
    return cVar4;
  }
LAB_100814f5:
  if (*(int *)((int)this + 0xc) != 0) {
    *(int *)((int)this + 0xc) =
         *(int *)((int)this + 0xc) + *(int *)(*(int *)((int)this + 4) * 0x28 + 0x30 + *(int *)this);
  }
  return cVar4;
}

