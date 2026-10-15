/*
 * FUN_10045379 at 10045379
 * int __thiscall FUN_10045379(void * this, int param_1, uint param_2, int param_3, uint param_4, int param_5, uint param_6)
 * Address ranges: 10045379-10045527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10045379(void *this,int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  uint *puVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  ushort in_FPUControlWord;
  uint local_d4 [44];
  uint local_24;
  bool local_20;
  undefined3 uStack_1f;
  bool local_1c;
  undefined3 uStack_1b;
  void *local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  uVar2 = *(uint *)(*(int *)((int)this + 0xa58) + 0x34);
  if ((uVar2 & 0x10000) == 0) {
    local_c = CONCAT31(local_c._1_3_,1);
    if (*(int *)((int)this + 0x4b8) == 0) goto LAB_100453aa;
  }
  else {
LAB_100453aa:
    local_c = local_c & 0xffffff00;
  }
  if ((uVar2 & 0x10000) == 0) {
    local_8 = CONCAT31(local_8._1_3_,1);
    bVar8 = *(int *)((int)this + 0x4b0) == 0;
    if (!bVar8) goto LAB_100453c4;
  }
  bVar8 = *(int *)((int)this + 0x4b0) == 0;
  local_8 = local_8 & 0xffffff00;
LAB_100453c4:
  _local_1c = CONCAT31(uStack_1b,!bVar8);
  local_14 = param_2;
  _local_20 = CONCAT31(uStack_1f,*(int *)((int)this + 0x4b4) != 0);
  local_18 = this;
  BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar3 == 0) {
    FUN_1003c603();
  }
  local_10 = &local_24;
  local_24 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_24 = (uint)in_FPUControlWord;
  }
  iVar5 = -0x7ff8ffa9;
  if (((param_3 != 0) && (param_5 != 0)) && (iVar5 = -0x7789fd20, param_1 - 1U < 6)) {
    puVar1 = (uint *)((int)this + 0x44);
    iVar5 = -0x7789fd1f;
    if (*puVar1 != param_2) {
      FUN_10042b7c((void *)((int)this + 0x940),local_d4,&local_14);
      puVar6 = local_d4;
      puVar7 = puVar1;
      for (iVar4 = 0x2c; this = local_18, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    if (*(int *)((int)this + 0x48) != 3) {
      iVar5 = *(int *)((int)this + 0x18);
      iVar4 = *(int *)((int)this + 0x28);
      if (((iVar5 == 0) || (*(char *)(iVar5 + 9) == '\0')) &&
         ((iVar4 == 0 || (*(char *)(iVar4 + 9) == '\0')))) {
        if (((iVar5 == 0) || (*(char *)(iVar5 + 8) == '\0')) &&
           ((iVar4 == 0 || (*(char *)(iVar4 + 8) == '\0')))) {
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
        iVar5 = FUN_100431c2(this,param_1,(int)puVar1,0,0,param_3,param_4,param_5,param_6,7,
                             (char)local_c,(char)local_8,(byte)_local_20,(char)_local_1c,'\0');
      }
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar5;
}

