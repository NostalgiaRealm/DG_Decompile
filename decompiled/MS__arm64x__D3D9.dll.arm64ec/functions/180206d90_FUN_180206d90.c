/*
 * FUN_180206d90 at 180206d90
 * undefined FUN_180206d90(void)
 * Address ranges: 180206d90-180206e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180206d90(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar3;
  
  *param_1 = &PTR_FUN_180238d00;
  param_1[1] = &PTR_FUN_180238ca8;
  uVar1 = *(uint *)(param_1 + 0x16a);
  if (uVar1 != 0xffffffff) {
    *(byte *)(param_1[0x168] + 0x18 + (longlong)((int)uVar1 >> 3)) =
         *(byte *)(param_1[0x168] + 0x18 + (longlong)((int)uVar1 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
  }
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)();
  param_1[0xd1] = 0;
  uVar3 = 0;
  if (*(int *)((longlong)param_1 + 0xb64) != 0) {
    do {
      (*(code *)puVar2)();
      (*extraout_x11_00)();
      param_1[uVar3 + 0xd2] = 0;
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)((longlong)param_1 + 0xb64));
  }
  FUN_1802229d8(param_1[0x174]);
  FUN_1802229d8(param_1[0x166]);
  FUN_1802229d8(param_1[0x164]);
  return;
}

