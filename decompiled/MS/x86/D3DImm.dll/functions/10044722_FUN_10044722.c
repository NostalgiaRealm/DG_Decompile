/*
 * FUN_10044722 at 10044722
 * int __stdcall FUN_10044722(int param_1, void * param_2, undefined4 param_3, undefined4 param_4, int param_5, uint param_6, uint param_7)
 * Address ranges: 10044722-100448b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10044722(int param_1,void *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                uint param_6,uint param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  BOOL BVar4;
  int extraout_ECX;
  uint extraout_EDX;
  int iVar5;
  ushort in_FPUControlWord;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint *local_c;
  void *local_8;
  
  cVar3 = FUN_10042dea((int)param_2,~(byte)(param_7 >> 2) & 1);
  local_10 = CONCAT31(local_10._1_3_,~(byte)(extraout_EDX >> 4)) & 0xffffff01;
  local_14 = CONCAT31(local_14._1_3_,~(byte)(extraout_EDX >> 3)) & 0xffffff01;
  BVar4 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar4 == 0) {
    FUN_1003c603();
  }
  local_c = &local_1c;
  local_1c = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_1c = (uint)in_FPUControlWord;
  }
  iVar5 = -0x7ff8ffa9;
  if ((param_2 != (void *)0x0) && (param_5 != 0)) {
    piVar1 = (int *)((int)param_2 + 0x1c);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_c = *(uint **)((int)param_2 + 0x78);
    if ((local_c != (uint *)0x0) && (iVar5 = -0x7789fd20, param_1 - 1U < 6)) {
      local_18 = *(int *)((int)param_2 + 4);
      param_7 = 0;
      if (*(int *)((int)param_2 + 0xc) == 0) {
        FUN_1004bab1(param_2,param_6);
        param_7 = FUN_1004ba3d(extraout_ECX);
      }
      iVar5 = *(int *)((int)local_8 + 0x28);
      iVar2 = *(int *)((int)local_8 + 0x18);
      if (((iVar2 == 0) || (*(char *)(iVar2 + 9) == '\0')) &&
         ((iVar5 == 0 || (*(char *)(iVar5 + 9) == '\0')))) {
        if (((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) &&
           ((iVar5 == 0 || (*(char *)(iVar5 + 8) == '\0')))) {
          iVar5 = 0;
        }
        else {
          iVar5 = -0x7789fe3e;
        }
      }
      else {
        iVar5 = -0x7789fe52;
      }
      if (-1 < iVar5) {
        iVar5 = FUN_100431c2(local_8,param_1,(int)param_2 + 0x7c,param_7,0,local_18,(uint)local_c,
                             param_5,param_6,3,(char)local_14,cVar3,(byte)local_10,cVar3,'\x01');
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar5;
}

