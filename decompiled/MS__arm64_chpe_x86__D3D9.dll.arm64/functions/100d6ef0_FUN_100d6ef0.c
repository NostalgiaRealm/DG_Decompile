/*
 * FUN_100d6ef0 at 100d6ef0
 * undefined FUN_100d6ef0(void)
 * Address ranges: 100d6ef0-100d704f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d6ef0(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
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
  if (*(char *)(param_1 + -0x62f0) == '\0') {
    *(undefined4 *)(param_1 + -0x6688) = *param_2;
    *(undefined4 *)(param_1 + -0x6684) = param_2[1];
    *(undefined4 *)(param_1 + -0x6680) = param_2[2];
    *(undefined4 *)(param_1 + -0x667c) = param_2[3];
    uVar3 = 0;
    *(undefined4 *)(param_1 + -0x6678) = param_2[4];
    *(undefined4 *)(param_1 + -0x6674) = param_2[5];
    *(undefined1 *)(param_1 + 0x5c3b) = 1;
  }
  else {
    uVar3 = FUN_1000ee30(param_1 + -0x66b4,param_2);
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar3;
}

