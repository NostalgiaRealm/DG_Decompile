/*
 * FUN_10078a28 at 10078a28
 * undefined FUN_10078a28(void)
 * Address ranges: 10078a28-10078abf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10078a28(int param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong extraout_x15;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  local_2c[0] = 0;
  local_30 = param_2;
  (*(code *)PTR_FUN_100ba0a0)(param_1 + 0x1c);
  uVar2 = 0;
  iVar1 = FUN_10078e68(param_1,&local_30);
  if (iVar1 != 0) {
    iVar1 = FUN_100790d0(iVar1 + 4,local_2c);
    if (iVar1 == 0) {
      local_2c[0] = 0xffffffff;
      iVar1 = FUN_100790d0(extraout_x15 & 0xffffffff,local_2c);
      if (iVar1 == 0) goto LAB_10078a9c;
    }
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
LAB_10078a9c:
  (*(code *)PTR_FUN_100ba0f0)(param_1 + 0x1c);
  return uVar2;
}

