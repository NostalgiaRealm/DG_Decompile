/*
 * FUN_100e46e0 at 100e46e0
 * undefined FUN_100e46e0(void)
 * Address ranges: 100e46e0-100e4813
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100e46e0(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar2 == 0) {
      FUN_100071d0(0);
    }
  }
  *param_3 = 0;
  iVar2 = *(int *)(param_1 + param_2 * 4 + -0x545c);
  if (iVar2 != 0) {
    switch(*(undefined4 *)(iVar2 + 0x18)) {
    case 3:
      *param_3 = iVar2 + 0x78;
      FUN_100d2130(iVar2 + 0x78);
      break;
    case 4:
      *param_3 = iVar2 + 200;
      FUN_100ed0a0(iVar2 + 200);
      break;
    case 5:
      *param_3 = iVar2 + 0x78;
      FUN_100d2130(iVar2 + 0x78);
    }
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return 0;
}

