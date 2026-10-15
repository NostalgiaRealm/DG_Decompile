/*
 * FUN_180030608 at 180030608
 * undefined FUN_180030608(void)
 * Address ranges: 180030608-18003069b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180030608(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0 + 0x6b0);
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  if (param_2 - 0xbU < 2) {
    local_10 = 3;
  }
  else if (param_2 == 8) {
    local_10 = 0;
  }
  else if (param_2 == 9) {
    local_10 = 1;
  }
  else if (param_2 == 10) {
    local_10 = 2;
  }
  local_c = 0;
  plVar3 = (longlong *)*puVar1;
  uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3,&local_10,param_1 + 0x20);
  return ~uVar2 >> 0x1f;
}

