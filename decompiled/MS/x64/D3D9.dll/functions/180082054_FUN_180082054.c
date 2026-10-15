/*
 * FUN_180082054 at 180082054
 * undefined __fastcall FUN_180082054(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 180082054-1800821bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180082054(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint in_stack_00000048;
  
  puVar1 = (uint *)(param_3 + 0x20);
  FUN_1800edbe0(puVar1,param_2,0x2f,(ulonglong)in_stack_00000048);
  FUN_1800edbe0(puVar1,param_2,0x38,(ulonglong)in_stack_00000048);
  uVar2 = FUN_1800ec8c0((longlong)puVar1,1,'\0');
  FUN_1800edbe0(puVar1,param_2,0x39,(ulonglong)uVar2);
  FUN_1800edbe0(puVar1,param_2,0x37,(ulonglong)in_stack_00000048);
  FUN_1800edbe0(puVar1,param_2,0x19,(ulonglong)in_stack_00000048);
  return;
}

