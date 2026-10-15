/*
 * FUN_10049f67 at 10049f67
 * int __thiscall FUN_10049f67(void * this, int param_1, undefined4 param_2, uint * param_3, int param_4)
 * Address ranges: 10049f67-1004a0ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10049f67(void *this,int param_1,undefined4 param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  BOOL BVar2;
  void *this_00;
  uint *this_01;
  undefined4 uVar3;
  int iVar4;
  ushort in_FPUControlWord;
  undefined4 uVar5;
  uint local_14;
  void *local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = this;
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  puVar1 = param_3;
  local_c = &local_14;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar4 = -0x7ff8ffa9;
  if (param_3 != (uint *)0x0) {
    iVar4 = -0x7ffbfef0;
    *param_3 = 0;
    if (param_4 == 0) {
      uVar3 = *(undefined4 *)((int)this + 0x90);
      iVar4 = -0x7ff8fff2;
      uVar5 = 0xd8;
      this_00 = (void *)FUN_1005c755(0xd8);
      if (this_00 == (void *)0x0) {
        this_01 = (uint *)0x0;
      }
      else {
        this_01 = FUN_1004adfe(this_00,uVar5,uVar3);
      }
      if (this_01 != (uint *)0x0) {
        param_3 = this_01;
        uVar3 = FUN_1004ae82(this_01,this_01);
        if ((char)uVar3 == '\0') {
          iVar4 = -0x7fffbffb;
        }
        else {
          iVar4 = FUN_1004b10b(this_01,param_1,(int *)puVar1);
          if (-1 < iVar4) {
            iVar4 = -0x7ff8fff2;
            uVar3 = FUN_10008155((void *)((int)local_10 + 0xc0),&param_3);
            if ((char)uVar3 != '\0') {
              iVar4 = 0;
              goto LAB_1004a080;
            }
            (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
            *puVar1 = 0;
            this_01 = (uint *)0x0;
          }
        }
        if (this_01 != (uint *)0x0) {
          FUN_1005c76c(this_01);
        }
      }
    }
  }
LAB_1004a080:
  param_3 = &local_14;
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar4;
}

