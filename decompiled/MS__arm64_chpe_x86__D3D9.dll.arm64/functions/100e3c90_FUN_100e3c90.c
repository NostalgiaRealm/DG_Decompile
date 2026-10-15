/*
 * FUN_100e3c90 at 100e3c90
 * undefined FUN_100e3c90(void)
 * Address ranges: 100e3c90-100e3e97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e3c90(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x8876086c;
  if ((param_3 != (undefined4 *)0x0) && ((param_2 - 2 < 0x16 || (param_2 - 0x100 < 0x100)))) {
    if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar2 = true;
      iVar3 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar3 == 0) {
        FUN_100071d0(0);
      }
    }
    if (param_2 < 0x18) {
      iVar3 = *(int *)(&DAT_101608c0 + param_2 * 4);
    }
    else {
      iVar3 = param_2 - 0xf6;
    }
    uVar4 = 0;
    puVar1 = (undefined4 *)(*(int *)(param_1 + -0x5934) + iVar3 * 0x40);
    *param_3 = *puVar1;
    param_3[4] = puVar1[1];
    param_3[8] = puVar1[2];
    param_3[0xc] = puVar1[3];
    param_3[1] = puVar1[4];
    param_3[5] = puVar1[5];
    param_3[9] = puVar1[6];
    param_3[0xd] = puVar1[7];
    param_3[2] = puVar1[8];
    param_3[6] = puVar1[9];
    param_3[10] = puVar1[10];
    param_3[0xe] = puVar1[0xb];
    param_3[3] = puVar1[0xc];
    param_3[7] = puVar1[0xd];
    param_3[0xb] = puVar1[0xe];
    param_3[0xf] = puVar1[0xf];
    if (bVar2) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return uVar4;
}

