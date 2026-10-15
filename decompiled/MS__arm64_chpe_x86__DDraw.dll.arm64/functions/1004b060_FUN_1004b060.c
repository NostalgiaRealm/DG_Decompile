/*
 * FUN_1004b060 at 1004b060
 * undefined FUN_1004b060(void)
 * Address ranges: 1004b060-1004b1ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1004b060(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0x80070057;
  if (((((param_5 ^ 0xffffffff) & 0x9000000) != 0) && ((param_5 & 0xf4000000) == 0)) &&
     (uVar3 = FUN_1004d630(param_5,param_6), (uVar3 & 1) != 0)) {
    iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
    if (iVar1 == 0) {
      FUN_10001c10(0);
    }
    uVar2 = 0x80004001;
    if ((param_5 & 0xf801ef) == 0) {
      iVar1 = param_1;
      if (param_3 != 0) {
        iVar1 = param_3;
      }
      if (((((((*(uint *)(iVar1 + 0x1b8) ^ *(uint *)(param_1 + 0x1b8)) >> 0x11 & 1) == 0) &&
            (uVar2 = 0x88760240, (param_5 >> 0xc & 1) == 0)) &&
           (((param_5 >> 0x11 & 1) == 0 ||
            ((iVar1 = *(int *)(param_6 + 8), iVar1 == 0xcc0020 || iVar1 == 0x42 ||
             (uVar2 = 0x88760118, iVar1 == 0xff0062)))))) &&
          (uVar2 = 0x887600dc, (param_5 & 0x6000) == 0)) &&
         (uVar2 = 0x88760122, (param_5 >> 0x12 & 1) == 0)) {
        uVar2 = FUN_1004a9a0(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  }
  return uVar2;
}

