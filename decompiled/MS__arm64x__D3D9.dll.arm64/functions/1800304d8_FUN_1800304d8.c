/*
 * FUN_1800304d8 at 1800304d8
 * undefined FUN_1800304d8(void)
 * Address ranges: 1800304d8-18003054b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800304d8(longlong param_1,longlong param_2,uint param_3,int param_4)

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
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    local_30[0] = param_3;
    (**(code **)(*plVar2 + 0x180))
              (plVar2,*(undefined8 *)(param_1 + 0x20),0,local_30,param_2 + (ulonglong)param_3,0,0);
  }
  return bVar1;
}

