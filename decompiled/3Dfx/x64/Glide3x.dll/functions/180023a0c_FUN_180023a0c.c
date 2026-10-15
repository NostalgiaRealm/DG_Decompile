/*
 * FUN_180023a0c at 180023a0c
 * undefined __fastcall FUN_180023a0c(longlong param_1, undefined8 param_2, uint param_3, int param_4)
 * Address ranges: 180023a0c-180023a91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023a0c(longlong param_1,undefined8 param_2,uint param_3,int param_4)

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
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar1 + 0x180))(plVar1,*(undefined8 *)(param_1 + 0x3388),0,local_28,param_2,0,0);
  }
  return;
}

