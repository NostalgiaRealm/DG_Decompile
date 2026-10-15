/*
 * FUN_18003c93c at 18003c93c
 * uint __fastcall FUN_18003c93c(longlong param_1)
 * Address ranges: 18003c93c-18003c9b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003c93c(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = *(undefined4 *)(param_1 + 0x28);
  puVar3 = (undefined8 *)
           (*(longlong *)(param_1 + 8) + 0x6b0 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0);
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  local_24 = 0;
  if (*(int *)(param_1 + 0x30) == 1) {
    local_24 = 2;
  }
  local_20 = 2;
  local_1c = 0;
  if (*(int *)(param_1 + 0x30) == 1) {
    local_1c = 0x10000;
  }
  plVar1 = (longlong *)*puVar3;
  uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,0,param_1 + 0x20);
  return uVar2 >> 0x1f ^ 1;
}

