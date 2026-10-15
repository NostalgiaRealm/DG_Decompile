/*
 * FUN_180133630 at 180133630
 * undefined FUN_180133630(void)
 * Address ranges: 180133630-1801336ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180133630(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *extraout_x11;
  undefined8 local_20;
  uint local_18 [6];
  
  local_20 = 0;
  local_18[0] = param_2 + 0xfU & 0xfffffff0;
  local_18[1] = 2;
  local_18[2] = 4;
  local_18[3] = 0x10000;
  local_18[4] = 0;
  local_18[5] = local_18[0];
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar1 = (*extraout_x11)(uVar2,local_18,0,&local_20);
  if (iVar1 < 0) {
    local_20 = 0;
  }
  return local_20;
}

