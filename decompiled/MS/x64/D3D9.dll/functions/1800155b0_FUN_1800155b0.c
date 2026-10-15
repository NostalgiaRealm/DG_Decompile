/*
 * FUN_1800155b0 at 1800155b0
 * undefined4 __fastcall FUN_1800155b0(longlong * param_1, char param_2)
 * Address ranges: 1800155b0-18001568f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800155b0(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint local_res8 [8];
  
  uVar3 = 0;
  if ((*(int *)((longlong)param_1 + 0x54) != 3) &&
     ((*(char *)(param_1[5] + 0x6819) == '\0' || (*(int *)((longlong)param_1 + 0x54) != 0)))) {
    FUN_1800fa780(local_res8);
    lVar1 = param_1[1];
    uVar3 = 0;
    if (((*(byte *)(lVar1 + 0x48) & 0x20) != 0) && (*(longlong *)(lVar1 + 0x30) == 0)) {
      uVar3 = 0;
      if (*(longlong *)(lVar1 + 0x28) == 0) {
        uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x60))
                          (*(longlong **)(lVar1 + 0x70),*(undefined4 *)(lVar1 + 0x94),
                           *(undefined4 *)(lVar1 + 0x98));
      }
      if ((*(longlong *)(lVar1 + 0x28) != 0) && (param_2 == '\0')) {
        *(uint *)(lVar1 + 0x48) = *(uint *)(lVar1 + 0x48) | 1;
      }
    }
    FUN_180007f2c(param_1[5],(longlong)param_1);
    FUN_1800fa7bc();
  }
  plVar2 = (longlong *)param_1[1];
  if ((plVar2[0xe] != 0) && (*(char *)((longlong)plVar2 + 0xa6) != '\0')) {
    FUN_180032e10(plVar2);
    (**(code **)(*param_1 + 0x28))
              (param_1,*(undefined4 *)((longlong)plVar2 + 0x94),(int)plVar2[0x13]);
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x18))();
  }
  *(uint *)(param_1[1] + 0x100) = *(uint *)(param_1[1] + 0x100) & 0xfffff7ff;
  return uVar3;
}

