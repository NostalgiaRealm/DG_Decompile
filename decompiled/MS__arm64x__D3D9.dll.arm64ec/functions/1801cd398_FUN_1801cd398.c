/*
 * FUN_1801cd398 at 1801cd398
 * undefined FUN_1801cd398(void)
 * Address ranges: 1801cd398-1801cd40b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801cd398(float param_1,longlong param_2)

{
  uint uVar1;
  code *extraout_x11;
  
  *(float *)(param_2 + 0xc4e0) = param_1;
  if ((*(uint *)(*(longlong *)(&DAT_00006898 + param_2) + 0x1c) >> 0x18 & 1) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0x9eb);
    if (uVar1 < 9) {
      if (uVar1 != 0) {
        param_1 = (float)uVar1;
      }
    }
    else {
      param_1 = 8.0;
    }
    (*(code *)__hybrid_os_arm64x_dispatch_icall)
              (0x180225000,param_1,*(undefined8 *)(param_2 + 0x28),uVar1 != 0);
    (*extraout_x11)();
  }
  return;
}

