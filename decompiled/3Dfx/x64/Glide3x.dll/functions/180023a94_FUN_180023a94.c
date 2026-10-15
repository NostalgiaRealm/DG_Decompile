/*
 * FUN_180023a94 at 180023a94
 * undefined __fastcall FUN_180023a94(longlong param_1, undefined8 param_2, uint param_3, undefined8 param_4)
 * Address ranges: 180023a94-180023b10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023a94(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  uVar1 = 0;
  uVar4 = param_4;
  FUN_1800276a4(param_1 + 0x4260,0,0,param_4);
  FUN_18000fd5c(param_1,uVar1,uVar3,uVar4);
  FUN_180023a0c(param_1,param_2,param_3,(int)param_4);
  uVar2 = 3;
  do {
    FUN_180028688(param_1,uVar2,param_3,(int)param_4 + param_3);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
                    /* WARNING: Could not recover jumptable at 0x000180023b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return;
}

