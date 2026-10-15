/*
 * FUN_10017408 at 10017408
 * undefined FUN_10017408(void)
 * Address ranges: 10017408-100177eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10017408(int param_1,int param_2)

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
  
  puVar1 = (undefined4 *)(param_1 + 0x2ae4);
  puVar2 = (undefined4 *)(param_1 + 0x2c98);
  piVar3 = (int *)(param_1 + 0x2bd0);
  puVar4 = (undefined4 *)(param_1 + 0x2bd8);
  puVar5 = (undefined4 *)(param_1 + 0x2bd4);
  piVar6 = (int *)(param_1 + 0x2c8c);
  if ((*(uint *)(param_1 + 0x2bcc) >> 1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2aec) = 1;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x2d04) = 1;
      *(undefined4 *)(param_1 + 11000) = 2;
      *(undefined4 *)(param_1 + 0x2b08) = 2;
      *(undefined4 *)(param_1 + 0x2b00) = 8;
      *(undefined4 *)(param_1 + 0x2b10) = 8;
      *(undefined4 *)(param_1 + 0x2afc) = 3;
      *(undefined4 *)(param_1 + 0x2b0c) = 3;
      *(undefined4 *)(param_1 + 0x2ae8) =
           *(undefined4 *)(&DAT_10099ae8 + *(int *)(param_1 + 0x2bf4) * 4);
      *piVar3 = *piVar6;
      *puVar4 = *puVar2;
      *puVar5 = *puVar1;
      *puVar1 = 0;
      *puVar2 = 0;
      *(uint *)(param_1 + 0x2bdc) = (uint)*(byte *)(param_1 + 0x2b3c);
      *(undefined1 *)(param_1 + 0x2b3c) = 0;
      *piVar6 = 0xff0004;
      *(undefined1 *)(param_1 + 0x32d0) = 1;
      *(undefined1 *)(param_1 + 0x2c60) = 1;
      *(undefined1 *)(param_1 + 0x2c61) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x2d04) = 0;
    *(undefined4 *)(param_1 + 0x2b00) = 3;
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 0x2b10) = 3;
    *(undefined4 *)(param_1 + 0x2ae8) = 8;
    *(undefined4 *)(param_1 + 11000) = 1;
    *(undefined4 *)(param_1 + 0x2afc) = 1;
    *(undefined4 *)(param_1 + 0x2b08) = 1;
    *puVar1 = *puVar5;
    *(undefined4 *)(param_1 + 0x2b0c) = 1;
    *(undefined1 *)(param_1 + 0x2b3c) = *(undefined1 *)(param_1 + 0x2bdc);
    *(undefined1 *)(param_1 + 0x32d0) = 1;
    *(undefined1 *)(param_1 + 0x2c60) = 1;
    *(undefined1 *)(param_1 + 0x2c61) = 1;
    *piVar6 = *piVar3;
    *puVar2 = *puVar4;
  }
  uVar9 = 0;
  if ((*(uint *)(param_1 + 0x2bcc) & 1) != 0) {
    if (param_2 == 0) {
      iVar7 = *(int *)(param_1 + 0x2cfc);
      if ((iVar7 != 0) && (*(int *)(param_1 + 0x2b20) != 0)) {
        *(int *)(param_1 + 0x2cfc) = 0;
        *piVar3 = iVar7;
        *(undefined4 *)(param_1 + 0x2bd4) = *(undefined4 *)(param_1 + 0x2b2c);
        *(undefined4 *)(param_1 + 0x2bd8) = *(undefined4 *)(param_1 + 0x2b38);
        *(undefined4 *)(param_1 + 0x2bdc) = *(undefined4 *)(param_1 + 0x2b24);
        *(undefined4 *)(param_1 + 0x2be0) = *(undefined4 *)(param_1 + 0x2b30);
        *(undefined4 *)(param_1 + 0x2be4) = *(undefined4 *)(param_1 + 0x2b34);
        *(undefined8 *)(param_1 + 0x2b2c) = 0x100000001;
        *(undefined8 *)(param_1 + 0x2b24) = 0x300000001;
        *(undefined8 *)(param_1 + 0x2b34) = 0x100000002;
        *(undefined4 *)(param_1 + 0x2be8) = *(undefined4 *)(param_1 + 0x2c8c);
        *(undefined4 *)(param_1 + 0x2c8c) = 0xff0004;
        uVar8 = *puVar1;
        *puVar1 = 0;
        *(undefined4 *)(param_1 + 0x2bec) = uVar8;
        uVar8 = *puVar2;
        *puVar2 = 0;
        *(undefined4 *)(param_1 + 0x2bf0) = uVar8;
        uVar9 = 1;
      }
    }
    else {
      if (param_2 != 1) {
        return 0;
      }
      *(int *)(param_1 + 0x2cfc) = *piVar3;
      *(undefined4 *)(param_1 + 0x2b2c) = *puVar5;
      *(undefined4 *)(param_1 + 0x2b38) = *puVar4;
      *(undefined4 *)(param_1 + 0x2b24) = *(undefined4 *)(param_1 + 0x2bdc);
      *(undefined4 *)(param_1 + 0x2b28) = 2;
      *(undefined4 *)(param_1 + 0x2b30) = *(undefined4 *)(param_1 + 0x2be0);
      *(undefined4 *)(param_1 + 0x2b34) = *(undefined4 *)(param_1 + 0x2be4);
      *puVar1 = *(undefined4 *)(param_1 + 0x2bec);
      *puVar2 = *(undefined4 *)(param_1 + 0x2bf0);
      *piVar6 = *(int *)(param_1 + 0x2be8);
    }
    *(undefined1 *)(param_1 + 0x2c61) = 1;
    *(undefined1 *)(param_1 + 0x2c60) = 1;
    *(undefined1 *)(param_1 + 0x32d0) = 1;
  }
  return uVar9;
}

