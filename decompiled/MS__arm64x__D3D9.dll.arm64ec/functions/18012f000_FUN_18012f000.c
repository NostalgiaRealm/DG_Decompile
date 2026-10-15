/*
 * FUN_18012f000 at 18012f000
 * undefined FUN_18012f000(void)
 * Address ranges: 18012f000-18012f0e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012f000(longlong param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar3 = (*extraout_x11)();
  if (lVar3 == 0) {
    (*(code *)puVar2)(0x180224000);
    uVar4 = (*extraout_x11_00)(param_1);
    if (((uVar4 & 0xff) == 0) && (uVar4 = FUN_18012f210(), (uVar4 & 1) != 0)) {
      uVar5 = thunk_FUN_180223e8c();
      uVar4 = FUN_18012f280();
      if (uVar5 != uVar4) {
        uVar1 = *(ulonglong *)(param_1 + 0x28);
        if (*(ulonglong *)(param_1 + 0x28) == 0xffffffffffffffff) {
          uVar1 = uVar5;
        }
        (*(code *)puVar2)(0x180224000,uVar4,uVar1);
        uVar6 = (*extraout_x11_01)(param_1);
        uVar4 = FUN_18012f2d0(uVar6,uVar4);
      }
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    (*(code *)puVar2)(0x180224000,uVar4,uVar6);
    (*extraout_x11_02)(param_1);
  }
  return;
}

