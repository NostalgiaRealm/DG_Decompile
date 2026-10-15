/*
 * _grSstWinOpenExt@32_native at 10005d80
 * undefined _grSstWinOpenExt@32_native(void)
 * Address ranges: 10005d80-10005e7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
_grSstWinOpenExt_32_native
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  iVar1 = FUN_1000ae60();
  uVar4 = FUN_1000b5c0(iVar1);
  if (((uVar4 & 1) != 0) && (*(int *)(iVar1 + 0x30) == 0)) {
    switch(param_6) {
    case 3:
switchD_10005e0c_caseD_3:
      uVar3 = FUN_1000b968(iVar1,param_1,param_2,param_3,param_4,param_6,param_5,param_7,param_8);
      return uVar3;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      uVar2 = FUN_1000cd68(iVar1);
      if (3 < uVar2) goto switchD_10005e0c_caseD_3;
    }
  }
  return 0;
}

