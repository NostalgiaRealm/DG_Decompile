/*
 * FUN_18010b668 at 18010b668
 * undefined FUN_18010b668(void)
 * Address ranges: 18010b668-18010b707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010b668(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  code *extraout_x11;
  
  if ((((param_2 == *(longlong *)(param_1 + 0x30)) || (param_2 == *(longlong *)(param_1 + 0x38))) ||
      (param_2 == *(longlong *)(param_1 + 0x40))) ||
     ((param_2 == *(longlong *)(param_1 + 0x48) || (param_2 == *(longlong *)(param_1 + 0x50))))) {
LAB_18010b6dc:
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
  }
  else if (*(longlong *)(param_2 + 0x30) != 0) {
    uVar2 = 0;
    do {
      if (*(longlong *)(param_2 + 0x30) == *(longlong *)(param_1 + 0x1338 + uVar2 * 8))
      goto LAB_18010b6dc;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < 0x10);
  }
  return;
}

