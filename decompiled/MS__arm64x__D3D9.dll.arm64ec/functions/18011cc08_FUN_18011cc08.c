/*
 * FUN_18011cc08 at 18011cc08
 * undefined FUN_18011cc08(void)
 * Address ranges: 18011cc08-18011cc77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011cc08(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  code *extraout_x11;
  
  if (*(uint *)(param_1 + 0x360) != 0) {
    uVar2 = 0;
    do {
      iVar1 = (int)uVar2;
      if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar2 * 4) == param_2) {
        if (iVar1 == -1 || 7 < iVar1) {
          return;
        }
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)();
        return;
      }
      uVar2 = (ulonglong)(iVar1 + 1U);
    } while (iVar1 + 1U < *(uint *)(param_1 + 0x360));
  }
  return;
}

