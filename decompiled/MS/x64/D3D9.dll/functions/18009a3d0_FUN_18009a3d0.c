/*
 * FUN_18009a3d0 at 18009a3d0
 * longlong * __fastcall FUN_18009a3d0(longlong * param_1, int * param_2, undefined8 param_3, int * param_4, int param_5)
 * Address ranges: 18009a3d0-18009a46c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18009a3d0(longlong *param_1,int *param_2,undefined8 param_3,int *param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 in_stack_ffffffffffffffa0;
  int local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  plVar1 = FUN_1800f3050(*(longlong *)((longlong)param_1 + 0xc) + 0x18b8,param_2,0,param_4);
  if (plVar1 != (longlong *)0x0) goto LAB_18009a458;
  piVar2 = (int *)0x0;
  if (param_5 != 0) {
    local_48 = param_5;
    if ((*(byte *)(param_4 + 0xc) & 1) == 0) {
      if ((*(byte *)(param_4 + 0xc) & 2) == 0) goto LAB_18009a435;
      local_44 = CONCAT35(local_44._5_3_,0x3f800000);
    }
    else {
      local_44 = 0;
      local_3c = 0;
    }
    piVar2 = &local_48;
  }
LAB_18009a435:
  plVar1 = (longlong *)
           FUN_1800f3338(*param_1,(ulonglong)*(uint *)(param_1 + 1),param_2,0,param_4,
                         in_stack_ffffffffffffffa0,piVar2);
  if (plVar1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
LAB_18009a458:
  (**(code **)(*plVar1 + 8))(plVar1);
  return plVar1;
}

