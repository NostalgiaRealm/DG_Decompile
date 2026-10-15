/*
 * FUN_1800514d0 at 1800514d0
 * undefined __cdecl FUN_1800514d0(longlong param_1, uint param_2, ulonglong param_3, undefined8 param_4, longlong * param_5)
 * Address ranges: 1800514d0-180051513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800514d0(longlong param_1,uint param_2,ulonglong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_1 + (ulonglong)param_2 * 0x18c0;
  lVar1 = lVar3 + (param_3 & 0xffffffff) * 8;
  if (*(longlong *)(lVar1 + 0x790) != *param_5) {
    *(longlong *)(lVar1 + 0x790) = *param_5;
    plVar2 = *(longlong **)(lVar3 + 0x6b8);
                    /* WARNING: Could not recover jumptable at 0x00018005150c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x50))(plVar2,param_3 & 0xffffffff,1,lVar1 + 0x790);
    return;
  }
  return;
}

