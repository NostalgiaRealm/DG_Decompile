/*
 * FUN_18003ca88 at 18003ca88
 * bool __fastcall FUN_18003ca88(longlong param_1, longlong param_2, uint param_3, int param_4)
 * Address ranges: 18003ca88-18003cb0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18003ca88(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  bool bVar2;
  uint local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  bVar2 = *(int *)(param_1 + 0x30) != 1;
  if (bVar2) {
    local_18 = 1;
    local_28[3] = param_3 + param_4;
    local_14 = 1;
    local_28[1] = 0;
    local_28[2] = 0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    local_28[0] = param_3;
    (**(code **)(*plVar1 + 0x180))
              (plVar1,*(undefined8 *)(param_1 + 0x20),0,local_28,(ulonglong)param_3 + param_2,0,0);
  }
  return bVar2;
}

