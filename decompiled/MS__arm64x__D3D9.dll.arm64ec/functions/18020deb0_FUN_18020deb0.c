/*
 * FUN_18020deb0 at 18020deb0
 * undefined FUN_18020deb0(void)
 * Address ranges: 18020deb0-18020dfa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18020deb0(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,
             longlong param_5)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined4 uVar5;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar2 = (*extraout_x11)();
  if (uVar2 < (ulonglong)param_2[3]) {
    lVar4 = param_2[1];
    if (param_4 == *param_2) {
      if (param_5 == lVar4) {
        uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      }
      else if (lVar4 != -1) {
        FUN_180207560(lVar4 + 8,0);
      }
    }
    else {
      if (lVar4 != -1) {
        FUN_180207560(lVar4 + 8,0);
      }
      if (param_5 != -1) {
        FUN_180207560(param_5 + 8,0);
      }
      lVar4 = *param_2;
      uVar3 = (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)(uVar3,*(undefined8 *)(lVar4 + 0x18),param_2[3]);
    }
  }
  return uVar5;
}

