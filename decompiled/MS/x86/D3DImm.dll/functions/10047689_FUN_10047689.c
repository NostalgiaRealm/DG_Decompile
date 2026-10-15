/*
 * FUN_10047689 at 10047689
 * undefined4 __thiscall FUN_10047689(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 10047689-1004772f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10047689(void *this,int param_1,int param_2,int param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar3 = 0x88760082;
  if (param_1 != 0) {
    uVar3 = 0x80070057;
    if (((*(void **)(param_2 + 0x84) == this) &&
        (uVar3 = 0x88760305, *(char *)(param_2 + 0xd0) != '\0')) &&
       ((uVar3 = 0x80070057, param_3 == 1 || (param_3 == 2)))) {
      uVar3 = 0x80004005;
      uVar2 = FUN_10045e76(this,param_1,param_2,param_3 == 1);
      if ((char)uVar2 != '\0') {
        uVar3 = FUN_100460c5(this,param_1,param_3 == 1);
        FUN_10047461(this,'\0');
        FUN_10046017(this,param_1);
      }
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

