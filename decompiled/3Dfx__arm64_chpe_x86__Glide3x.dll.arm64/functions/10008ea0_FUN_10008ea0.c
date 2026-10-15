/*
 * FUN_10008ea0 at 10008ea0
 * undefined FUN_10008ea0(void)
 * Address ranges: 10008ea0-10008f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10008ea0(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  
  uVar1 = 0;
  uVar3 = FUN_10009ae0(param_1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  switch(param_2) {
  case 0:
  case 6:
    return 1;
  case 1:
    iVar2 = FUN_1000ae88(param_1);
    puVar4 = &DAT_100a23f3;
    break;
  case 2:
    iVar2 = FUN_1000ae88(param_1);
    puVar4 = &DAT_100a23f4;
    break;
  case 3:
    iVar2 = FUN_1000ae88(param_1);
    puVar4 = &DAT_100a23f1;
    break;
  case 4:
    uVar3 = FUN_10009430(param_1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  case 5:
    iVar2 = FUN_1000ae88(param_1);
    uVar1 = iVar2 == 4;
  default:
    goto switchD_10008edc_default;
  }
  uVar1 = puVar4[iVar2 * 0x18];
switchD_10008edc_default:
  return uVar1;
}

