/*
 * FUN_1800e62bc at 1800e62bc
 * undefined8 __fastcall FUN_1800e62bc(longlong param_1, uint param_2, undefined4 param_3, undefined8 param_4, undefined8 * param_5)
 * Address ranges: 1800e62bc-1800e6380
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800e62bc(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *local_res8 [4];
  longlong *local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = (longlong *)0x0;
  local_res8[0] = (longlong *)0x0;
  (**(code **)(param_1 + 0x220))(param_4,param_3,&local_38,local_res8);
  if (param_5 == (undefined8 *)0x0) {
    if (local_res8[0] != (longlong *)0x0) {
      (**(code **)(*local_res8[0] + 0x10))();
    }
  }
  else {
    *param_5 = local_res8[0];
  }
  plVar2 = local_38;
  if (local_38 != (longlong *)0x0) {
    uVar3 = (**(code **)(*local_38 + 0x20))(local_38);
    uVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar1 = *(longlong **)((ulonglong)param_2 * 0x20 + 0x20 + param_1);
    (**(code **)(*plVar1 + 0x80))(plVar1,0,uVar4,uVar3,&DAT_180106e20,local_30);
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return local_30[0];
}

