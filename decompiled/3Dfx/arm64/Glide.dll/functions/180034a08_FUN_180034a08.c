/*
 * FUN_180034a08 at 180034a08
 * undefined __cdecl FUN_180034a08(longlong param_1, undefined8 param_2, uint param_3, int param_4)
 * Address ranges: 180034a08-180034ac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034a08(longlong param_1,undefined8 param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  uint local_40 [4];
  undefined8 local_30;
  
  FUN_180038ea8(param_1 + 0x3ae0,0,0);
  FUN_18001e6a0(param_1);
  if (param_4 != 0) {
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[0] = param_3 & 0xfffffffc;
    local_40[3] = ((param_3 & 3) + param_4 + 3 & 0xfffffffc) + local_40[0];
    local_30 = 0x100000001;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0x180))(plVar1,*(undefined8 *)(param_1 + 0x3208),0,local_40,param_2,0,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

