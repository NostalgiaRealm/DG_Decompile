/*
 * FUN_1003c73c at 1003c73c
 * int __thiscall FUN_1003c73c(void * this, int * param_1, undefined4 param_2, int * param_3, byte * param_4, int * param_5, undefined4 param_6)
 * Address ranges: 1003c73c-1003c824
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1003c73c(void *this,int *param_1,undefined4 param_2,int *param_3,byte *param_4,int *param_5,
            undefined4 param_6)

{
  char cVar1;
  BOOL BVar2;
  void *this_00;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *local_8;
  
  local_8 = this;
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  local_8 = (int *)0x0;
  this_00 = (void *)(**(code **)(*param_3 + 0x18))();
  if (this_00 == (void *)0x0) {
    iVar5 = -0x7fffbffe;
    cVar1 = (**(code **)(*param_1 + 0x30))();
    if (cVar1 != '\0') {
      iVar5 = (**(code **)(*(int *)this + 8))(param_1,param_2,&DAT_1005d0f0,&local_8,param_6);
      if (-1 < iVar5) {
        iVar5 = FUN_1004a237((byte *)&DAT_1005d180,param_4,(int *)0x0,param_3,(int *)0x0,param_5,
                             (uint *)0x1);
        (**(code **)(*local_8 + 8))(local_8);
      }
    }
  }
  else {
    cVar1 = (**(code **)(**(int **)((int)this_00 + 0xa70) + 0x30))();
    pbVar4 = *(byte **)((int)this_00 + 0xa58);
    if (cVar1 == '\0') {
      pbVar4 = *(byte **)((int)this_00 + 0xa58) + 0x10;
    }
    iVar3 = FUN_1005c99d(param_4,pbVar4,0x10);
    iVar5 = -0x7fffbffe;
    if (iVar3 == 0) {
      iVar5 = FUN_1003eaee(this_00,0x1005d180,param_5);
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar5;
}

