/*
 * FUN_180167de0 at 180167de0
 * undefined FUN_180167de0(void)
 * Address ranges: 180167de0-180168077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180167de0(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *extraout_x11;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 < 10) {
LAB_180167e20:
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_1,0);
LAB_180167e48:
    uVar2 = param_2 - 10;
    if (uVar2 < 0x100) {
      uVar4 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      lVar3 = param_1 + ((ulonglong)uVar2 + 0x1d7) * 0x40;
      *(undefined8 *)(lVar3 + 0xb8) = param_3[1];
      *(undefined8 *)(lVar3 + 0xb0) = uVar4;
      *(undefined8 *)(lVar3 + 200) = uVar6;
      *(undefined8 *)(lVar3 + 0xc0) = uVar5;
      uVar4 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(lVar3 + 0xd8) = param_3[5];
      *(undefined8 *)(lVar3 + 0xd0) = uVar4;
      *(undefined8 *)(lVar3 + 0xe8) = uVar6;
      *(undefined8 *)(lVar3 + 0xe0) = uVar5;
      lVar3 = param_1 + (ulonglong)(uVar2 >> 5) * 4;
      *(undefined1 *)(param_1 + 0xf692) = 1;
      *(uint *)(lVar3 + 0xf694) = 1 << (ulonglong)(uVar2 & 0x1f) | *(uint *)(lVar3 + 0xf694);
      if (uVar2 != 0) {
        return;
      }
      uVar4 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0x6a28) = param_3[1];
      *(undefined8 *)(param_1 + 0x6a20) = uVar4;
      *(undefined8 *)(param_1 + 0x6a38) = uVar6;
      *(undefined8 *)(param_1 + 0x6a30) = uVar5;
      uVar4 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0x6a48) = param_3[5];
      *(undefined8 *)(param_1 + 0x6a40) = uVar4;
      *(undefined8 *)(param_1 + 0x6a58) = uVar6;
      *(undefined8 *)(param_1 + 0x6a50) = uVar5;
      *(undefined1 *)(param_1 + 0xf691) = 1;
      return;
    }
  }
  else if (9 < (int)param_2) {
    if ((int)param_2 < 0x10a) goto LAB_180167e20;
    goto LAB_180167e48;
  }
  switch(param_2) {
  case 0:
    uVar4 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    *(undefined8 *)(param_1 + 0x75ac) = param_3[1];
    *(undefined8 *)(param_1 + 0x75a4) = uVar4;
    *(undefined8 *)(param_1 + 0x75bc) = uVar6;
    *(undefined8 *)(param_1 + 0x75b4) = uVar5;
    uVar4 = param_3[4];
    uVar6 = param_3[7];
    uVar5 = param_3[6];
    *(undefined8 *)(param_1 + 0x75cc) = param_3[5];
    *(undefined8 *)(param_1 + 0x75c4) = uVar4;
    *(undefined8 *)(param_1 + 0x75dc) = uVar6;
    *(undefined8 *)(param_1 + 0x75d4) = uVar5;
    uVar4 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    *(undefined8 *)(param_1 + 0x6aa8) = param_3[1];
    *(undefined8 *)(param_1 + 0x6aa0) = uVar4;
    *(undefined8 *)(param_1 + 0x6ab8) = uVar6;
    *(undefined8 *)(param_1 + 0x6ab0) = uVar5;
    uVar4 = param_3[4];
    uVar6 = param_3[7];
    uVar5 = param_3[6];
    *(undefined8 *)(param_1 + 0x6ac8) = param_3[5];
    *(undefined8 *)(param_1 + 0x6ac0) = uVar4;
    *(undefined8 *)(param_1 + 0x6ad8) = uVar6;
    *(undefined8 *)(param_1 + 0x6ad0) = uVar5;
    FUN_18012b1a0((undefined8 *)(param_1 + 0x75a4),param_1 + 0x6b20,0);
    *(undefined4 *)(param_1 + 0x6ae0) = *(undefined4 *)(param_1 + 0x6b20);
    *(undefined4 *)(param_1 + 0x6ae4) = *(undefined4 *)(param_1 + 0x6b30);
    *(undefined4 *)(param_1 + 0x6ae8) = *(undefined4 *)(param_1 + 0x6b40);
    *(undefined4 *)(param_1 + 0x6aec) = *(undefined4 *)(param_1 + 0x6b50);
    *(undefined4 *)(param_1 + 0x6af0) = *(undefined4 *)(param_1 + 0x6b24);
    *(undefined4 *)(param_1 + 0x6af4) = *(undefined4 *)(param_1 + 0x6b34);
    *(undefined4 *)(param_1 + 0x6af8) = *(undefined4 *)(param_1 + 0x6b44);
    *(undefined4 *)(param_1 + 0x6afc) = *(undefined4 *)(param_1 + 0x6b54);
    *(undefined4 *)(param_1 + 0x6b00) = *(undefined4 *)(param_1 + 0x6b28);
    *(undefined4 *)(param_1 + 0x6b04) = *(undefined4 *)(param_1 + 0x6b38);
    *(undefined4 *)(param_1 + 0x6b08) = *(undefined4 *)(param_1 + 0x6b48);
    *(undefined4 *)(param_1 + 0x6b0c) = *(undefined4 *)(param_1 + 0x6b58);
    *(undefined4 *)(param_1 + 0x6b10) = *(undefined4 *)(param_1 + 0x6b2c);
    *(undefined4 *)(param_1 + 0x6b14) = *(undefined4 *)(param_1 + 0x6b3c);
    *(undefined4 *)(param_1 + 0x6b18) = *(undefined4 *)(param_1 + 0x6b4c);
    *(undefined4 *)(param_1 + 0x6b1c) = *(undefined4 *)(param_1 + 0x6b5c);
    *(undefined1 *)(param_1 + 0xf691) = 1;
    *(undefined1 *)(param_1 + 0xf693) = 1;
    return;
  case 1:
    uVar4 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    *(undefined8 *)(param_1 + 0x75ec) = param_3[1];
    *(undefined8 *)(param_1 + 0x75e4) = uVar4;
    *(undefined8 *)(param_1 + 0x75fc) = uVar6;
    *(undefined8 *)(param_1 + 0x75f4) = uVar5;
    uVar4 = param_3[4];
    uVar6 = param_3[7];
    uVar5 = param_3[6];
    *(undefined8 *)(param_1 + 0x760c) = param_3[5];
    *(undefined8 *)(param_1 + 0x7604) = uVar4;
    *(undefined8 *)(param_1 + 0x761c) = uVar6;
    *(undefined8 *)(param_1 + 0x7614) = uVar5;
    uVar4 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    *(undefined8 *)(param_1 + 0x6b68) = param_3[1];
    *(undefined8 *)(param_1 + 0x6b60) = uVar4;
    *(undefined8 *)(param_1 + 0x6b78) = uVar6;
    *(undefined8 *)(param_1 + 0x6b70) = uVar5;
    uVar4 = param_3[4];
    uVar6 = param_3[7];
    uVar5 = param_3[6];
    *(undefined8 *)(param_1 + 0x6b88) = param_3[5];
    *(undefined8 *)(param_1 + 0x6b80) = uVar4;
    *(undefined8 *)(param_1 + 0x6b98) = uVar6;
    *(undefined8 *)(param_1 + 0x6b90) = uVar5;
    *(undefined1 *)(param_1 + 0xf691) = 1;
    *(undefined1 *)(param_1 + 0xf693) = 1;
    return;
  case 2:
    lVar3 = 0x6c10;
    break;
  case 3:
    lVar3 = 0x6c50;
    break;
  case 4:
    lVar3 = 0x6c90;
    break;
  case 5:
    lVar3 = 0x6cd0;
    break;
  case 6:
    lVar3 = 0x6d10;
    break;
  case 7:
    lVar3 = 0x6d50;
    break;
  case 8:
    lVar3 = 0x6d90;
    break;
  case 9:
    lVar3 = 0x6dd0;
    break;
  default:
    goto switchD_180167ed8_default;
  }
  uVar4 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  puVar1 = (undefined8 *)(param_1 + lVar3);
  puVar1[1] = param_3[1];
  *puVar1 = uVar4;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  uVar4 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  puVar1[5] = param_3[5];
  puVar1[4] = uVar4;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  *(undefined1 *)(param_1 + 0xf691) = 1;
switchD_180167ed8_default:
  return;
}

