/*
 * FUN_18000ca28 at 18000ca28
 * undefined FUN_18000ca28(void)
 * Address ranges: 18000ca28-18000cb27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18000ca28(longlong *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  if ((*(int *)((longlong)param_1 + 0x54) != 3) &&
     ((*(char *)(param_1[5] + 0x6819) == '\0' || (*(int *)((longlong)param_1 + 0x54) != 0)))) {
    lVar2 = param_1[1];
    uVar1 = 0;
    if (((*(uint *)(lVar2 + 0x48) >> 5 & 1) != 0) && (*(longlong *)(lVar2 + 0x30) == 0)) {
      if (*(longlong *)(lVar2 + 0x28) == 0) {
        uVar1 = (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x60))
                          (*(longlong **)(lVar2 + 0x70),*(undefined4 *)(lVar2 + 0x94),
                           *(undefined4 *)(lVar2 + 0x98));
      }
      if ((*(longlong *)(lVar2 + 0x28) != 0) && ((param_2 & 1) == 0)) {
        *(uint *)(lVar2 + 0x48) = *(uint *)(lVar2 + 0x48) | 1;
      }
    }
    FUN_180005df8(param_1[5],param_1);
  }
  lVar2 = param_1[1];
  if ((*(longlong *)(lVar2 + 0x70) != 0) && (*(char *)(lVar2 + 0xa6) != '\0')) {
    FUN_180024798(lVar2);
    (**(code **)(*param_1 + 0x28))
              (param_1,*(undefined4 *)(lVar2 + 0x94),*(undefined4 *)(lVar2 + 0x98));
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x18))();
  }
  *(uint *)(param_1[1] + 0x100) = *(uint *)(param_1[1] + 0x100) & 0xfffff7ff;
  return uVar1;
}

