/*
 * FUN_180028570 at 180028570
 * undefined __cdecl FUN_180028570(longlong param_1, undefined8 param_2, uint param_3, int param_4)
 * Address ranges: 180028570-180028653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028570(longlong param_1,undefined8 param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  uint uVar2;
  uint local_40 [4];
  undefined8 local_30;
  
  FUN_18002d0f8(param_1 + 0x4260,0,0);
  FUN_180011b28(param_1);
  if (param_4 != 0) {
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[0] = param_3 & 0xfffffffc;
    local_40[3] = ((param_3 & 3) + param_4 + 3 & 0xfffffffc) + local_40[0];
    local_30 = 0x100000001;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar1 + 0x180))(plVar1,*(undefined8 *)(param_1 + 0x3388),0,local_40,param_2,0,0);
  }
  uVar2 = 3;
  do {
    FUN_18002e118(param_1,uVar2,param_3,param_3 + param_4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return;
}

