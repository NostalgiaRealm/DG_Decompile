/*
 * FUN_18013de18 at 18013de18
 * undefined FUN_18013de18(void)
 * Address ranges: 18013de18-18013dea3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18013de18(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong extraout_x8;
  code *extraout_x11;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = *(undefined4 *)(param_1 + 0x28);
  *(ulonglong *)(param_1 + 0x18) =
       *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0 + 0x6b0;
  bVar1 = *(int *)(param_1 + 0x30) != 1;
  uStack_1c = 2;
  if (bVar1) {
    uStack_1c = 0;
  }
  uStack_14 = 0x10000;
  if (bVar1) {
    uStack_14 = 0;
  }
  local_18 = 2;
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
  uVar2 = (*extraout_x11)(uVar3,&local_20,0,extraout_x8 + 0x20);
  return ~uVar2 >> 0x1f;
}

