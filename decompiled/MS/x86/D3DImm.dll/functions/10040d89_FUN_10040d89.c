/*
 * FUN_10040d89 at 10040d89
 * undefined4 __thiscall FUN_10040d89(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 10040d89-10040de3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040d89(void *this,int param_1,undefined4 *param_2)

{
  uint uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80070057;
  if (((param_2 != (undefined4 *)0x0) && (param_1 != 0)) && (param_1 < 0x18)) {
    uVar1 = *(uint *)(&DAT_1005f420 + param_1 * 4);
    BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
    if (BVar2 == 0) {
      FUN_1003c603();
    }
    FUN_10007abf(this,uVar1,param_2);
    uVar3 = 0;
    LeaveCriticalSection(DAT_1006bbd0);
  }
  return uVar3;
}

