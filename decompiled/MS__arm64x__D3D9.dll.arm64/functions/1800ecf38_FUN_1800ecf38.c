/*
 * FUN_1800ecf38 at 1800ecf38
 * undefined FUN_1800ecf38(void)
 * Address ranges: 1800ecf38-1800ed013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800ecf38(longlong param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_40 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  (**(code **)(param_1 + 0x220))(param_4,param_3,&local_38,&local_40);
  if (param_5 == (undefined8 *)0x0) {
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  else {
    *param_5 = local_40;
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    uVar2 = (**(code **)(*local_38 + 0x20))(local_38);
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
    plVar4 = *(longlong **)(param_1 + (param_2 & 0xffffffff) * 0x20 + 0x20);
    (**(code **)(*plVar4 + 0x80))(plVar4,0,uVar3,uVar2,&DAT_18023bea0,local_30);
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return local_30[0];
}

