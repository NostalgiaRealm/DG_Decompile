/*
 * FUN_18009ade0 at 18009ade0
 * undefined __fastcall FUN_18009ade0(longlong * param_1, byte param_2, longlong param_3)
 * Address ranges: 18009ade0-18009af0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009ade0(longlong *param_1,byte param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong local_res8;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((int)param_1[7] != -1) {
    return;
  }
  iVar1 = (int)param_1[8];
  if (iVar1 == 0x1c) {
    uVar4 = 0x1d;
  }
  else if (iVar1 == 0x47) {
    uVar4 = 0x48;
  }
  else if (iVar1 == 0x4a) {
    uVar4 = 0x4b;
  }
  else {
    if (iVar1 != 0x4d) {
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)((longlong)param_1 + 0x2c);
      return;
    }
    uVar4 = 0x4e;
  }
  uVar3 = FUN_1800e1704(*(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),1);
  *(uint *)(param_1 + 7) = uVar3;
  if (uVar3 == 0xffffffff) {
    return;
  }
  local_44 = (uint)param_2 * 4 + 5;
  local_40 = 0x1688;
  local_38 = 0;
  uStack_2c = 0;
  if (local_44 == 5) {
    uStack_2c = 1;
  }
  else if (local_44 != 9) goto LAB_18009aeaf;
  local_38 = 0xffffffff00000000;
LAB_18009aeaf:
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  local_48 = uVar4;
  FUN_1800e1d04(*(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),&local_res8,uVar3,0);
  if (param_3 == 0) {
    param_3 = *(longlong *)((longlong)param_1 + 0x14);
  }
  plVar2 = *(longlong **)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6d0 + *param_1);
  (**(code **)(*plVar2 + 0x90))(plVar2,param_3,&local_48,local_res8);
  return;
}

