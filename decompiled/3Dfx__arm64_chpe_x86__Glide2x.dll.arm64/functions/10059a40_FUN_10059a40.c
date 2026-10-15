/*
 * FUN_10059a40 at 10059a40
 * undefined FUN_10059a40(void)
 * Address ranges: 10059a40-10059ad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10059a40(int param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong extraout_x15;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  local_2c[0] = 0;
  local_30 = param_2;
  (*(code *)PTR_FUN_1009d03c)(param_1 + 0x1c);
  uVar2 = 0;
  iVar1 = FUN_10059ce8(param_1,&local_30);
  if (iVar1 != 0) {
    iVar1 = FUN_10059f50(iVar1 + 4,local_2c);
    if (iVar1 == 0) {
      local_2c[0] = 0xffffffff;
      iVar1 = FUN_10059f50(extraout_x15 & 0xffffffff,local_2c);
      if (iVar1 == 0) goto LAB_10059ab4;
    }
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
LAB_10059ab4:
  (*(code *)PTR_FUN_1009d090)(param_1 + 0x1c);
  return uVar2;
}

