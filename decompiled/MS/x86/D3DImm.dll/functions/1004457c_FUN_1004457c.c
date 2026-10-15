/*
 * FUN_1004457c at 1004457c
 * int __stdcall FUN_1004457c(int param_1, void * param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 1004457c-10044721
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004457c(int param_1,void *param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  BOOL BVar5;
  int extraout_ECX;
  uint extraout_EDX;
  int iVar6;
  ushort in_FPUControlWord;
  uint local_18;
  uint local_14;
  uint local_10;
  uint *local_c;
  void *local_8;
  
  cVar4 = FUN_10042dea((int)param_2,~(byte)(param_5 >> 2) & 1);
  local_10 = CONCAT31(local_10._1_3_,~(byte)(extraout_EDX >> 4)) & 0xffffff01;
  local_14 = CONCAT31(local_14._1_3_,~(byte)(extraout_EDX >> 3)) & 0xffffff01;
  BVar5 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar5 == 0) {
    FUN_1003c603();
  }
  local_c = &local_18;
  local_18 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_18 = (uint)in_FPUControlWord;
  }
  iVar6 = -0x7ff8ffa9;
  if (param_2 != (void *)0x0) {
    LOCK();
    *(int *)((int)param_2 + 0x1c) = *(int *)((int)param_2 + 0x1c) + 1;
    UNLOCK();
    if (((param_3 < *(uint *)((int)param_2 + 0x78)) &&
        (param_3 + param_4 <= *(uint *)((int)param_2 + 0x78))) &&
       (iVar6 = -0x7789fd20, param_1 - 1U < 6)) {
      iVar1 = *(int *)((int)param_2 + 0x88);
      param_5 = 0;
      iVar2 = *(int *)((int)param_2 + 4);
      if (*(int *)((int)param_2 + 0xc) == 0) {
        FUN_1004bab1(param_2,param_4);
        param_5 = FUN_1004ba3d(extraout_ECX);
      }
      iVar6 = *(int *)((int)local_8 + 0x28);
      iVar3 = *(int *)((int)local_8 + 0x18);
      if (((iVar3 == 0) || (*(char *)(iVar3 + 9) == '\0')) &&
         ((iVar6 == 0 || (*(char *)(iVar6 + 9) == '\0')))) {
        if (((iVar3 == 0) || (*(char *)(iVar3 + 8) == '\0')) &&
           ((iVar6 == 0 || (*(char *)(iVar6 + 8) == '\0')))) {
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
        iVar6 = FUN_100431c2(local_8,param_1,(int)param_2 + 0x7c,param_5,param_3,
                             iVar1 * param_3 + iVar2,param_4,0,0,3,(char)local_14,cVar4,
                             (byte)local_10,cVar4,'\x01');
      }
    }
    LOCK();
    *(int *)((int)param_2 + 0x1c) = *(int *)((int)param_2 + 0x1c) + -1;
    UNLOCK();
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar6;
}

