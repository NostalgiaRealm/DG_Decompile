/*
 * FUN_180075cc4 at 180075cc4
 * undefined __fastcall FUN_180075cc4(undefined8 param_1, longlong * param_2, longlong param_3, uint param_4)
 * Address ranges: 180075cc4-180075ff0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180075cc4(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = (uint *)(param_3 + 0x20);
  uVar2 = (ulonglong)param_4;
  uVar3 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
  uVar4 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
  uVar5 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
  if (*(char *)(param_3 + 0x53e) == '\0') {
    FUN_1800edbe0(puVar1,param_2,0,uVar2);
  }
  FUN_1800edbe0(puVar1,param_2,0,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_2,0x10,(ulonglong)uVar4);
  FUN_1800edbe0(puVar1,param_2,0x10,(ulonglong)uVar5);
  FUN_1800edbe0(puVar1,param_2,0x38,uVar2);
  FUN_1800edbe0(puVar1,param_2,0xe,uVar2);
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_2,0x10,(ulonglong)uVar4);
  FUN_1800edbe0(puVar1,param_2,0x44,(ulonglong)uVar4);
  FUN_1800edbe0(puVar1,param_2,0x38,uVar2);
  FUN_1800ec960((longlong)puVar1,uVar3);
  FUN_1800ec960((longlong)puVar1,uVar4);
  FUN_1800ec960((longlong)puVar1,uVar5);
  return;
}

