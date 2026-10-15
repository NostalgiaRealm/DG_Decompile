/*
 * FUN_1004a0ad at 1004a0ad
 * int __thiscall FUN_1004a0ad(void * this, int param_1, undefined4 param_2, int * param_3, undefined4 * param_4)
 * Address ranges: 1004a0ad-1004a211
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1004a0ad(void *this,int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  void *this_00;
  int *piVar2;
  undefined4 uVar3;
  void *this_01;
  int iVar4;
  ushort in_FPUControlWord;
  undefined4 uVar5;
  uint local_14;
  void *local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = this;
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  local_c = &local_14;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar4 = -0x7ff8ffa9;
  if (param_3 != (int *)0x0) {
    iVar4 = -0x7ffbfef0;
    *param_3 = 0;
    if (param_4 == (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)((int)this + 0x90);
      iVar4 = -0x7ff8fff2;
      uVar5 = 0xd4;
      this_00 = (void *)FUN_1005c755(0xd4);
      if (this_00 == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_1004be8c(this_00,uVar5,uVar3);
      }
      param_4 = piVar2;
      if (piVar2 != (int *)0x0) {
        iVar4 = FUN_1004c255((int)piVar2);
        if (-1 < iVar4) {
          iVar4 = FUN_1004c14b(this_01,param_1,param_3);
          if (-1 < iVar4) {
            iVar4 = -0x7ff8fff2;
            uVar3 = FUN_10008155((void *)((int)local_10 + 0xa8),&param_4);
            if ((char)uVar3 != '\0') {
              iVar4 = 0;
              goto LAB_1004a1e5;
            }
            (**(code **)(*(int *)*param_3 + 8))((int *)*param_3);
            *param_3 = 0;
            param_3 = (int *)0x0;
            piVar2 = param_3;
          }
          param_3 = piVar2;
          if (param_3 != (int *)0x0) {
            FUN_1004bf77((int)param_3);
          }
          piVar2 = param_3;
          if (-1 < iVar4) goto LAB_1004a1e5;
        }
        if (piVar2 != (int *)0x0) {
          FUN_1004bf54(piVar2);
          FUN_1005c76c(piVar2);
        }
      }
    }
  }
LAB_1004a1e5:
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar4;
}

