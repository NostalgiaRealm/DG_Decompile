/*
 * FUN_180208a18 at 180208a18
 * undefined FUN_180208a18(void)
 * Address ranges: 180208a18-180208adf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180208a18(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  code *extraout_x11;
  ulonglong uVar5;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x44);
    uVar3 = 0;
    do {
      uVar5 = 0;
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          if (*(longlong *)(param_1 + 0x48 + uVar5 * 8) == *(longlong *)(param_3 + uVar3 * 8))
          goto LAB_180208a70;
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < uVar1);
      }
      if (uVar4 == uVar1) {
        FUN_180206ff8(param_1);
        uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)(uVar2,param_2,param_3);
        *(uint *)(param_1 + 0x44) = param_2;
        *(undefined1 *)(param_1 + 0x674) = 1;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(param_1 + 0x48,param_3,(ulonglong)param_2 << 3);
      }
LAB_180208a70:
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < param_2);
  }
  return;
}

