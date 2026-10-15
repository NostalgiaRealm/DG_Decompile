/*
 * FUN_18013e178 at 18013e178
 * undefined FUN_18013e178(void)
 * Address ranges: 18013e178-18013e21f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18013e178(longlong param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong extraout_x8;
  code *extraout_x11;
  undefined4 local_10;
  undefined4 local_c;
  
  *(ulonglong *)(param_1 + 0x18) =
       *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0 + 0x6b0;
  if (param_2 - 0xbU < 2) {
    local_10 = 3;
  }
  else if (param_2 == 8) {
    local_10 = 0;
  }
  else if (param_2 == 9) {
    local_10 = 1;
  }
  else if (param_2 == 10) {
    local_10 = 2;
  }
  local_c = 0;
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
  uVar1 = (*extraout_x11)(uVar2,&local_10,extraout_x8 + 0x20);
  return ~uVar1 >> 0x1f;
}

