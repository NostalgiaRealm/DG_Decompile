/*
 * FUN_1003c68c at 1003c68c
 * int __stdcall FUN_1003c68c(int param_1, undefined4 param_2, int param_3, undefined4 * param_4, int param_5)
 * Address ranges: 1003c68c-1003c73b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1003c68c(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,int param_5)

{
  BOOL BVar1;
  void *this;
  undefined4 *this_00;
  int iVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    iVar2 = FUN_10048b9c(*(void **)(param_1 + 0xc),param_3,param_4,param_5);
    goto LAB_1003c728;
  }
  iVar2 = -0x7ff8fff2;
  this = (void *)FUN_1005c755(0x1f00);
  if (this == (void *)0x0) {
LAB_1003c710:
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_10048253(this,param_1,param_2);
    if (this_00 != (undefined4 *)0x0) {
      iVar2 = FUN_1004847a(this_00,param_3);
      if (iVar2 == 0) {
        iVar2 = FUN_10048b9c(this_00,param_3,param_4,param_5);
        if (iVar2 == 0) goto LAB_1003c712;
      }
      FUN_1004836d(this_00);
      FUN_1005c76c(this_00);
      goto LAB_1003c710;
    }
  }
LAB_1003c712:
  *(undefined4 **)(param_1 + 0xc) = this_00;
LAB_1003c728:
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar2;
}

