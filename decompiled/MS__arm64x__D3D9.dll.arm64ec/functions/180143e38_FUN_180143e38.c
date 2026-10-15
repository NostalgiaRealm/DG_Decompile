/*
 * FUN_180143e38 at 180143e38
 * undefined FUN_180143e38(void)
 * Address ranges: 180143e38-180143eeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180143e38(longlong param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined1 auStack_30 [16];
  longlong local_20;
  
  uVar2 = FUN_180143618();
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 1) {
      lVar4 = *(longlong *)
               (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(lVar4 + 0x40,auStack_30,2,0,0);
      if (local_20 != 0) {
        lVar4 = *(longlong *)
                 (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_00)(lVar4 + 0x40);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

