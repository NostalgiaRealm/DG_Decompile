/*
 * FUN_18019f750 at 18019f750
 * undefined FUN_18019f750(void)
 * Address ranges: 18019f750-18019f7ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18019f750(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *extraout_x11;
  int local_60;
  int local_5c;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if ((*(int *)(lVar2 + 0x20) == 1) && (*(int *)(lVar2 + 0x24) == 1)) {
    if (*(int *)(lVar2 + 0x30) == 0) {
      return 1;
    }
    if (*(int *)(lVar2 + 0x30) == 1) {
      uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar1,&local_60);
      if ((*(int *)(*(longlong *)(param_1 + 0x38) + 0x18) == local_60) &&
         (*(int *)(*(longlong *)(param_1 + 0x38) + 0x1c) == local_5c)) {
        return 1;
      }
    }
  }
  return 0;
}

