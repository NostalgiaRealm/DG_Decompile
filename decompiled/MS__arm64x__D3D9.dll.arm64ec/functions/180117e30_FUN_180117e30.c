/*
 * FUN_180117e30 at 180117e30
 * undefined FUN_180117e30(void)
 * Address ranges: 180117e30-180117f63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180117e30(longlong param_1,ulonglong param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong lVar4;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x54) != 3) &&
     ((*(char *)(*(longlong *)(param_1 + 0x28) + 0x6819) == '\0' || (*(int *)(param_1 + 0x54) != 0))
     )) {
    lVar4 = *(longlong *)(param_1 + 8);
    uVar2 = 0;
    if (((*(uint *)(lVar4 + 0x48) >> 5 & 1) != 0) && (*(longlong *)(lVar4 + 0x30) == 0)) {
      if (*(longlong *)(lVar4 + 0x28) == 0) {
        uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        uVar2 = (*extraout_x11)(uVar3,*(undefined4 *)(lVar4 + 0x94),*(undefined4 *)(lVar4 + 0x98));
      }
      if ((*(longlong *)(lVar4 + 0x28) != 0) && ((param_2 & 1) == 0)) {
        *(uint *)(lVar4 + 0x48) = *(uint *)(lVar4 + 0x48) | 1;
      }
    }
    FUN_18010b470(*(undefined8 *)(param_1 + 0x28),param_1);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  if ((*(longlong *)(lVar4 + 0x70) != 0) && (*(char *)(lVar4 + 0xa6) != '\0')) {
    FUN_180131158(lVar4);
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)(param_1,*(undefined4 *)(lVar4 + 0x94),*(undefined4 *)(lVar4 + 0x98));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
  }
  *(uint *)(*(longlong *)(param_1 + 8) + 0x100) =
       *(uint *)(*(longlong *)(param_1 + 8) + 0x100) & 0xfffff7ff;
  return uVar2;
}

