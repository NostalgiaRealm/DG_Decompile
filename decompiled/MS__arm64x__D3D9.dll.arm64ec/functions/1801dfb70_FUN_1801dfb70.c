/*
 * FUN_1801dfb70 at 1801dfb70
 * undefined FUN_1801dfb70(void)
 * Address ranges: 1801dfb70-1801dfc37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801dfb70(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  code *extraout_x11;
  ulonglong uVar3;
  
  uVar3 = 0;
  while (iVar2 = FUN_180222c00(param_2,&DAT_18022eef8 + uVar3 * 0x10,0x10), iVar2 != 0) {
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
    if (2 < uVar1) {
      return 0x80004002;
    }
  }
  iVar2 = FUN_1801042e0(param_1 + 0x28);
  *param_3 = *(undefined8 *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    return 0;
  }
  if (iVar2 != 1) {
    return 0;
  }
  FUN_1801042e0(*(longlong *)(param_1 + 0x38) + 0x6844);
  return 0;
}

