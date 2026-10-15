/*
 * FUN_10043c0d at 10043c0d
 * int __thiscall FUN_10043c0d(void * this, int param_1, int param_2, int param_3, uint param_4, uint param_5)
 * Address ranges: 10043c0d-10043d93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10043c0d(void *this,int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  ushort in_FPUControlWord;
  uint local_c4 [44];
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 0x1c4;
  if (param_2 == 1) {
    local_8 = 0x112;
  }
  else if (param_2 == 2) {
    local_8 = 0x1e2;
  }
  if (*(uint *)((int)this + 0x44) != local_8) {
    FUN_10042b7c((void *)((int)this + 0x940),local_c4,&local_8);
    puVar4 = local_c4;
    puVar5 = (uint *)((int)this + 0x44);
    for (iVar3 = 0x2c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  local_8 = CONCAT31(local_8._1_3_,~(byte)(param_5 >> 2)) & 0xffffff01;
  local_c = CONCAT31(local_c._1_3_,~(byte)(param_5 >> 4)) & 0xffffff01;
  local_10 = CONCAT31(local_10._1_3_,~(byte)(param_5 >> 3)) & 0xffffff01;
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
  }
  iVar3 = -0x7ff8ffa9;
  if ((param_3 != 0) && (param_4 < 0x10000)) {
    iVar3 = 0;
    if ((*(int *)((int)this + 0x48) != 3) && (param_1 - 1U < 6)) {
      iVar3 = *(int *)((int)this + 0x18);
      iVar1 = *(int *)((int)this + 0x28);
      if (((iVar3 == 0) || (*(char *)(iVar3 + 9) == '\0')) &&
         ((iVar1 == 0 || (*(char *)(iVar1 + 9) == '\0')))) {
        if (((iVar3 == 0) || (*(char *)(iVar3 + 8) == '\0')) &&
           ((iVar1 == 0 || (*(char *)(iVar1 + 8) == '\0')))) {
          iVar3 = 0;
        }
        else {
          iVar3 = -0x7789fe3e;
        }
      }
      else {
        iVar3 = -0x7789fe52;
      }
      if (-1 < iVar3) {
        iVar3 = FUN_10042e08(this,param_1,(int)this + 0x44,param_3,param_4,0,0,2,(char)local_10,
                             (byte)local_c,(char)local_8);
      }
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar3;
}

