/*
 * FUN_1002e838 at 1002e838
 * undefined FUN_1002e838(void)
 * Address ranges: 1002e838-1002ec1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002e838(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  puVar1 = (undefined4 *)(param_1 + 0x2a44);
  puVar2 = (undefined4 *)(param_1 + 0x2bf8);
  piVar3 = (int *)(param_1 + 0x2b30);
  puVar4 = (undefined4 *)(param_1 + 0x2b38);
  puVar5 = (undefined4 *)(param_1 + 0x2b34);
  piVar6 = (int *)(param_1 + 0x2bec);
  if ((*(uint *)(param_1 + 0x2b2c) >> 1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2a4c) = 1;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x2c64) = 1;
      *(undefined4 *)(param_1 + 0x2a58) = 2;
      *(undefined4 *)(param_1 + 0x2a68) = 2;
      *(undefined4 *)(param_1 + 0x2a60) = 8;
      *(undefined4 *)(param_1 + 0x2a70) = 8;
      *(undefined4 *)(param_1 + 0x2a5c) = 3;
      *(undefined4 *)(param_1 + 0x2a6c) = 3;
      *(undefined4 *)(param_1 + 0x2a48) =
           *(undefined4 *)(&DAT_10096e50 + *(int *)(param_1 + 0x2b54) * 4);
      *piVar3 = *piVar6;
      *puVar4 = *puVar2;
      *puVar5 = *puVar1;
      *puVar1 = 0;
      *puVar2 = 0;
      *(uint *)(param_1 + 0x2b3c) = (uint)*(byte *)(param_1 + 0x2a9c);
      *(undefined1 *)(param_1 + 0x2a9c) = 0;
      *piVar6 = 0xff0004;
      *(undefined1 *)(param_1 + 0x3150) = 1;
      *(undefined1 *)(param_1 + 0x2bc0) = 1;
      *(undefined1 *)(param_1 + 0x2bc1) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x2c64) = 0;
    *(undefined4 *)(param_1 + 0x2a60) = 3;
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 0x2a70) = 3;
    *(undefined4 *)(param_1 + 0x2a48) = 8;
    *(undefined4 *)(param_1 + 0x2a58) = 1;
    *(undefined4 *)(param_1 + 0x2a5c) = 1;
    *(undefined4 *)(param_1 + 0x2a68) = 1;
    *puVar1 = *puVar5;
    *(undefined4 *)(param_1 + 0x2a6c) = 1;
    *(undefined1 *)(param_1 + 0x2a9c) = *(undefined1 *)(param_1 + 0x2b3c);
    *(undefined1 *)(param_1 + 0x3150) = 1;
    *(undefined1 *)(param_1 + 0x2bc0) = 1;
    *(undefined1 *)(param_1 + 0x2bc1) = 1;
    *piVar6 = *piVar3;
    *puVar2 = *puVar4;
  }
  uVar9 = 0;
  if ((*(uint *)(param_1 + 0x2b2c) & 1) != 0) {
    if (param_2 == 0) {
      iVar7 = *(int *)(param_1 + 0x2c5c);
      if ((iVar7 != 0) && (*(int *)(param_1 + 0x2a80) != 0)) {
        *(int *)(param_1 + 0x2c5c) = 0;
        *piVar3 = iVar7;
        *(undefined4 *)(param_1 + 0x2b34) = *(undefined4 *)(param_1 + 0x2a8c);
        *(undefined4 *)(param_1 + 0x2b38) = *(undefined4 *)(param_1 + 0x2a98);
        *(undefined4 *)(param_1 + 0x2b3c) = *(undefined4 *)(param_1 + 0x2a84);
        *(undefined4 *)(param_1 + 0x2b40) = *(undefined4 *)(param_1 + 0x2a90);
        *(undefined4 *)(param_1 + 0x2b44) = *(undefined4 *)(param_1 + 0x2a94);
        *(undefined8 *)(param_1 + 0x2a8c) = 0x100000001;
        *(undefined8 *)(param_1 + 0x2a84) = 0x300000001;
        *(undefined8 *)(param_1 + 0x2a94) = 0x100000002;
        *(undefined4 *)(param_1 + 0x2b48) = *(undefined4 *)(param_1 + 0x2bec);
        *(undefined4 *)(param_1 + 0x2bec) = 0xff0004;
        uVar8 = *puVar1;
        *puVar1 = 0;
        *(undefined4 *)(param_1 + 0x2b4c) = uVar8;
        uVar8 = *puVar2;
        *puVar2 = 0;
        *(undefined4 *)(param_1 + 0x2b50) = uVar8;
        uVar9 = 1;
      }
    }
    else {
      if (param_2 != 1) {
        return 0;
      }
      *(int *)(param_1 + 0x2c5c) = *piVar3;
      *(undefined4 *)(param_1 + 0x2a8c) = *puVar5;
      *(undefined4 *)(param_1 + 0x2a98) = *puVar4;
      *(undefined4 *)(param_1 + 0x2a84) = *(undefined4 *)(param_1 + 0x2b3c);
      *(undefined4 *)(param_1 + 0x2a88) = 2;
      *(undefined4 *)(param_1 + 0x2a90) = *(undefined4 *)(param_1 + 0x2b40);
      *(undefined4 *)(param_1 + 0x2a94) = *(undefined4 *)(param_1 + 0x2b44);
      *puVar1 = *(undefined4 *)(param_1 + 0x2b4c);
      *puVar2 = *(undefined4 *)(param_1 + 0x2b50);
      *piVar6 = *(int *)(param_1 + 0x2b48);
    }
    *(undefined1 *)(param_1 + 0x2bc1) = 1;
    *(undefined1 *)(param_1 + 0x2bc0) = 1;
    *(undefined1 *)(param_1 + 0x3150) = 1;
  }
  return uVar9;
}

