/*
 * FUN_1000a8c8 at 1000a8c8
 * undefined FUN_1000a8c8(void)
 * Address ranges: 1000a8c8-1000a987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1000a8c8(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  
  uVar1 = 0;
  uVar3 = FUN_1000b5c0(param_1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  switch(param_2) {
  case 0:
  case 6:
    return 1;
  case 1:
    iVar2 = FUN_1000cd68(param_1);
    puVar4 = &DAT_100aa5c3;
    break;
  case 2:
    iVar2 = FUN_1000cd68(param_1);
    puVar4 = &DAT_100aa5c4;
    break;
  case 3:
    iVar2 = FUN_1000cd68(param_1);
    puVar4 = &DAT_100aa5c1;
    break;
  case 4:
    uVar3 = FUN_1000af10(param_1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  case 5:
    iVar2 = FUN_1000cd68(param_1);
    uVar1 = iVar2 == 4;
  default:
    goto switchD_1000a904_default;
  }
  uVar1 = puVar4[iVar2 * 0x18];
switchD_1000a904_default:
  return uVar1;
}

