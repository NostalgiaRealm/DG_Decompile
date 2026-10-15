/*
 * FUN_18008c254 at 18008c254
 * longlong * __fastcall FUN_18008c254(longlong param_1, undefined4 param_2, undefined4 param_3, uint param_4, uint param_5, int param_6, uint param_7)
 * Address ranges: 18008c254-18008c2f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_18008c254(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
             int param_6,uint param_7)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_1800fbccc(0x170);
  if ((puVar3 != (undefined8 *)0x0) &&
     (plVar4 = FUN_18008e5e8(puVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                             *(int *)(*(longlong *)(param_1 + 8) + 0x7c) != 2),
     plVar4 != (longlong *)0x0)) {
    plVar1 = plVar4 + 0x1c;
    cVar2 = (**(code **)(*plVar4 + 0xe0))(plVar4);
    if (cVar2 != '\0') {
      return plVar1;
    }
    (**(code **)*plVar1)(plVar1,1);
  }
  return (longlong *)0x0;
}

