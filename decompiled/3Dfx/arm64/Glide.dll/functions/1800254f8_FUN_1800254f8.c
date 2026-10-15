/*
 * FUN_1800254f8 at 1800254f8
 * undefined8 __cdecl FUN_1800254f8(longlong param_1, int param_2)
 * Address ranges: 1800254f8-1800256df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800254f8(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((*(uint *)(param_1 + 0x2b4c) >> 1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2a6c) = 1;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x2c84) = 1;
      *(undefined4 *)(param_1 + 0x2a80) = 8;
      *(undefined4 *)(param_1 + 0x2a90) = 8;
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0x2a78) = 2;
      *(undefined4 *)(param_1 + 0x2a7c) = 3;
      *(undefined4 *)(param_1 + 0x2a88) = 2;
      *(undefined4 *)(param_1 + 0x2a8c) = 3;
      uVar3 = *(undefined4 *)(&DAT_180062e00 + (longlong)*(int *)(param_1 + 0x2b74) * 4);
      *(undefined4 *)(param_1 + 0x2b58) = *(undefined4 *)(param_1 + 0x2c18);
      *(undefined4 *)(param_1 + 0x2b50) = *(undefined4 *)(param_1 + 0x2c0c);
      *(undefined4 *)(param_1 + 0x2b54) = *(undefined4 *)(param_1 + 0x2a64);
      *(undefined4 *)(param_1 + 0x2a64) = 0;
      *(undefined4 *)(param_1 + 0x2a68) = uVar3;
      *(undefined4 *)(param_1 + 0x2c18) = 0;
      *(uint *)(param_1 + 0x2b5c) = (uint)*(byte *)(param_1 + 0x2abc);
      *(undefined1 *)(param_1 + 0x2abc) = 0;
      *(undefined2 *)(param_1 + 0x2be0) = 0x101;
      *(undefined4 *)(param_1 + 0x2c0c) = 0xff0004;
      goto LAB_1800256d8;
    }
    *(undefined4 *)(param_1 + 0x2a80) = 3;
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 0x2a90) = 3;
    *(undefined4 *)(param_1 + 0x2c84) = 0;
    *(undefined4 *)(param_1 + 0x2a78) = 1;
    *(undefined4 *)(param_1 + 0x2a7c) = 1;
    *(undefined4 *)(param_1 + 0x2a64) = *(undefined4 *)(param_1 + 0x2b54);
    *(undefined4 *)(param_1 + 0x2a68) = 8;
    *(undefined4 *)(param_1 + 0x2a88) = 1;
    *(undefined4 *)(param_1 + 0x2a8c) = 1;
    *(char *)(param_1 + 0x2abc) = (char)*(undefined4 *)(param_1 + 0x2b5c);
    *(undefined1 *)(param_1 + 0x3170) = 1;
    *(undefined4 *)(param_1 + 0x2c0c) = *(undefined4 *)(param_1 + 0x2b50);
    *(undefined4 *)(param_1 + 0x2c18) = *(undefined4 *)(param_1 + 0x2b58);
    *(undefined2 *)(param_1 + 0x2be0) = 0x101;
  }
  uVar4 = 0;
  if ((*(uint *)(param_1 + 0x2b4c) & 1) == 0) {
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c7c);
    uVar4 = 0;
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x2aa0) != 0)) {
      *(undefined4 *)(param_1 + 0x2c7c) = 0;
      uVar3 = *(undefined4 *)(param_1 + 0x2aa4);
      *(int *)(param_1 + 0x2b50) = iVar1;
      *(undefined4 *)(param_1 + 0x2b54) = *(undefined4 *)(param_1 + 0x2aac);
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0x2b60) = *(undefined4 *)(param_1 + 0x2ab0);
      *(undefined4 *)(param_1 + 0x2b64) = *(undefined4 *)(param_1 + 0x2ab4);
      *(undefined8 *)(param_1 + 0x2aac) = 0x100000001;
      *(undefined8 *)(param_1 + 0x2aa4) = 0x300000001;
      *(undefined4 *)(param_1 + 0x2b58) = *(undefined4 *)(param_1 + 0x2ab8);
      *(undefined4 *)(param_1 + 0x2b5c) = uVar3;
      *(undefined8 *)(param_1 + 0x2ab4) = 0x100000002;
      uVar3 = *(undefined4 *)(param_1 + 0x2c0c);
      *(undefined4 *)(param_1 + 0x2c0c) = 0xff0004;
      uVar2 = *(undefined4 *)(param_1 + 0x2a64);
      *(undefined4 *)(param_1 + 0x2a64) = 0;
      *(undefined4 *)(param_1 + 0x2b68) = uVar3;
      *(undefined4 *)(param_1 + 0x2b6c) = uVar2;
      uVar3 = *(undefined4 *)(param_1 + 0x2c18);
      *(undefined4 *)(param_1 + 0x2c18) = 0;
      *(undefined4 *)(param_1 + 0x2b70) = uVar3;
    }
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x2c7c) = *(undefined4 *)(param_1 + 0x2b50);
    *(undefined4 *)(param_1 + 0x2aa4) = *(undefined4 *)(param_1 + 0x2b5c);
    *(undefined4 *)(param_1 + 0x2aa8) = 2;
    *(undefined4 *)(param_1 + 0x2ab4) = *(undefined4 *)(param_1 + 0x2b64);
    *(undefined4 *)(param_1 + 0x2ab8) = *(undefined4 *)(param_1 + 0x2b58);
    *(undefined4 *)(param_1 + 0x2aac) = *(undefined4 *)(param_1 + 0x2b54);
    *(undefined4 *)(param_1 + 0x2ab0) = *(undefined4 *)(param_1 + 0x2b60);
    *(undefined4 *)(param_1 + 0x2a64) = *(undefined4 *)(param_1 + 0x2b6c);
    *(undefined4 *)(param_1 + 0x2c0c) = *(undefined4 *)(param_1 + 0x2b68);
    *(undefined4 *)(param_1 + 0x2c18) = *(undefined4 *)(param_1 + 0x2b70);
  }
  *(undefined1 *)(param_1 + 0x2be1) = 1;
  *(undefined1 *)(param_1 + 0x2be0) = 1;
LAB_1800256d8:
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return uVar4;
}

