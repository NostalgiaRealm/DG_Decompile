/*
 * FUN_10059ec0 at 10059ec0
 * undefined FUN_10059ec0(void)
 * Address ranges: 10059ec0-10059f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10059ec0(int param_1,undefined4 param_2)

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
  iVar1 = FUN_1005a168(param_1,&local_30);
  if (iVar1 != 0) {
    iVar1 = FUN_1005a3d0(iVar1 + 4,local_2c);
    if (iVar1 == 0) {
      local_2c[0] = 0xffffffff;
      iVar1 = FUN_1005a3d0(extraout_x15 & 0xffffffff,local_2c);
      if (iVar1 == 0) goto LAB_10059f34;
    }
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
LAB_10059f34:
  (*(code *)PTR_FUN_1009d090)(param_1 + 0x1c);
  return uVar2;
}

