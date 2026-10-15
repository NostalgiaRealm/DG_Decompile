/*
 * FUN_180077b10 at 180077b10
 * ulonglong __fastcall FUN_180077b10(undefined8 param_1, longlong * param_2, longlong param_3, uint param_4)
 * Address ranges: 180077b10-180077c67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180077b10(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_3 + 0x20);
  if (param_4 == 0) {
    param_4 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
  }
  FUN_1800edbe0(puVar1,param_2,0x38,(ulonglong)param_4);
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)param_4);
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)param_4);
  return (ulonglong)param_4;
}

