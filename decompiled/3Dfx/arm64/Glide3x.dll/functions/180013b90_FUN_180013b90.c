/*
 * FUN_180013b90 at 180013b90
 * undefined8 __cdecl FUN_180013b90(longlong param_1, int param_2)
 * Address ranges: 180013b90-180013d77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180013b90(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((*(uint *)(param_1 + 0x2be4) >> 1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2b04) = 1;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x2d24) = 1;
      *(undefined4 *)(param_1 + 0x2b18) = 8;
      *(undefined4 *)(param_1 + 0x2b28) = 8;
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0x2b10) = 2;
      *(undefined4 *)(param_1 + 0x2b14) = 3;
      *(undefined4 *)(param_1 + 0x2b20) = 2;
      *(undefined4 *)(param_1 + 0x2b24) = 3;
      uVar3 = *(undefined4 *)(&DAT_180065ad0 + (longlong)*(int *)(param_1 + 0x2c0c) * 4);
      *(undefined4 *)(param_1 + 0x2bf0) = *(undefined4 *)(param_1 + 0x2cb8);
      *(undefined4 *)(param_1 + 0x2be8) = *(undefined4 *)(param_1 + 0x2cac);
      *(undefined4 *)(param_1 + 0x2bec) = *(undefined4 *)(param_1 + 0x2afc);
      *(undefined4 *)(param_1 + 0x2afc) = 0;
      *(undefined4 *)(param_1 + 0x2b00) = uVar3;
      *(undefined4 *)(param_1 + 0x2cb8) = 0;
      *(uint *)(param_1 + 0x2bf4) = (uint)*(byte *)(param_1 + 0x2b54);
      *(undefined1 *)(param_1 + 0x2b54) = 0;
      *(undefined2 *)(param_1 + 0x2c78) = 0x101;
      *(undefined4 *)(param_1 + 0x2cac) = 0xff0004;
      goto LAB_180013d70;
    }
    *(undefined4 *)(param_1 + 0x2b18) = 3;
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 0x2b28) = 3;
    *(undefined4 *)(param_1 + 0x2d24) = 0;
    *(undefined4 *)(param_1 + 0x2b10) = 1;
    *(undefined4 *)(param_1 + 0x2b14) = 1;
    *(undefined4 *)(param_1 + 0x2afc) = *(undefined4 *)(param_1 + 0x2bec);
    *(undefined4 *)(param_1 + 0x2b00) = 8;
    *(undefined4 *)(param_1 + 0x2b20) = 1;
    *(undefined4 *)(param_1 + 0x2b24) = 1;
    *(char *)(param_1 + 0x2b54) = (char)*(undefined4 *)(param_1 + 0x2bf4);
    *(undefined1 *)(param_1 + 0x32f0) = 1;
    *(undefined4 *)(param_1 + 0x2cac) = *(undefined4 *)(param_1 + 0x2be8);
    *(undefined4 *)(param_1 + 0x2cb8) = *(undefined4 *)(param_1 + 0x2bf0);
    *(undefined2 *)(param_1 + 0x2c78) = 0x101;
  }
  uVar4 = 0;
  if ((*(uint *)(param_1 + 0x2be4) & 1) == 0) {
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x2d1c);
    uVar4 = 0;
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x2b38) != 0)) {
      *(undefined4 *)(param_1 + 0x2d1c) = 0;
      uVar3 = *(undefined4 *)(param_1 + 0x2b3c);
      *(int *)(param_1 + 0x2be8) = iVar1;
      *(undefined4 *)(param_1 + 0x2bec) = *(undefined4 *)(param_1 + 0x2b44);
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0x2bf8) = *(undefined4 *)(param_1 + 0x2b48);
      *(undefined4 *)(param_1 + 0x2bfc) = *(undefined4 *)(param_1 + 0x2b4c);
      *(undefined8 *)(param_1 + 0x2b44) = 0x100000001;
      *(undefined8 *)(param_1 + 0x2b3c) = 0x300000001;
      *(undefined4 *)(param_1 + 0x2bf0) = *(undefined4 *)(param_1 + 0x2b50);
      *(undefined4 *)(param_1 + 0x2bf4) = uVar3;
      *(undefined8 *)(param_1 + 0x2b4c) = 0x100000002;
      uVar3 = *(undefined4 *)(param_1 + 0x2cac);
      *(undefined4 *)(param_1 + 0x2cac) = 0xff0004;
      uVar2 = *(undefined4 *)(param_1 + 0x2afc);
      *(undefined4 *)(param_1 + 0x2afc) = 0;
      *(undefined4 *)(param_1 + 0x2c00) = uVar3;
      *(undefined4 *)(param_1 + 0x2c04) = uVar2;
      uVar3 = *(undefined4 *)(param_1 + 0x2cb8);
      *(undefined4 *)(param_1 + 0x2cb8) = 0;
      *(undefined4 *)(param_1 + 0x2c08) = uVar3;
    }
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x2d1c) = *(undefined4 *)(param_1 + 0x2be8);
    *(undefined4 *)(param_1 + 0x2b3c) = *(undefined4 *)(param_1 + 0x2bf4);
    *(undefined4 *)(param_1 + 0x2b40) = 2;
    *(undefined4 *)(param_1 + 0x2b4c) = *(undefined4 *)(param_1 + 0x2bfc);
    *(undefined4 *)(param_1 + 0x2b50) = *(undefined4 *)(param_1 + 0x2bf0);
    *(undefined4 *)(param_1 + 0x2b44) = *(undefined4 *)(param_1 + 0x2bec);
    *(undefined4 *)(param_1 + 0x2b48) = *(undefined4 *)(param_1 + 0x2bf8);
    *(undefined4 *)(param_1 + 0x2afc) = *(undefined4 *)(param_1 + 0x2c04);
    *(undefined4 *)(param_1 + 0x2cac) = *(undefined4 *)(param_1 + 0x2c00);
    *(undefined4 *)(param_1 + 0x2cb8) = *(undefined4 *)(param_1 + 0x2c08);
  }
  *(undefined1 *)(param_1 + 0x2c79) = 1;
  *(undefined1 *)(param_1 + 0x2c78) = 1;
LAB_180013d70:
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  return uVar4;
}

