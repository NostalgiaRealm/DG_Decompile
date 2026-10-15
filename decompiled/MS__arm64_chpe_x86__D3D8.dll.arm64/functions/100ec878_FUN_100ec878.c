/*
 * FUN_100ec878 at 100ec878
 * undefined FUN_100ec878(void)
 * Address ranges: 100ec878-100ec90f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ec878(int param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong extraout_x15;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  local_2c[0] = 0;
  local_30 = param_2;
  (*(code *)PTR_FUN_10134070)(param_1 + 0x1c);
  uVar2 = 0;
  iVar1 = FUN_100ecd30(param_1,&local_30);
  if (iVar1 != 0) {
    iVar1 = FUN_100ecf98(iVar1 + 4,local_2c);
    if (iVar1 == 0) {
      local_2c[0] = 0xffffffff;
      iVar1 = FUN_100ecf98(extraout_x15 & 0xffffffff,local_2c);
      if (iVar1 == 0) goto LAB_100ec8ec;
    }
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
LAB_100ec8ec:
  (*(code *)PTR_FUN_101340bc)(param_1 + 0x1c);
  return uVar2;
}

