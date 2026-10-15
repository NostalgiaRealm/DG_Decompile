/*
 * FUN_1800959e0 at 1800959e0
 * undefined FUN_1800959e0(void)
 * Address ranges: 1800959e0-180095a77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800959e0(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  plVar1 = (longlong *)*param_1;
  if (((int)plVar1[7] != 0) && (*(char *)((longlong)plVar1 + 0x4c) != *(char *)(param_1 + 1))) {
    *(char *)((longlong)plVar1 + 0x4c) = *(char *)(param_1 + 1);
    uVar2 = 0;
    if (*(int *)((longlong)plVar1 + 0x34) != 0) {
      do {
        local_20 = 0;
        local_18 = FUN_1800a2b50(plVar1,*(undefined4 *)((longlong)plVar1 + 0x24),0);
        local_14 = FUN_1800a2b98(plVar1,(int)plVar1[5]);
        (**(code **)(*plVar1 + 0x18))(plVar1,*(int *)((longlong)plVar1 + 0x3c) * uVar2,&local_20);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((longlong)plVar1 + 0x34));
    }
  }
  return;
}

