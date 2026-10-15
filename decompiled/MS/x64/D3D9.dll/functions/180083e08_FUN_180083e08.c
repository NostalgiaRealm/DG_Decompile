/*
 * FUN_180083e08 at 180083e08
 * undefined __fastcall FUN_180083e08(undefined8 param_1, longlong param_2, longlong * param_3, undefined8 param_4, uint param_5)
 * Address ranges: 180083e08-180083f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180083e08(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  uint param_5)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_2 + 0x20);
  FUN_1800edbe0(puVar1,param_3,0x10,(ulonglong)param_5);
  FUN_1800edbe0(puVar1,param_3,0x10,(ulonglong)param_5);
  FUN_1800edbe0(puVar1,param_3,0x10,(ulonglong)param_5);
  return;
}

