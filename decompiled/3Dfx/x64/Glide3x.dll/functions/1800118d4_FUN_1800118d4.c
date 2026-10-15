/*
 * FUN_1800118d4 at 1800118d4
 * undefined1 __fastcall FUN_1800118d4(longlong param_1, int param_2)
 * Address ranges: 1800118d4-180011bf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800118d4(longlong param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if ((*(uint *)(param_1 + 0x2be4) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x2b04) = 1;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x2d24) = 1;
      *(undefined4 *)(param_1 + 0x2b18) = 8;
      *(undefined4 *)(param_1 + 0x2b10) = 2;
      *(undefined4 *)(param_1 + 0x2b14) = 3;
      *(undefined4 *)(param_1 + 0x2b28) = 8;
      *(undefined4 *)(param_1 + 0x2b20) = 2;
      *(undefined4 *)(param_1 + 0x2b24) = 3;
      *(undefined4 *)(param_1 + 0x2b00) =
           *(undefined4 *)(&DAT_180062b70 + (longlong)*(int *)(param_1 + 0x2c0c) * 4);
      *(undefined4 *)(param_1 + 0x2be8) = *(undefined4 *)(param_1 + 0x2cac);
      *(undefined4 *)(param_1 + 0x2bf0) = *(undefined4 *)(param_1 + 0x2cb8);
      *(undefined4 *)(param_1 + 0x2bec) = *(undefined4 *)(param_1 + 0x2afc);
      *(uint *)(param_1 + 0x2bf4) = (uint)*(byte *)(param_1 + 0x2b54);
      *(undefined4 *)(param_1 + 0x2afc) = 0;
      *(undefined4 *)(param_1 + 0x2cb8) = 0;
      *(undefined1 *)(param_1 + 0x2b54) = 0;
      *(undefined4 *)(param_1 + 0x2cac) = 0xff0004;
      *(undefined1 *)(param_1 + 0x32f0) = 1;
      *(undefined2 *)(param_1 + 0x2c78) = 0x101;
      return 1;
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 0x2afc) = *(undefined4 *)(param_1 + 0x2bec);
    *(undefined1 *)(param_1 + 0x2b54) = *(undefined1 *)(param_1 + 0x2bf4);
    *(undefined4 *)(param_1 + 0x2cac) = *(undefined4 *)(param_1 + 0x2be8);
    *(undefined4 *)(param_1 + 0x2cb8) = *(undefined4 *)(param_1 + 0x2bf0);
    *(undefined4 *)(param_1 + 0x2d24) = 0;
    *(undefined4 *)(param_1 + 0x2b18) = 3;
    *(undefined4 *)(param_1 + 0x2b10) = 1;
    *(undefined4 *)(param_1 + 0x2b14) = 1;
    *(undefined4 *)(param_1 + 0x2b28) = 3;
    *(undefined4 *)(param_1 + 0x2b20) = 1;
    *(undefined4 *)(param_1 + 0x2b24) = 1;
    *(undefined4 *)(param_1 + 0x2b00) = 8;
    *(undefined1 *)(param_1 + 0x32f0) = 1;
    *(undefined2 *)(param_1 + 0x2c78) = 0x101;
  }
  uVar2 = 0;
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x2be4) & 1) != 0) {
    uVar1 = uVar2;
    if (param_2 == 0) {
      if ((*(int *)(param_1 + 0x2d1c) != 0) && (*(int *)(param_1 + 0x2b38) != 0)) {
        *(int *)(param_1 + 0x2be8) = *(int *)(param_1 + 0x2d1c);
        uVar1 = 1;
        *(undefined4 *)(param_1 + 0x2bec) = *(undefined4 *)(param_1 + 0x2b44);
        *(undefined4 *)(param_1 + 0x2bf0) = *(undefined4 *)(param_1 + 0x2b50);
        *(undefined4 *)(param_1 + 0x2bf4) = *(undefined4 *)(param_1 + 0x2b3c);
        *(undefined4 *)(param_1 + 0x2bf8) = *(undefined4 *)(param_1 + 0x2b48);
        *(undefined4 *)(param_1 + 0x2bfc) = *(undefined4 *)(param_1 + 0x2b4c);
        *(undefined4 *)(param_1 + 0x2c00) = *(undefined4 *)(param_1 + 0x2cac);
        *(undefined4 *)(param_1 + 0x2c04) = *(undefined4 *)(param_1 + 0x2afc);
        *(undefined4 *)(param_1 + 0x2c08) = *(undefined4 *)(param_1 + 0x2cb8);
        *(undefined4 *)(param_1 + 0x2cb8) = 0;
        *(undefined4 *)(param_1 + 0x2d1c) = 0;
        *(undefined4 *)(param_1 + 0x2b44) = 1;
        *(undefined4 *)(param_1 + 0x2b50) = 1;
        *(undefined4 *)(param_1 + 0x2b3c) = 1;
        *(undefined4 *)(param_1 + 0x2b40) = 3;
        *(undefined4 *)(param_1 + 0x2b48) = 1;
        *(undefined4 *)(param_1 + 0x2b4c) = 2;
        *(undefined4 *)(param_1 + 0x2cac) = 0xff0004;
        *(undefined4 *)(param_1 + 0x2afc) = 0;
      }
    }
    else {
      if (param_2 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x2d1c) = *(undefined4 *)(param_1 + 0x2be8);
      *(undefined4 *)(param_1 + 0x2b44) = *(undefined4 *)(param_1 + 0x2bec);
      *(undefined4 *)(param_1 + 0x2b50) = *(undefined4 *)(param_1 + 0x2bf0);
      *(undefined4 *)(param_1 + 0x2b3c) = *(undefined4 *)(param_1 + 0x2bf4);
      *(undefined4 *)(param_1 + 0x2b48) = *(undefined4 *)(param_1 + 0x2bf8);
      *(undefined4 *)(param_1 + 0x2b4c) = *(undefined4 *)(param_1 + 0x2bfc);
      *(undefined4 *)(param_1 + 0x2afc) = *(undefined4 *)(param_1 + 0x2c04);
      *(undefined4 *)(param_1 + 0x2cb8) = *(undefined4 *)(param_1 + 0x2c08);
      *(undefined4 *)(param_1 + 0x2cac) = *(undefined4 *)(param_1 + 0x2c00);
      *(undefined4 *)(param_1 + 0x2b40) = 2;
    }
    *(undefined2 *)(param_1 + 0x2c78) = 0x101;
    *(undefined1 *)(param_1 + 0x32f0) = 1;
  }
  return uVar1;
}

