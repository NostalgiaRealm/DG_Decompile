/*
 * FUN_100bcc40 at 100bcc40
 * undefined FUN_100bcc40(void)
 * Address ranges: 100bcc40-100bcd73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100bcc40(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar2 == 0) {
      FUN_10006560(0);
    }
  }
  *param_3 = 0;
  iVar2 = *(int *)(param_1 + param_2 * 4 + -0x494c);
  if (iVar2 != 0) {
    switch(*(undefined4 *)(iVar2 + 0x18)) {
    case 3:
      *param_3 = iVar2 + 0x78;
      FUN_100b0d10(iVar2 + 0x78);
      break;
    case 4:
      *param_3 = iVar2 + 200;
      FUN_100c17a0(iVar2 + 200);
      break;
    case 5:
      *param_3 = iVar2 + 0x78;
      FUN_100b0d10(iVar2 + 0x78);
    }
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return 0;
}

