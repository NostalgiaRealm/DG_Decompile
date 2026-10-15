/*
 * FUN_100440e0 at 100440e0
 * int __thiscall FUN_100440e0(void * this, int param_1, uint param_2, int param_3, uint param_4, int param_5, uint param_6, uint param_7)
 * Address ranges: 100440e0-1004426b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_100440e0(void *this,int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
            uint param_7)

{
  uint *puVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  ushort in_FPUControlWord;
  uint local_cc [44];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = CONCAT31(local_8._1_3_,~(byte)(param_7 >> 2)) & 0xffffff01;
  local_14 = CONCAT31(local_14._1_3_,~(byte)(param_7 >> 4)) & 0xffffff01;
  local_18 = CONCAT31(local_18._1_3_,~(byte)(param_7 >> 3)) & 0xffffff01;
  local_c = param_2;
  local_10 = this;
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  local_1c = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_1c = (uint)in_FPUControlWord;
  }
  iVar4 = -0x7ff8ffa9;
  if (((param_3 != 0) && (param_5 != 0)) && (iVar4 = -0x7789fd20, param_1 - 1U < 6)) {
    puVar1 = (uint *)((int)this + 0x44);
    iVar4 = -0x7789fd1f;
    if (*puVar1 != param_2) {
      FUN_10042b7c((void *)((int)this + 0x940),local_cc,&local_c);
      puVar5 = local_cc;
      puVar6 = puVar1;
      for (iVar3 = 0x2c; this = local_10, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    if (*(int *)((int)this + 0x48) != 3) {
      iVar4 = *(int *)((int)this + 0x18);
      iVar3 = *(int *)((int)this + 0x28);
      if (((iVar4 == 0) || (*(char *)(iVar4 + 9) == '\0')) &&
         ((iVar3 == 0 || (*(char *)(iVar3 + 9) == '\0')))) {
        if (((iVar4 == 0) || (*(char *)(iVar4 + 8) == '\0')) &&
           ((iVar3 == 0 || (*(char *)(iVar3 + 8) == '\0')))) {
          iVar4 = 0;
        }
        else {
          iVar4 = -0x7789fe3e;
        }
      }
      else {
        iVar4 = -0x7789fe52;
      }
      if (-1 < iVar4) {
        iVar4 = FUN_100431c2(this,param_1,(int)puVar1,0,0,param_3,param_4,param_5,param_6,3,
                             (char)local_18,(char)local_8,(byte)local_14,(char)local_8,'\0');
      }
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar4;
}

