/*
 * FUN_180222280 at 180222280
 * undefined FUN_180222280(void)
 * Address ranges: 180222280-18022239f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180222280(longlong param_1)

{
  undefined *puVar1;
  int iVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar3 = 1;
  plVar4 = *(longlong **)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1f8) * 0x28 + 0x88);
  if (*plVar4 == 0) {
    if (*(int *)(param_1 + 0x1f8) == *(int *)(param_1 + 0x1fc)) {
      uVar3 = 0;
    }
    else {
      thunk_FUN_180223874(*(undefined8 *)
                           (param_1 + (ulonglong)*(uint *)(param_1 + 0x1f8) * 0x28 + 0xa8));
      *(uint *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1U & 7;
      *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1f8) * 0x28 + 0x88) =
           *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1f8) * 0x28 + 0x98);
    }
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(plVar4 + 2);
    *(longlong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1f8) * 0x28 + 0x88) =
         (longlong)plVar4 + plVar4[1] + 0x10;
    iVar2 = FUN_1801042d0(param_1 + 0x200);
    if (iVar2 == 0) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)(param_1 + 0x200);
    }
  }
  return uVar3;
}

