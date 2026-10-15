/*
 * FUN_180075514 at 180075514
 * undefined __fastcall FUN_180075514(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 180075514-1800758cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180075514(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(char *)(param_3 + 0x53e) != '\0') {
    puVar1 = (uint *)(param_3 + 0x20);
    FUN_1800758d0(param_1,param_2,param_3,*(uint *)(param_3 + 0x514),*(uint *)(param_3 + 0x4ec),
                  *(uint *)(param_3 + 0x4f0));
    FUN_1800758d0(param_1,param_2,param_3,*(uint *)(param_3 + 0x518),*(uint *)(param_3 + 0x4f4),
                  *(uint *)(param_3 + 0x4f8));
    FUN_1800758d0(param_1,param_2,param_3,*(uint *)(param_3 + 0x51c),*(uint *)(param_3 + 0x4fc),
                  *(uint *)(param_3 + 0x500));
    uVar2 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    FUN_1800edbe0(puVar1,param_2,0,(ulonglong)*(uint *)(param_3 + 0x504));
    FUN_1800edbe0(puVar1,param_2,0,(ulonglong)*(uint *)(param_3 + 0x504));
    FUN_1800edbe0(puVar1,param_2,0,(ulonglong)*(uint *)(param_3 + 0x504));
    FUN_1800edbe0(puVar1,param_2,0,(ulonglong)*(uint *)(param_3 + 0x504));
    FUN_1800edbe0(puVar1,param_2,0,(ulonglong)*(uint *)(param_3 + 0x504));
    FUN_1800edbe0(puVar1,param_2,0,(ulonglong)uVar2);
    FUN_1800edbe0(puVar1,param_2,0,(ulonglong)uVar2);
    FUN_1800edbe0(puVar1,param_2,0x38,(ulonglong)uVar2);
    FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)*(uint *)(param_3 + 0x504));
    FUN_1800ec960((longlong)puVar1,uVar2);
  }
  return;
}

