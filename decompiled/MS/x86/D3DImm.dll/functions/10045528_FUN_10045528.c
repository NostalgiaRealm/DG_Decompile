/*
 * FUN_10045528 at 10045528
 * int __thiscall FUN_10045528(void * this, int param_1, uint param_2, int * param_3, uint param_4)
 * Address ranges: 10045528-100456ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10045528(void *this,int param_1,uint param_2,int *param_3,uint param_4)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  ushort in_FPUControlWord;
  uint local_d4 [44];
  uint local_24;
  bool local_20;
  undefined3 uStack_1f;
  bool local_1c;
  undefined3 uStack_1b;
  void *local_18;
  uint local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  uVar1 = *(uint *)(*(int *)((int)this + 0xa58) + 0x34);
  if ((uVar1 & 0x10000) == 0) {
    local_14 = CONCAT31(local_14._1_3_,1);
    if (*(int *)((int)this + 0x4b8) == 0) goto LAB_10045558;
  }
  else {
LAB_10045558:
    local_14 = local_14 & 0xffffff00;
  }
  if ((uVar1 & 0x10000) == 0) {
    local_10 = CONCAT31(local_10._1_3_,1);
    bVar7 = *(int *)((int)this + 0x4b0) == 0;
    if (!bVar7) goto LAB_10045572;
  }
  bVar7 = *(int *)((int)this + 0x4b0) == 0;
  local_10 = local_10 & 0xffffff00;
LAB_10045572:
  _local_1c = CONCAT31(uStack_1b,!bVar7);
  _local_20 = CONCAT31(uStack_1f,*(int *)((int)this + 0x4b4) != 0);
  local_18 = this;
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  local_c = &local_24;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_24 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_24 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar4 = -0x7ff8ffa9;
  if ((param_3 != (int *)0x0) && (iVar4 = -0x7789fd20, param_1 - 1U < 6)) {
    iVar4 = -0x7789fd1f;
    param_2 = param_2 & 0xffffffdf;
    puVar6 = (uint *)((int)this + 0x44);
    local_c = puVar6;
    if (*puVar6 != param_2) {
      FUN_10042b7c((void *)((int)this + 0x940),local_d4,&param_2);
      puVar5 = local_d4;
      for (iVar3 = 0x2c; this = local_18, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    if ((*(int *)((int)this + 0x48) != 3) && (*(int *)((int)this + 0x48) != 0)) {
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
        iVar4 = FUN_100435fb(this,param_1,(int)local_c,param_3,param_4,0,0,7,(char)local_14,
                             (char)local_10,(byte)_local_20,(char)_local_1c);
      }
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar4;
}

