/*
 * FUN_180010c50 at 180010c50
 * undefined FUN_180010c50(void)
 * Address ranges: 180010c50-180010ce7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010c50(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 local_20 [4];
  
  uVar3 = 0;
  do {
    local_20[0] = param_2;
    if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar3 * 4) == -1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x358) + uVar3 * 4) = param_2;
      lVar2 = FUN_180007c48(param_1 + 0x318,local_20);
      if (lVar2 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0xc0))(*(longlong **)(param_1 + 0x28),uVar3);
      }
      (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),uVar3,1);
      return;
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < 8);
  if (uVar1 == 8) {
    FUN_1800032e8(param_1 + 0x358,local_20);
  }
  return;
}

