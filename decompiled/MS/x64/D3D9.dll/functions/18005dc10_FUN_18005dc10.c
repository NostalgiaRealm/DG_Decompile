/*
 * FUN_18005dc10 at 18005dc10
 * undefined __fastcall FUN_18005dc10(undefined8 param_1, longlong param_2, longlong param_3, int param_4, undefined8 * param_5)
 * Address ranges: 18005dc10-18005e086
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005dc10(undefined8 param_1,longlong param_2,longlong param_3,int param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = param_4 - 10;
  if (uVar5 < 0x100) {
    lVar4 = ((ulonglong)uVar5 + 0x1d7) * 0x40;
    uVar3 = param_5[1];
    *(undefined8 *)(lVar4 + param_2) = *param_5;
    ((undefined8 *)(lVar4 + param_2))[1] = uVar3;
    uVar3 = param_5[3];
    puVar1 = (undefined8 *)(lVar4 + 0x10 + param_2);
    *puVar1 = param_5[2];
    puVar1[1] = uVar3;
    uVar3 = param_5[5];
    puVar1 = (undefined8 *)(lVar4 + 0x20 + param_2);
    *puVar1 = param_5[4];
    puVar1[1] = uVar3;
    uVar3 = param_5[7];
    puVar1 = (undefined8 *)(lVar4 + 0x30 + param_2);
    *puVar1 = param_5[6];
    puVar1[1] = uVar3;
    *(undefined1 *)(param_3 + 0x12) = 1;
    puVar2 = (uint *)(param_3 + 0x14 + (ulonglong)(uVar5 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
    if (uVar5 == 0) {
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x6970) = *param_5;
      *(undefined8 *)(param_2 + 27000) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x6980) = param_5[2];
      *(undefined8 *)(param_2 + 0x6988) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x6990) = param_5[4];
      *(undefined8 *)(param_2 + 0x6998) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x69a0) = param_5[6];
      *(undefined8 *)(param_2 + 0x69a8) = uVar3;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    }
  }
  else {
    switch(param_4) {
    case 0:
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x74f4) = *param_5;
      *(undefined8 *)(param_2 + 0x74fc) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x7504) = param_5[2];
      *(undefined8 *)(param_2 + 0x750c) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x7514) = param_5[4];
      *(undefined8 *)(param_2 + 0x751c) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x7524) = param_5[6];
      *(undefined8 *)(param_2 + 0x752c) = uVar3;
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x69f0) = *param_5;
      *(undefined8 *)(param_2 + 0x69f8) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x6a00) = param_5[2];
      *(undefined8 *)(param_2 + 0x6a08) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x6a10) = param_5[4];
      *(undefined8 *)(param_2 + 0x6a18) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x6a20) = param_5[6];
      *(undefined8 *)(param_2 + 0x6a28) = uVar3;
      FUN_18002d088((float *)(param_2 + 0x74f4),(undefined8 *)(param_2 + 0x6a70),'\0');
      *(undefined4 *)(param_2 + 0x6a30) = *(undefined4 *)(param_2 + 0x6a70);
      *(undefined4 *)(param_2 + 0x6a34) = *(undefined4 *)(param_2 + 0x6a80);
      *(undefined4 *)(param_2 + 0x6a38) = *(undefined4 *)(param_2 + 0x6a90);
      *(undefined4 *)(param_2 + 0x6a3c) = *(undefined4 *)(param_2 + 0x6aa0);
      *(undefined4 *)(param_2 + 0x6a40) = *(undefined4 *)(param_2 + 0x6a74);
      *(undefined4 *)(param_2 + 0x6a44) = *(undefined4 *)(param_2 + 0x6a84);
      *(undefined4 *)(param_2 + 0x6a48) = *(undefined4 *)(param_2 + 0x6a94);
      *(undefined4 *)(param_2 + 0x6a4c) = *(undefined4 *)(param_2 + 0x6aa4);
      *(undefined4 *)(param_2 + 0x6a50) = *(undefined4 *)(param_2 + 0x6a78);
      *(undefined4 *)(param_2 + 0x6a54) = *(undefined4 *)(param_2 + 0x6a88);
      *(undefined4 *)(param_2 + 0x6a58) = *(undefined4 *)(param_2 + 0x6a98);
      *(undefined4 *)(param_2 + 0x6a5c) = *(undefined4 *)(param_2 + 0x6aa8);
      *(undefined4 *)(param_2 + 0x6a60) = *(undefined4 *)(param_2 + 0x6a7c);
      *(undefined4 *)(param_2 + 0x6a64) = *(undefined4 *)(param_2 + 0x6a8c);
      *(undefined4 *)(param_2 + 0x6a68) = *(undefined4 *)(param_2 + 0x6a9c);
      *(undefined4 *)(param_2 + 0x6a6c) = *(undefined4 *)(param_2 + 0x6aac);
      *(undefined1 *)(param_3 + 0x13) = 1;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    case 1:
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x7534) = *param_5;
      *(undefined8 *)(param_2 + 0x753c) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x7544) = param_5[2];
      *(undefined8 *)(param_2 + 0x754c) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x7554) = param_5[4];
      *(undefined8 *)(param_2 + 0x755c) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x7564) = param_5[6];
      *(undefined8 *)(param_2 + 0x756c) = uVar3;
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x6ab0) = *param_5;
      *(undefined8 *)(param_2 + 0x6ab8) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x6ac0) = param_5[2];
      *(undefined8 *)(param_2 + 0x6ac8) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x6ad0) = param_5[4];
      *(undefined8 *)(param_2 + 0x6ad8) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x6ae0) = param_5[6];
      *(undefined8 *)(param_2 + 0x6ae8) = uVar3;
      *(undefined1 *)(param_3 + 0x13) = 1;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    case 2:
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x6b60) = *param_5;
      *(undefined8 *)(param_2 + 0x6b68) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x6b70) = param_5[2];
      *(undefined8 *)(param_2 + 0x6b78) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x6b80) = param_5[4];
      *(undefined8 *)(param_2 + 0x6b88) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x6b90) = param_5[6];
      *(undefined8 *)(param_2 + 0x6b98) = uVar3;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    case 3:
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x6ba0) = *param_5;
      *(undefined8 *)(param_2 + 0x6ba8) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x6bb0) = param_5[2];
      *(undefined8 *)(param_2 + 0x6bb8) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x6bc0) = param_5[4];
      *(undefined8 *)(param_2 + 0x6bc8) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x6bd0) = param_5[6];
      *(undefined8 *)(param_2 + 0x6bd8) = uVar3;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    case 4:
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x6be0) = *param_5;
      *(undefined8 *)(param_2 + 0x6be8) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x6bf0) = param_5[2];
      *(undefined8 *)(param_2 + 0x6bf8) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x6c00) = param_5[4];
      *(undefined8 *)(param_2 + 0x6c08) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x6c10) = param_5[6];
      *(undefined8 *)(param_2 + 0x6c18) = uVar3;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    case 5:
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x6c20) = *param_5;
      *(undefined8 *)(param_2 + 0x6c28) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x6c30) = param_5[2];
      *(undefined8 *)(param_2 + 0x6c38) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x6c40) = param_5[4];
      *(undefined8 *)(param_2 + 0x6c48) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x6c50) = param_5[6];
      *(undefined8 *)(param_2 + 0x6c58) = uVar3;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    case 6:
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x6c60) = *param_5;
      *(undefined8 *)(param_2 + 0x6c68) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x6c70) = param_5[2];
      *(undefined8 *)(param_2 + 0x6c78) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x6c80) = param_5[4];
      *(undefined8 *)(param_2 + 0x6c88) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x6c90) = param_5[6];
      *(undefined8 *)(param_2 + 0x6c98) = uVar3;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    case 7:
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x6ca0) = *param_5;
      *(undefined8 *)(param_2 + 0x6ca8) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x6cb0) = param_5[2];
      *(undefined8 *)(param_2 + 0x6cb8) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x6cc0) = param_5[4];
      *(undefined8 *)(param_2 + 0x6cc8) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x6cd0) = param_5[6];
      *(undefined8 *)(param_2 + 0x6cd8) = uVar3;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    case 8:
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x6ce0) = *param_5;
      *(undefined8 *)(param_2 + 0x6ce8) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x6cf0) = param_5[2];
      *(undefined8 *)(param_2 + 0x6cf8) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x6d00) = param_5[4];
      *(undefined8 *)(param_2 + 0x6d08) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x6d10) = param_5[6];
      *(undefined8 *)(param_2 + 0x6d18) = uVar3;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    case 9:
      uVar3 = param_5[1];
      *(undefined8 *)(param_2 + 0x6d20) = *param_5;
      *(undefined8 *)(param_2 + 0x6d28) = uVar3;
      uVar3 = param_5[3];
      *(undefined8 *)(param_2 + 0x6d30) = param_5[2];
      *(undefined8 *)(param_2 + 0x6d38) = uVar3;
      uVar3 = param_5[5];
      *(undefined8 *)(param_2 + 0x6d40) = param_5[4];
      *(undefined8 *)(param_2 + 0x6d48) = uVar3;
      uVar3 = param_5[7];
      *(undefined8 *)(param_2 + 0x6d50) = param_5[6];
      *(undefined8 *)(param_2 + 0x6d58) = uVar3;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
  }
  return;
}

