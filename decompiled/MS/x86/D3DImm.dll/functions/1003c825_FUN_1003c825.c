/*
 * FUN_1003c825 at 1003c825
 * int __stdcall FUN_1003c825(int * param_1, int param_2, undefined4 * param_3, int param_4)
 * Address ranges: 1003c825-1003c8b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1003c825(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  BOOL BVar1;
  void *this;
  undefined4 *this_00;
  int iVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  this = (void *)(**(code **)(*param_1 + 0x20))();
  if (this == (void *)0x0) {
    iVar2 = -0x7ff8fff2;
    this_00 = FUN_1003cabd(param_1);
    if (this_00 != (undefined4 *)0x0) {
      iVar2 = FUN_1004b478(this_00,param_2,param_3,param_4);
      if (iVar2 != 0) {
        *this_00 = &PTR_FUN_1005f584;
        FUN_1005c76c(this_00);
        this_00 = (undefined4 *)0x0;
      }
    }
    (**(code **)(*param_1 + 0x24))(this_00);
  }
  else {
    iVar2 = FUN_1004b478(this,param_2,param_3,param_4);
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar2;
}

