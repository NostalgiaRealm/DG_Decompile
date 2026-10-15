/*
 * FUN_10049c1d at 10049c1d
 * int __thiscall FUN_10049c1d(void * this, byte * param_1, undefined4 param_2, undefined4 * param_3, int * param_4, int param_5, undefined4 * param_6)
 * Address ranges: 10049c1d-10049de9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10049c1d(void *this,byte *param_1,undefined4 param_2,undefined4 *param_3,int *param_4,
            int param_5,undefined4 *param_6)

{
  int *piVar1;
  char cVar2;
  BOOL BVar3;
  void *this_00;
  undefined4 *this_01;
  undefined4 uVar4;
  int iVar5;
  ushort in_FPUControlWord;
  uint local_18;
  undefined8 local_14;
  void *local_c;
  uint local_8;
  
  local_c = this;
  BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar3 == 0) {
    FUN_1003c603();
  }
  local_14 = CONCAT44(&local_18,(undefined4)local_14);
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_18 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_18 = (uint)in_FPUControlWord;
    local_8 = local_18 & 0xfffff0ff | 0x23f;
  }
  iVar5 = -0x7ff8ffa9;
  if (((param_4 != (int *)0x0) && (*param_4 = 0, param_3 != (undefined4 *)0x0)) &&
     (iVar5 = -0x7ffbfef0, param_6 == (undefined4 *)0x0)) {
    iVar5 = -0x7ff8fff2;
    piVar1 = *(int **)((int)this + 0x90);
    uVar4 = *(undefined4 *)(*(int *)((int)this + 0x94) + 8);
    this_00 = (void *)FUN_1005c755(0x13c);
    if (this_00 == (void *)0x0) {
      this_01 = (undefined4 *)0x0;
    }
    else {
      this_01 = FUN_1004b767(this_00,uVar4,param_2,piVar1,param_3);
    }
    param_6 = this_01;
    if (this_01 != (undefined4 *)0x0) {
      iVar5 = FUN_1004bc2f(this_01,param_1,param_5);
      if (-1 < iVar5) {
        if ((this_01[0x1c] & 0x10800) == 0x10000) {
          local_14 = 0;
          cVar2 = (**(code **)(**(int **)((int)local_c + 0x90) + 0x50))(this_01[4],&local_14);
          if (cVar2 == '\0') {
            iVar5 = -0x7789fe84;
          }
        }
        if (-1 < iVar5) {
          iVar5 = FUN_1004bb07(this_01,(int)param_1,param_4);
          if (-1 < iVar5) {
            iVar5 = -0x7ff8fff2;
            uVar4 = FUN_10008155((void *)((int)local_c + 0xcc),&param_6);
            if ((char)uVar4 != '\0') {
              iVar5 = 0;
              goto LAB_10049dbe;
            }
            (**(code **)(*(int *)*param_4 + 8))((int *)*param_4);
            *param_4 = 0;
            this_01 = (undefined4 *)0x0;
          }
          if (this_01 != (undefined4 *)0x0) {
            FUN_1004b87c((int)this_01);
          }
          if (-1 < iVar5) goto LAB_10049dbe;
        }
      }
      if (this_01 != (undefined4 *)0x0) {
        FUN_1004b81c(this_01);
        FUN_1005c76c(this_01);
      }
    }
  }
LAB_10049dbe:
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar5;
}

