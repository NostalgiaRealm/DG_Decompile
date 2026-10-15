/*
 * FUN_180209348 at 180209348
 * undefined FUN_180209348(void)
 * Address ranges: 180209348-1802093e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180209348(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 0x468) != *param_2) ||
      (*(int *)(param_1 + 0x474) != *(int *)((longlong)param_2 + 0xc))) ||
     (*(int *)(param_1 + 0x470) != (int)param_2[1])) {
    FUN_180206ff8(param_1);
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,param_2);
    *(undefined1 *)(param_1 + 0x674) = 1;
    lVar2 = *param_2;
    *(longlong *)(param_1 + 0x470) = param_2[1];
    *(longlong *)(param_1 + 0x468) = lVar2;
  }
  return;
}

