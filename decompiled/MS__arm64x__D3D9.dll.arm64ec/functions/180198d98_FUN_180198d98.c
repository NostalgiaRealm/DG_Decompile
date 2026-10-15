/*
 * FUN_180198d98 at 180198d98
 * undefined FUN_180198d98(void)
 * Address ranges: 180198d98-180198eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180198d98(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined1 auVar3 [16];
  uint local_40 [8];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return;
  }
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar2,local_40);
  if ((local_40[0] < 0x19) && ((0x1000800U >> (ulonglong)(local_40[0] & 0x1f) & 1) != 0)) {
LAB_180198e20:
    if (local_40[0] == 0) goto LAB_180198e80;
  }
  else if (local_40[0] == 0x1c) {
    local_40[0] = 0x1d;
  }
  else if (local_40[0] == 0x47) {
    local_40[0] = 0x48;
  }
  else if (local_40[0] == 0x4a) {
    local_40[0] = 0x4b;
  }
  else {
    if (local_40[0] != 0x4d) {
      local_40[0] = 0;
      goto LAB_180198e20;
    }
    local_40[0] = 0x4e;
  }
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x18);
  }
  auVar3 = (*(code *)puVar1)(0x180224000,**(undefined8 **)(param_1 + 0x10),param_2);
  (*extraout_x11_00)(auVar3._0_8_,auVar3._8_8_,local_40,param_1 + 0x38);
LAB_180198e80:
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x28);
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
  }
  return;
}

