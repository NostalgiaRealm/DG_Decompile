/*
 * FUN_18006fae0 at 18006fae0
 * undefined __fastcall FUN_18006fae0(longlong param_1, uint param_2)
 * Address ranges: 18006fae0-18006fbe0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006fae0(longlong param_1,uint param_2)

{
  uint uVar1;
  uint in_stack_00000030;
  
  uVar1 = param_2;
  if (in_stack_00000030 != 0) {
    uVar1 = in_stack_00000030;
  }
  FUN_1800edbe0(*(uint **)(param_1 + 8),*(longlong **)(param_1 + 0x10),0xe,(ulonglong)uVar1);
  FUN_1800edbe0(*(uint **)(param_1 + 8),*(longlong **)(param_1 + 0x10),1,(ulonglong)param_2);
  FUN_1800edbe0(*(uint **)(param_1 + 8),*(longlong **)(param_1 + 0x10),0x37,(ulonglong)param_2);
  return;
}

