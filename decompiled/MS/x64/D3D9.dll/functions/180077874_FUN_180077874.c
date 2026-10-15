/*
 * FUN_180077874 at 180077874
 * uint __fastcall FUN_180077874(undefined8 param_1, longlong * param_2, longlong param_3, uint param_4)
 * Address ranges: 180077874-180077b0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180077874(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_3 + 0x20);
  uVar2 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
  FUN_1800edbe0(puVar1,param_2,0x38,(ulonglong)uVar2);
  if (param_4 == 0) {
    param_4 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
  }
  FUN_1800edbe0(puVar1,param_2,0x38,(ulonglong)param_4);
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)param_4);
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)param_4);
  FUN_1800edbe0(puVar1,param_2,0,(ulonglong)param_4);
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)param_4);
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)param_4);
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)param_4);
  FUN_1800ec960((longlong)puVar1,uVar2);
  return param_4;
}

