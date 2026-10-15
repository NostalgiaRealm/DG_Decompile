/*
 * FUN_1004587c at 1004587c
 * int __thiscall FUN_1004587c(void * this, int param_1, void * param_2, uint param_3, uint param_4)
 * Address ranges: 1004587c-10045a6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004587c(void *this,int param_1,void *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  void *this_00;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_EDX;
  int iVar6;
  ushort in_FPUControlWord;
  uint local_1c;
  bool local_18;
  undefined3 uStack_17;
  char local_14;
  undefined3 uStack_13;
  uint *local_10;
  undefined1 local_c;
  undefined3 uStack_b;
  undefined1 local_8;
  undefined3 uStack_7;
  
  this_00 = param_2;
  cVar3 = FUN_10042dea((int)param_2,*(int *)((int)this + 0x4b0) != 0);
  _local_14 = CONCAT31(uStack_13,cVar3);
  uVar2 = *(uint *)(*(int *)((int)this + 0xa58) + 0x34);
  if ((uVar2 & 0x10000) == 0) {
    _local_c = CONCAT31(uStack_b,1);
    if (*(int *)((int)this + 0x4b8) == extraout_EDX) goto LAB_100458bf;
  }
  else {
LAB_100458bf:
    _local_c = CONCAT31(uStack_b,(char)extraout_EDX);
  }
  if ((uVar2 & 0x10000) == 0) {
    _local_8 = CONCAT31(uStack_7,1);
    if (cVar3 == '\0') goto LAB_100458ce;
  }
  else {
LAB_100458ce:
    _local_8 = CONCAT31(uStack_7,(char)extraout_EDX);
  }
  _local_18 = CONCAT31(uStack_17,*(int *)((int)this + 0x4b4) != extraout_EDX);
  BVar4 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar4 == 0) {
    FUN_1003c603();
  }
  local_10 = &local_1c;
  local_1c = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_1c = (uint)in_FPUControlWord;
  }
  iVar6 = -0x7ff8ffa9;
  if (param_2 == (void *)0x0) goto LAB_10045a40;
  if (*(char *)((int)param_2 + 0x134) != '\0') {
    iVar5 = FUN_1003f683((int)this);
    if (*(char *)((int)param_2 + 0x135) == '\0') {
      if ((char)iVar5 != '\0') goto LAB_10045a40;
    }
    else if ((char)iVar5 == '\0') goto LAB_10045a40;
  }
  LOCK();
  *(int *)((int)param_2 + 0x1c) = *(int *)((int)param_2 + 0x1c) + 1;
  UNLOCK();
  if (((param_3 < *(uint *)((int)param_2 + 0x78)) &&
      (param_3 + param_4 <= *(uint *)((int)param_2 + 0x78))) &&
     (iVar6 = -0x7789fd20, param_1 - 1U < 6)) {
    piVar1 = (int *)((int)param_2 + 0x88);
    param_2 = (void *)0x0;
    local_10 = (uint *)(*piVar1 * param_3 + *(int *)((int)this_00 + 4));
    if (*(int *)((int)this_00 + 0xc) == 0) {
      FUN_1004bab1(this_00,param_4);
      param_2 = (void *)FUN_1004ba3d(extraout_ECX);
    }
    iVar6 = *(int *)((int)this + 0x18);
    iVar5 = *(int *)((int)this + 0x28);
    if (((iVar6 == 0) || (*(char *)(iVar6 + 9) == '\0')) &&
       ((iVar5 == 0 || (*(char *)(iVar5 + 9) == '\0')))) {
      if (((iVar6 == 0) || (*(char *)(iVar6 + 8) == '\0')) &&
         ((iVar5 == 0 || (*(char *)(iVar5 + 8) == '\0')))) {
        iVar6 = 0;
      }
      else {
        iVar6 = -0x7789fe3e;
      }
    }
    else {
      iVar6 = -0x7789fe52;
    }
    if (-1 < iVar6) {
      iVar6 = FUN_100431c2(this,param_1,(int)this_00 + 0x7c,(int)param_2,param_3,(int)local_10,
                           param_4,0,0,7,(char)_local_c,(char)_local_8,(byte)_local_18,
                           (char)_local_14,'\x01');
    }
  }
  LOCK();
  *(int *)((int)this_00 + 0x1c) = *(int *)((int)this_00 + 0x1c) + -1;
  UNLOCK();
LAB_10045a40:
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar6;
}

