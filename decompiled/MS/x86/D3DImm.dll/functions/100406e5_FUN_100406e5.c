/*
 * FUN_100406e5 at 100406e5
 * undefined4 __thiscall FUN_100406e5(void * this, undefined4 param_1, int param_2)
 * Address ranges: 100406e5-10040732
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100406e5(void *this,undefined4 param_1,int param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x80070057;
  if (param_2 != 0) {
    uVar2 = (**(code **)**(undefined4 **)((int)this + 0xa78))
                      (*(undefined4 **)((int)this + 0xa78),param_1,param_2);
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

