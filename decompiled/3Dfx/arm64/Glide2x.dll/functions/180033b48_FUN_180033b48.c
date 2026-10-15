/*
 * FUN_180033b48 at 180033b48
 * undefined __cdecl FUN_180033b48(longlong param_1, undefined8 param_2, uint param_3, int param_4)
 * Address ranges: 180033b48-180033bb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180033b48(longlong param_1,undefined8 param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  uint local_20 [4];
  undefined8 local_10;
  
  if (param_4 != 0) {
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[0] = param_3 & 0xfffffffc;
    local_20[3] = ((param_3 & 3) + param_4 + 3 & 0xfffffffc) + local_20[0];
    local_10 = 0x100000001;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0x180))(plVar1,*(undefined8 *)(param_1 + 0x3208),0,local_20,param_2,0,0);
  }
  return;
}

