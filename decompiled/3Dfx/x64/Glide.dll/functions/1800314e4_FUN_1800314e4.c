/*
 * FUN_1800314e4 at 1800314e4
 * undefined __fastcall FUN_1800314e4(longlong param_1, undefined8 param_2, uint param_3, undefined8 param_4)
 * Address ranges: 1800314e4-18003153f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800314e4(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  uVar1 = 0;
  uVar3 = param_4;
  FUN_180034f64(param_1 + 0x3ae0,0,0,param_4);
  FUN_18001d3b8(param_1,uVar1,uVar2,uVar3);
  FUN_18003145c(param_1,param_2,param_3,(int)param_4);
                    /* WARNING: Could not recover jumptable at 0x000180031539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

