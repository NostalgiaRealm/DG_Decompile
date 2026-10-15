/*
 * FUN_1000f4e5 at 1000f4e5
 * uint * __thiscall FUN_1000f4e5(void * this, uint * param_1, int param_2)
 * Address ranges: 1000f4e5-1000f5db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall FUN_1000f4e5(void *this,uint *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint extraout_ECX;
  uint uVar4;
  uint extraout_EDX;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar3 = *(uint *)(param_2 + 0x3b);
  uVar4 = *(uint *)(param_2 + 0x37);
  *param_1 = *(uint *)((int)this + 0xa0);
  param_1[1] = *(uint *)((int)this + 0xa4);
  param_1[2] = *(uint *)((int)this + 0xa8);
  param_1[3] = *(uint *)((int)this + 0xac);
  param_1[4] = *(uint *)((int)this + 0xb4);
  param_1[5] = *(uint *)((int)this + 0xb8);
  cVar1 = FUN_1002f81d(uVar4,uVar3);
  if (cVar1 == '\0') {
    uVar3 = extraout_ECX;
    if (extraout_ECX == 0) {
      uVar3 = *(uint *)((int)this + 0x98);
    }
    *param_1 = uVar3;
    uVar3 = extraout_EDX;
    if (extraout_EDX == 0) {
      uVar3 = *(uint *)((int)this + 0x9c);
    }
    param_1[1] = uVar3;
  }
  else {
    if (*(int *)(param_2 + 8) == 0) {
      iVar2 = FUN_1004a829(*(void **)(*(int *)(*(int *)((int)this + 0x365c) + 4) + 0x2b14),
                           *(int *)(*(int *)((int)this + 0x365c) + 8));
    }
    else {
      iVar2 = *(int *)(param_2 + 8) + -1;
    }
    FUN_100096ff(this,&local_c,iVar2,param_2);
    FUN_10009746(this,&local_14,iVar2,&local_c,param_2);
    *param_1 = local_c;
    param_1[1] = local_8;
    param_1[2] = local_14;
    param_1[3] = local_10;
  }
  if (((*(char *)(param_2 + 0x22) == '\0') || (uVar3 = *(uint *)(param_2 + 0x43), uVar3 == 0)) ||
     (uVar4 = *(uint *)(param_2 + 0x47), uVar4 == 0)) {
    uVar3 = *(uint *)((int)this + 0xb0);
    uVar4 = 1;
  }
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  return param_1;
}

