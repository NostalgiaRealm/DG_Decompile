/*
 * FUN_180048708 at 180048708
 * undefined __fastcall FUN_180048708(longlong param_1, int param_2)
 * Address ranges: 180048708-180048746
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048708(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x670)) {
    FUN_180047348(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xc0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x670) = param_2;
  }
  return;
}

