/*
 * FUN_100071d9 at 100071d9
 * undefined __thiscall FUN_100071d9(void * this, int param_1, uint param_2, uint param_3, uint param_4, int param_5, int param_6, int param_7, int param_8)
 * Address ranges: 100071d9-10007307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100071d9(void *this,int param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)((int)this + 0x3c) == '\0') {
    return;
  }
  LOCK();
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
  UNLOCK();
  if ((*(int *)(*(int *)((int)this + 0x1c) + 0x797) <= param_1) ||
     (uVar1 = FUN_1000439e(this,param_5,param_6,param_7,param_8), (char)uVar1 == '\0'))
  goto LAB_100072fb;
  uVar1 = *(uint *)(*(int *)((int)this + 0x1c) + 0x793);
  uVar3 = param_3 & 0xfffffff8;
  if (uVar1 < (param_3 & 0xfffffff8)) {
    uVar3 = uVar1;
  }
  iVar2 = *(int *)((int)this + 0xc) + param_1 * 0x9d + 0x1f2;
  if (*(byte *)(iVar2 + 0x9b) == param_4) {
    uVar1 = param_2;
    if (3 < param_2) {
      uVar1 = param_2 - 4;
    }
    if ((((*(uint *)(iVar2 + 0x7b + (~-(uint)(3 < uVar1) & 3 - uVar1) * 4) != uVar3) ||
         (*(int *)(iVar2 + 0x93) != param_7)) || (*(int *)(iVar2 + 0x97) != param_8)) ||
       ((*(int *)(iVar2 + 0x8f) != param_6 ||
        (param_3._0_1_ = '\0', *(int *)(iVar2 + 0x8b) != param_5)))) goto LAB_100072a2;
  }
  else {
LAB_100072a2:
    param_3._0_1_ = '\x01';
  }
  if (3 < param_2) {
    param_2 = param_2 - 4;
  }
  *(uint *)(iVar2 + 0x7b + (~-(uint)(3 < param_2) & 3 - param_2) * 4) = uVar3;
  *(char *)(iVar2 + 0x9b) = (char)param_4;
  *(int *)(iVar2 + 0x93) = param_7;
  *(int *)(iVar2 + 0x97) = param_8;
  *(int *)(iVar2 + 0x8f) = param_6;
  *(int *)(iVar2 + 0x8b) = param_5;
  FUN_100053d5(this,param_1,(char)param_3);
LAB_100072fb:
  LOCK();
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
  UNLOCK();
  return;
}

