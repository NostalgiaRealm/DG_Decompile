/*
 * FUN_18003145c at 18003145c
 * undefined __fastcall FUN_18003145c(longlong param_1, undefined8 param_2, uint param_3, int param_4)
 * Address ranges: 18003145c-1800314e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003145c(longlong param_1,undefined8 param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  uint local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_4 != 0) {
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[0] = param_3 & 0xfffffffc;
    local_28[3] = (param_4 + 3 + (param_3 & 3) & 0xfffffffc) + local_28[0];
    local_18 = 1;
    local_14 = 1;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0x180))(plVar1,*(undefined8 *)(param_1 + 0x3208),0,local_28,param_2,0,0);
  }
  return;
}

