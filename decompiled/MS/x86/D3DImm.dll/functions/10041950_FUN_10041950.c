/*
 * FUN_10041950 at 10041950
 * undefined4 __thiscall FUN_10041950(void * this, uint param_1, undefined4 * param_2, undefined4 param_3)
 * Address ranges: 10041950-100419b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10041950(void *this,uint param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  uVar3 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    if ((param_1 < 8) && (uVar3 = 0, *(int *)((int)this + param_1 * 4 + 0x14d4) != 0)) {
      puVar1 = *(undefined4 **)((int)this + param_1 * 4 + 0x14f4);
      uVar3 = (**(code **)*puVar1)(puVar1,param_3,param_2);
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

