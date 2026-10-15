/*
 * FUN_18010a780 at 18010a780
 * undefined FUN_18010a780(void)
 * Address ranges: 18010a780-18010a8c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18010a780(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar3;
  undefined8 *extraout_x8;
  undefined4 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(&DAT_000066c0 + param_1) != param_2) {
    uVar2 = 0;
    if (param_2 != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(param_2);
      (&DAT_00006818)[param_1] = 1;
      uVar2 = extraout_x1;
    }
    if (*(longlong *)(&DAT_000066c0 + param_1) != 0) {
      *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x70) = 0;
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)();
      uVar2 = extraout_x1_00;
    }
    *(longlong *)(&DAT_000066c0 + param_1) = param_2;
    if ((param_2 == 0) || (*(longlong *)(param_2 + 0x60) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined4 *)(param_1 + 0x67e0) = uVar4;
    if (param_2 == 0) {
      uVar2 = (*(code *)puVar1)(0x180224000);
      (*extraout_x11_02)(uVar2,0,0);
      uVar3 = *(uint *)(&DAT_000067e4 + param_1) & 0xfffffffe;
    }
    else {
      *(undefined2 *)(param_2 + 0x70) = 0x101;
      uVar2 = (*(code *)puVar1)(param_2 + 0x60,*(undefined8 *)(param_1 + 0x28),uVar2,
                                *(int *)(param_2 + 0x54) == 0x66);
      (*extraout_x11_01)(uVar2,*extraout_x8);
      uVar3 = *(uint *)(&DAT_000067e4 + param_1) & 0xfffffffe;
      if (*(longlong *)(param_2 + 0x18) != 0) {
        uVar3 = *(uint *)(&DAT_000067e4 + param_1) | 1;
      }
    }
    *(uint *)(&DAT_000067e4 + param_1) = uVar3;
  }
  return 1;
}

