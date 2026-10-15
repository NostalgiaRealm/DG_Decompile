/*
 * FUN_10040e9b at 10040e9b
 * undefined4 __thiscall FUN_10040e9b(void * this, int param_1, int param_2)
 * Address ranges: 10040e9b-10040ef5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040e9b(void *this,int param_1,int param_2)

{
  uint uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80070057;
  if (((param_2 != 0) && (param_1 != 0)) && (param_1 < 0x18)) {
    uVar1 = *(uint *)(&DAT_1005f420 + param_1 * 4);
    BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
    if (BVar2 == 0) {
      FUN_1003c603();
    }
    FUN_10007b7a(this,uVar1,param_2);
    uVar3 = 0;
    LeaveCriticalSection(DAT_1006bbd0);
  }
  return uVar3;
}

