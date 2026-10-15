/*
 * FUN_10005ab0 at 10005ab0
 * undefined FUN_10005ab0(void)
 * Address ranges: 10005ab0-10005b8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10005ab0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 1) {
    (*(code *)PTR_FUN_100ba2c4)(param_1,0xffffffeb,*param_4);
    return 0;
  }
  iVar2 = (*(code *)PTR_FUN_100ba228)(param_1,0xffffffeb);
  pcVar1 = (code *)PTR_FUN_100ba1c0;
  if (iVar2 != 0) {
    if (param_2 < 0x100) {
      if (1 < param_2 - 0x32) goto LAB_10005b3c;
    }
    else if (param_2 < 0x10a) {
      if ((9 < param_2 - 0x100) || ((0x2bfU >> (ulonglong)(param_2 - 0x100 & 0x1f) & 1) == 0))
      goto LAB_10005b3c;
    }
    else if (param_2 != 0x312) goto LAB_10005b3c;
    param_1 = *(undefined4 *)(iVar2 + 0x14);
    pcVar1 = (code *)PTR_FUN_100ba298;
  }
LAB_10005b3c:
  uVar3 = (*pcVar1)(param_1,param_2,param_3,param_4);
  return uVar3;
}

