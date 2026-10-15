/*
 * FUN_180030950 at 180030950
 * undefined FUN_180030950(void)
 * Address ranges: 180030950-1800309c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180030950(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  bool bVar1;
  longlong *plVar2;
  uint local_30 [4];
  undefined8 local_20;
  
  bVar1 = *(int *)(param_1 + 0x30) != 1;
  if (bVar1) {
    local_30[3] = param_3 + param_4;
    local_20 = 0x100000001;
    local_30[1] = 0;
    local_30[2] = 0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
    local_30[0] = param_3;
    (**(code **)(*plVar2 + 0x180))
              (plVar2,*(undefined8 *)(param_1 + 0x18),0,local_30,param_2 + (ulonglong)param_3,0,0);
  }
  return bVar1;
}

