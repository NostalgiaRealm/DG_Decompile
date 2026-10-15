/*
 * FUN_180058824 at 180058824
 * undefined __fastcall FUN_180058824(longlong * param_1, ulonglong param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 180058824-1800588f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058824(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 local_res8 [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar7 = param_2 & 0xffffffff;
  *(undefined8 *)(*param_1 + uVar7 * 0x28) = param_3;
  lVar2 = *param_1;
  uVar4 = *(undefined4 *)((longlong)param_4 + 4);
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0xc);
  puVar1 = (undefined4 *)(lVar2 + 8 + uVar7 * 0x28);
  *puVar1 = *(undefined4 *)param_4;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(lVar2 + 0x18 + uVar7 * 0x28) = param_4[2];
  local_68 = *param_4;
  if ((longlong *)param_4[1] == (longlong *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = (**(code **)(*(longlong *)param_4[1] + 0x18))();
  }
  if ((longlong *)param_4[1] == (longlong *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = (**(code **)(*(longlong *)param_4[1] + 0x20))();
  }
  local_50 = *(undefined4 *)(param_4 + 2);
  local_38 = *(undefined4 *)((longlong)param_4 + 0x14);
  local_48 = 0;
  local_40 = 0;
  local_res8[0] = 0;
  plVar3 = *(longlong **)((ulonglong)*(uint *)(param_1 + 4) * 0x20 + param_1[3]);
  (**(code **)(*plVar3 + 0x58))(plVar3,&local_68,&DAT_180063e08,local_res8);
  *(undefined8 *)(*param_1 + 0x20 + uVar7 * 0x28) = local_res8[0];
  return;
}

