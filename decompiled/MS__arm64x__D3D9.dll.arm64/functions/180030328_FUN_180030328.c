/*
 * FUN_180030328 at 180030328
 * undefined FUN_180030328(void)
 * Address ranges: 180030328-18003039f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180030328(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = *(undefined4 *)(param_1 + 0x28);
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0 + 0x6b0);
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  bVar2 = *(int *)(param_1 + 0x30) != 1;
  uStack_1c = 2;
  if (bVar2) {
    uStack_1c = 0;
  }
  uStack_14 = 0x10000;
  if (bVar2) {
    uStack_14 = 0;
  }
  local_18 = 2;
  plVar4 = (longlong *)*puVar1;
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_20,0,param_1 + 0x20);
  return ~uVar3 >> 0x1f;
}

