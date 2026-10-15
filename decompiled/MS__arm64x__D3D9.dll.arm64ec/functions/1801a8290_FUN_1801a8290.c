/*
 * FUN_1801a8290 at 1801a8290
 * undefined FUN_1801a8290(void)
 * Address ranges: 1801a8290-1801a83ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801a8290(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  longlong lVar5;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  uVar2 = *(uint *)(param_1 + 0x2c);
  lVar5 = *(longlong *)(param_1 + 0x130);
  if (uVar2 < 0xe) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    lVar4 = (*extraout_x11)();
    lVar1 = lVar5 + (ulonglong)uVar2 * 4;
    *param_2 = lVar4 + (longlong)((int)*(char *)(lVar1 + 0x58) << 10) * 4;
    (*(code *)puVar3)(0x180224000);
    lVar4 = (*extraout_x11_00)();
    *param_3 = lVar4 + (longlong)((int)*(char *)(lVar1 + 0x59) << 10) * 4;
    (*(code *)puVar3)(0x180224000);
    lVar4 = (*extraout_x11_01)();
    *param_4 = lVar4 + (longlong)((int)*(char *)(lVar1 + 0x5a) << 10) * 4;
    (*(code *)puVar3)(0x180224000);
    lVar4 = (*extraout_x11_02)();
    *param_5 = lVar4 + (longlong)((int)*(char *)(lVar1 + 0x5b) << 10) * 4;
  }
  return *(undefined8 *)(lVar5 + 0x1cf20);
}

