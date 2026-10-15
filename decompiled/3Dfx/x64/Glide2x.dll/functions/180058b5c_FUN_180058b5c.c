/*
 * FUN_180058b5c at 180058b5c
 * longlong * __fastcall FUN_180058b5c(longlong param_1, undefined4 param_2)
 * Address ranges: 180058b5c-180058c32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180058b5c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar3 = (longlong *)FUN_18005d6fc(0x20);
  if (plVar3 != (longlong *)0x0) {
    *(undefined4 *)(plVar3 + 1) = param_2;
    *plVar3 = param_1;
    plVar3[2] = 0;
    *(undefined4 *)(plVar3 + 3) = 0;
    bVar2 = FUN_180045d9c(param_1,(ulonglong)*(uint *)(plVar3 + 1),&DAT_1800651a0,0,&DAT_1800651b8,
                          0x400,in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0,plVar3 + 2);
    if (bVar2 != 0) {
      plVar1 = (longlong *)plVar3[2];
      local_18 = 0;
      local_10 = 0;
      local_res18[0] = 0;
      (**(code **)(*plVar1 + 0x40))(plVar1,0,&local_18,local_res18);
      return plVar3;
    }
    FUN_180058b34((longlong)plVar3);
    FUN_18005d720(plVar3);
  }
  return (longlong *)0x0;
}

