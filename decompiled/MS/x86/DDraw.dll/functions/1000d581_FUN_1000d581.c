/*
 * FUN_1000d581 at 1000d581
 * undefined __fastcall FUN_1000d581(void * param_1)
 * Address ranges: 1000d581-1000d60e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000d581(void *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_100221f0(param_1,&local_18);
  if (*(char *)((int)param_1 + 0x150) != '\0') {
    iVar1 = 0x34;
    if (*(int *)((int)param_1 + 0x1c) != 0x15) {
      iVar1 = 0x24;
    }
    local_14 = *(undefined4 *)(iVar1 + *(int *)((int)param_1 + 4));
  }
  local_28 = 0;
  local_24 = 0xffffffff;
  bVar2 = *(int *)((int)param_1 + 0x24) == 1;
  if (bVar2) {
    local_2c = 5;
  }
  else {
    local_2c = 9;
  }
  local_1c = (uint)bVar2;
  local_20 = 0;
  local_30 = local_14;
  (**(code **)(*(int *)**(undefined4 **)((int)param_1 + 0x44) + 0x1c))
            ((int *)**(undefined4 **)((int)param_1 + 0x44),*(undefined4 *)((int)param_1 + 0x54),
             &local_30,(int)param_1 + 0xc0);
  return;
}

