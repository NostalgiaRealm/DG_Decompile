/*
 * FUN_1000e2f0 at 1000e2f0
 * undefined FUN_1000e2f0(void)
 * Address ranges: 1000e2f0-1000e403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000e2f0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0xb0c) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
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
  if (*(char *)(param_1 + 0x220) == '\0') {
    if (param_2 != *(int *)(param_1 + 0x58a0)) {
      *(int *)(param_1 + 0x58a0) = param_2;
      *(undefined4 *)(param_1 + 0x58a8) = 0xff;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c) * 4);
    *(int *)(iVar2 + 0x9330) = param_2;
    *(undefined1 *)(iVar2 + 0x93a3) = 1;
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return 0;
}

