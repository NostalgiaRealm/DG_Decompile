/*
 * FUN_1800192fc at 1800192fc
 * undefined __fastcall FUN_1800192fc(longlong param_1)
 * Address ranges: 1800192fc-1800193fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800192fc(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong local_res8;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar2 = FUN_180046c48(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),2);
  *(uint *)(param_1 + 0x3220) = uVar2;
  if (uVar2 != 0xffffffff) {
    FUN_180047248(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),&local_res8,uVar2,0);
    local_38 = 0x1c;
    local_34 = 6;
    local_30 = 0;
    uStack_28 = 0;
    plVar1 = *(longlong **)
              ((ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 + 0x6d0 +
              *(longlong *)(param_1 + 0x31b0));
    (**(code **)(*plVar1 + 0xa0))(plVar1,0,&local_38);
    FUN_180047248(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),&local_res10,
                  *(uint *)(param_1 + 0x3220),0);
    local_20 = 0x39;
    local_1c = 6;
    local_18 = 0;
    uStack_10 = 0;
    plVar1 = *(longlong **)
              ((ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 + 0x6d0 +
              *(longlong *)(param_1 + 0x31b0));
    (**(code **)(*plVar1 + 0xa0))(plVar1,0,&local_20,local_res10);
  }
  return;
}

