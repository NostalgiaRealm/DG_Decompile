/*
 * FUN_18019fb78 at 18019fb78
 * undefined FUN_18019fb78(void)
 * Address ranges: 18019fb78-18019fc8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18019fb78(longlong param_1,ulonglong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  int local_30 [8];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if ((param_2 & 1) != 0) {
    if (*(longlong *)(param_1 + 0x50) == 0) {
      uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar2,local_30);
      if (local_30[0] == 0x1c) {
        local_30[0] = 0x1d;
      }
      else if (local_30[0] == 0x47) {
        local_30[0] = 0x48;
      }
      else if (local_30[0] == 0x4a) {
        local_30[0] = 0x4b;
      }
      else if (local_30[0] == 0x4d) {
        local_30[0] = 0x4e;
      }
      else {
        local_30[0] = 0;
      }
      if (local_30[0] == 0) {
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_01)();
      }
      else {
        uVar2 = (*(code *)puVar1)(0x180224000);
        (*extraout_x11_00)(uVar2,*(undefined8 *)(param_1 + 0x40),local_30,param_1 + 0x50);
      }
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      return *(longlong *)(param_1 + 0x50);
    }
  }
  return *(longlong *)(param_1 + 0x48);
}

