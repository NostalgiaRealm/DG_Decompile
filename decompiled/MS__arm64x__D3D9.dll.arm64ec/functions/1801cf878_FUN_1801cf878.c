/*
 * FUN_1801cf878 at 1801cf878
 * undefined FUN_1801cf878(void)
 * Address ranges: 1801cf878-1801cf9bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801cf878(float param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  code *extraout_x11;
  
  if (((*(uint *)(param_2 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar3 == 0) {
      FUN_1801085c8();
    }
  }
  if (*(char *)(param_2 + -0x642c) == '\0') {
    *(float *)(param_2 + 0x5ca8) = param_1;
    if ((*(uint *)(*(longlong *)(param_2 + 0x60) + 0x1c) >> 0x18 & 1) != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_2 + -0x6820) + 0x9eb);
      if (uVar1 < 9) {
        if (uVar1 != 0) {
          param_1 = (float)uVar1;
        }
      }
      else {
        param_1 = 8.0;
      }
      (*(code *)__hybrid_os_arm64x_dispatch_icall)
                (0x180225000,param_1,*(undefined8 *)(param_2 + -0x6810),uVar1 != 0);
      (*extraout_x11)();
    }
  }
  else {
    lVar4 = *(longlong *)
             (*(longlong *)(param_2 + -0x6440) + (ulonglong)*(uint *)(param_2 + -0x6430) * 8);
    *(float *)(lVar4 + 0x4fe8) = param_1;
    *(undefined1 *)(lVar4 + 0xacfd) = 1;
  }
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return 0;
}

