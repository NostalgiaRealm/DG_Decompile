/*
 * FUN_180022da4 at 180022da4
 * undefined1 __fastcall FUN_180022da4(longlong param_1, int param_2)
 * Address ranges: 180022da4-1800230c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180022da4(longlong param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if ((*(uint *)(param_1 + 0x2b4c) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x2a6c) = 1;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x2c84) = 1;
      *(undefined4 *)(param_1 + 0x2a80) = 8;
      *(undefined4 *)(param_1 + 0x2a78) = 2;
      *(undefined4 *)(param_1 + 0x2a7c) = 3;
      *(undefined4 *)(param_1 + 0x2a90) = 8;
      *(undefined4 *)(param_1 + 0x2a88) = 2;
      *(undefined4 *)(param_1 + 0x2a8c) = 3;
      *(undefined4 *)(param_1 + 0x2a68) =
           *(undefined4 *)(&DAT_180060e58 + (longlong)*(int *)(param_1 + 0x2b74) * 4);
      *(undefined4 *)(param_1 + 0x2b50) = *(undefined4 *)(param_1 + 0x2c0c);
      *(undefined4 *)(param_1 + 0x2b58) = *(undefined4 *)(param_1 + 0x2c18);
      *(undefined4 *)(param_1 + 0x2b54) = *(undefined4 *)(param_1 + 0x2a64);
      *(uint *)(param_1 + 0x2b5c) = (uint)*(byte *)(param_1 + 0x2abc);
      *(undefined4 *)(param_1 + 0x2a64) = 0;
      *(undefined4 *)(param_1 + 0x2c18) = 0;
      *(undefined1 *)(param_1 + 0x2abc) = 0;
      *(undefined4 *)(param_1 + 0x2c0c) = 0xff0004;
      *(undefined1 *)(param_1 + 0x3170) = 1;
      *(undefined2 *)(param_1 + 0x2be0) = 0x101;
      return 1;
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 0x2a64) = *(undefined4 *)(param_1 + 0x2b54);
    *(undefined1 *)(param_1 + 0x2abc) = *(undefined1 *)(param_1 + 0x2b5c);
    *(undefined4 *)(param_1 + 0x2c0c) = *(undefined4 *)(param_1 + 0x2b50);
    *(undefined4 *)(param_1 + 0x2c18) = *(undefined4 *)(param_1 + 0x2b58);
    *(undefined4 *)(param_1 + 0x2c84) = 0;
    *(undefined4 *)(param_1 + 0x2a80) = 3;
    *(undefined4 *)(param_1 + 0x2a78) = 1;
    *(undefined4 *)(param_1 + 0x2a7c) = 1;
    *(undefined4 *)(param_1 + 0x2a90) = 3;
    *(undefined4 *)(param_1 + 0x2a88) = 1;
    *(undefined4 *)(param_1 + 0x2a8c) = 1;
    *(undefined4 *)(param_1 + 0x2a68) = 8;
    *(undefined1 *)(param_1 + 0x3170) = 1;
    *(undefined2 *)(param_1 + 0x2be0) = 0x101;
  }
  uVar2 = 0;
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x2b4c) & 1) != 0) {
    uVar1 = uVar2;
    if (param_2 == 0) {
      if ((*(int *)(param_1 + 0x2c7c) != 0) && (*(int *)(param_1 + 0x2aa0) != 0)) {
        *(int *)(param_1 + 0x2b50) = *(int *)(param_1 + 0x2c7c);
        uVar1 = 1;
        *(undefined4 *)(param_1 + 0x2b54) = *(undefined4 *)(param_1 + 0x2aac);
        *(undefined4 *)(param_1 + 0x2b58) = *(undefined4 *)(param_1 + 0x2ab8);
        *(undefined4 *)(param_1 + 0x2b5c) = *(undefined4 *)(param_1 + 0x2aa4);
        *(undefined4 *)(param_1 + 0x2b60) = *(undefined4 *)(param_1 + 0x2ab0);
        *(undefined4 *)(param_1 + 0x2b64) = *(undefined4 *)(param_1 + 0x2ab4);
        *(undefined4 *)(param_1 + 0x2b68) = *(undefined4 *)(param_1 + 0x2c0c);
        *(undefined4 *)(param_1 + 0x2b6c) = *(undefined4 *)(param_1 + 0x2a64);
        *(undefined4 *)(param_1 + 0x2b70) = *(undefined4 *)(param_1 + 0x2c18);
        *(undefined4 *)(param_1 + 0x2c18) = 0;
        *(undefined4 *)(param_1 + 0x2c7c) = 0;
        *(undefined4 *)(param_1 + 0x2aac) = 1;
        *(undefined4 *)(param_1 + 0x2ab8) = 1;
        *(undefined4 *)(param_1 + 0x2aa4) = 1;
        *(undefined4 *)(param_1 + 0x2aa8) = 3;
        *(undefined4 *)(param_1 + 0x2ab0) = 1;
        *(undefined4 *)(param_1 + 0x2ab4) = 2;
        *(undefined4 *)(param_1 + 0x2c0c) = 0xff0004;
        *(undefined4 *)(param_1 + 0x2a64) = 0;
      }
    }
    else {
      if (param_2 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x2c7c) = *(undefined4 *)(param_1 + 0x2b50);
      *(undefined4 *)(param_1 + 0x2aac) = *(undefined4 *)(param_1 + 0x2b54);
      *(undefined4 *)(param_1 + 0x2ab8) = *(undefined4 *)(param_1 + 0x2b58);
      *(undefined4 *)(param_1 + 0x2aa4) = *(undefined4 *)(param_1 + 0x2b5c);
      *(undefined4 *)(param_1 + 0x2ab0) = *(undefined4 *)(param_1 + 0x2b60);
      *(undefined4 *)(param_1 + 0x2ab4) = *(undefined4 *)(param_1 + 0x2b64);
      *(undefined4 *)(param_1 + 0x2a64) = *(undefined4 *)(param_1 + 0x2b6c);
      *(undefined4 *)(param_1 + 0x2c18) = *(undefined4 *)(param_1 + 0x2b70);
      *(undefined4 *)(param_1 + 0x2c0c) = *(undefined4 *)(param_1 + 0x2b68);
      *(undefined4 *)(param_1 + 0x2aa8) = 2;
    }
    *(undefined2 *)(param_1 + 0x2be0) = 0x101;
    *(undefined1 *)(param_1 + 0x3170) = 1;
  }
  return uVar1;
}

