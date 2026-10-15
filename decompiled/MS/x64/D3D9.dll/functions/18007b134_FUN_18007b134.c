/*
 * FUN_18007b134 at 18007b134
 * uint __fastcall FUN_18007b134(undefined8 param_1, longlong param_2, longlong * param_3)
 * Address ranges: 18007b134-18007b228
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18007b134(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_1800ec8c0(param_2 + 0x20,4,'\x01');
  FUN_1800edbe0((uint *)(param_2 + 0x20),param_3,0x36,(ulonglong)uVar1);
  return uVar1;
}

