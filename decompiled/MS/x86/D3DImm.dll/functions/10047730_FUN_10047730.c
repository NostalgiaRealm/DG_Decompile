/*
 * FUN_10047730 at 10047730
 * undefined4 __thiscall FUN_10047730(void * this, int param_1, int param_2, undefined4 param_3, int * param_4)
 * Address ranges: 10047730-100477ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10047730(void *this,int param_1,int param_2,undefined4 param_3,int *param_4)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar4 = 0x88760082;
  if ((param_1 != 0) && (param_4 != (int *)0x0)) {
    uVar4 = 0x80070057;
    if ((*(void **)(param_2 + 0x84) == this) &&
       (uVar4 = 0x88760305, *(char *)(param_2 + 0xd0) != '\0')) {
      uVar4 = 0x80004005;
      uVar2 = FUN_10045e76(this,param_1,param_2,0);
      if ((char)uVar2 != '\0') {
        FUN_10046825(this,param_1,param_4);
        FUN_10046017(this,param_1);
        puVar5 = (undefined4 *)(param_1 + 0x74);
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        uVar4 = 0;
      }
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar4;
}

