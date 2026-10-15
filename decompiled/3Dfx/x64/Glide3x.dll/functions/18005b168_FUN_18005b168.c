/*
 * FUN_18005b168 at 18005b168
 * longlong * __fastcall FUN_18005b168(longlong param_1, undefined4 param_2)
 * Address ranges: 18005b168-18005b23e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18005b168(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar3 = (longlong *)FUN_180060a9c(0x20);
  if (plVar3 != (longlong *)0x0) {
    *(undefined4 *)(plVar3 + 1) = param_2;
    *plVar3 = param_1;
    plVar3[2] = 0;
    *(undefined4 *)(plVar3 + 3) = 0;
    bVar2 = FUN_1800483a8(param_1,(ulonglong)*(uint *)(plVar3 + 1),&DAT_180067430,0,&DAT_180067448,
                          0x400,in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0,plVar3 + 2);
    if (bVar2 != 0) {
      plVar1 = (longlong *)plVar3[2];
      local_18 = 0;
      local_10 = 0;
      local_res18[0] = 0;
      (**(code **)(*plVar1 + 0x40))(plVar1,0,&local_18,local_res18);
      return plVar3;
    }
    FUN_18005b140((longlong)plVar3);
    FUN_180060ac0(plVar3);
  }
  return (longlong *)0x0;
}

