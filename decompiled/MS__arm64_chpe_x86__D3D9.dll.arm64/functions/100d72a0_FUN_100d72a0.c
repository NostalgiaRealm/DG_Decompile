/*
 * FUN_100d72a0 at 100d72a0
 * undefined FUN_100d72a0(void)
 * Address ranges: 100d72a0-100d738f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d72a0(int param_1)

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
  iVar2 = FUN_10008ce0(param_1 + -0x66b4);
  if (-1 < iVar2) {
    *(undefined8 *)(param_1 + 0x1fc) = 0;
    *(undefined8 *)(param_1 + 500) = 0;
    *(undefined8 *)(param_1 + 0x20c) = 0;
    *(undefined8 *)(param_1 + 0x204) = 0;
    *(undefined8 *)(param_1 + 0x21c) = 0;
    *(undefined8 *)(param_1 + 0x214) = 0;
    *(undefined8 *)(param_1 + 0x22c) = 0;
    *(undefined8 *)(param_1 + 0x224) = 0;
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar2;
}

