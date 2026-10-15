/*
 * FUN_1004d034 at 1004d034
 * int __stdcall FUN_1004d034(int param_1, int * param_2, int * param_3, int param_4)
 * Address ranges: 1004d034-1004d120
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004d034(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  void *this;
  int *this_00;
  undefined4 extraout_ECX;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar3 == 0) {
    FUN_1003c603();
  }
  iVar4 = -0x7ff8ffa9;
  if ((((param_3 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_4 == 0)) && (*param_2 == 0x14)
     ) {
    *param_3 = 0;
    iVar4 = -0x7ff8fff2;
    uVar2 = *(undefined4 *)(iVar1 + 0xa70);
    this = (void *)FUN_1005c755(0x9c);
    if ((this != (void *)0x0) && (this_00 = FUN_10047e4b(this,uVar2), this_00 != (int *)0x0)) {
      iVar4 = FUN_10048134(this_00,extraout_ECX,param_2);
      if ((iVar4 < 0) || (iVar4 = FUN_10047fcc(this_00,0x1005d220,param_3), iVar4 < 0)) {
        FUN_1004765e(this_00,1);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xa70);
        if ((iVar1 != 0) &&
           (iVar1 = *(int *)(iVar1 + 0xc), param_3 = this_00, *(char *)(iVar1 + 0x1efc) != '\0')) {
          FUN_10008155((void *)(iVar1 + 0xd8),&param_3);
        }
      }
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar4;
}

