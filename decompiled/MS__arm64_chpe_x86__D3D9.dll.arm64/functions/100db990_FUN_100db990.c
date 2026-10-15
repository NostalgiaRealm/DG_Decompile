/*
 * FUN_100db990 at 100db990
 * undefined FUN_100db990(void)
 * Address ranges: 100db990-100dba9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100db990(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (((*(uint *)(param_2 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
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
  if (*(char *)(param_2 + -0x62f0) == '\0') {
    FUN_100d8f90(param_2 + -0x66b4);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + -0x6300) + *(int *)(param_2 + -0x62f4) * 4);
    *(undefined4 *)(iVar2 + 0x4fb4) = param_1;
    *(undefined1 *)(iVar2 + 0xac21) = 1;
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return 0;
}

