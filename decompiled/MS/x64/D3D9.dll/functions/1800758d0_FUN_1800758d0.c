/*
 * FUN_1800758d0 at 1800758d0
 * undefined __fastcall FUN_1800758d0(undefined8 param_1, longlong * param_2, longlong param_3, uint param_4, uint param_5, uint param_6)
 * Address ranges: 1800758d0-180075cc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800758d0(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4,uint param_5,
                  uint param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)(param_3 + 0x20);
  uVar2 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
  uVar3 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
  uVar4 = param_6;
  if (param_4 != 0) {
    uVar4 = param_4;
  }
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)param_5);
  FUN_1800edbe0(puVar1,param_2,0,(ulonglong)uVar4);
  FUN_1800edbe0(puVar1,param_2,0x10,(ulonglong)uVar2);
  FUN_1800edbe0(puVar1,param_2,0x10,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)param_6);
  puVar1 = (uint *)(param_3 + 0x20);
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)param_5);
  FUN_1800edbe0(puVar1,param_2,0x38,(ulonglong)param_5);
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)param_6);
  FUN_1800edbe0(puVar1,param_2,0x38,(ulonglong)param_6);
  FUN_1800ec960((longlong)puVar1,uVar2);
  FUN_1800ec960((longlong)puVar1,uVar3);
  return;
}

