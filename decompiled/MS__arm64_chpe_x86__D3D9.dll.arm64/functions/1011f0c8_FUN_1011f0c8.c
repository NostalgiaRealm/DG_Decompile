/*
 * FUN_1011f0c8 at 1011f0c8
 * undefined FUN_1011f0c8(void)
 * Address ranges: 1011f0c8-1011f15f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1011f0c8(int param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong extraout_x15;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  local_2c[0] = 0;
  local_30 = param_2;
  (*(code *)PTR_FUN_1016c074)(param_1 + 0x1c);
  uVar2 = 0;
  iVar1 = FUN_1011f580(param_1,&local_30);
  if (iVar1 != 0) {
    iVar1 = FUN_1011f7e8(iVar1 + 4,local_2c);
    if (iVar1 == 0) {
      local_2c[0] = 0xffffffff;
      iVar1 = FUN_1011f7e8(extraout_x15 & 0xffffffff,local_2c);
      if (iVar1 == 0) goto LAB_1011f13c;
    }
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
LAB_1011f13c:
  (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x1c);
  return uVar2;
}

