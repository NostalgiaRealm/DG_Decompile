/*
 * FUN_10079880 at 10079880
 * undefined FUN_10079880(void)
 * Address ranges: 10079880-10079b9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079880(int param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2 - 10;
  if (param_2 < 10) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
  }
  else if (uVar3 < 0x100) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(param_1,0);
    goto LAB_100798f4;
  }
  if (0xff < uVar3) {
    switch(param_2) {
    case 0:
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0x758c) = param_3[1];
      *(undefined8 *)(param_1 + 0x7584) = uVar7;
      *(undefined8 *)(param_1 + 0x759c) = uVar6;
      *(undefined8 *)(param_1 + 0x7594) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0x75ac) = param_3[5];
      *(undefined8 *)(param_1 + 0x75a4) = uVar7;
      *(undefined8 *)(param_1 + 0x75bc) = uVar6;
      *(undefined8 *)(param_1 + 0x75b4) = uVar5;
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0x6a88) = param_3[1];
      *(undefined8 *)(param_1 + 0x6a80) = uVar7;
      *(undefined8 *)(param_1 + 0x6a98) = uVar6;
      *(undefined8 *)(param_1 + 0x6a90) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0x6aa8) = param_3[5];
      *(undefined8 *)(param_1 + 0x6aa0) = uVar7;
      *(undefined8 *)(param_1 + 0x6ab8) = uVar6;
      *(undefined8 *)(param_1 + 0x6ab0) = uVar5;
      FUN_100392f0((undefined8 *)(param_1 + 0x7584),param_1 + 0x6b00,0);
      *(undefined4 *)(param_1 + 0x6ac0) = *(undefined4 *)(param_1 + 0x6b00);
      *(undefined4 *)(param_1 + 0x6ac4) = *(undefined4 *)(param_1 + 0x6b10);
      *(undefined4 *)(param_1 + 0x6ac8) = *(undefined4 *)(param_1 + 0x6b20);
      *(undefined4 *)(param_1 + 0x6acc) = *(undefined4 *)(param_1 + 0x6b30);
      *(undefined4 *)(param_1 + 0x6ad0) = *(undefined4 *)(param_1 + 0x6b04);
      *(undefined4 *)(param_1 + 0x6ad4) = *(undefined4 *)(param_1 + 0x6b14);
      *(undefined4 *)(param_1 + 0x6ad8) = *(undefined4 *)(param_1 + 0x6b24);
      *(undefined4 *)(param_1 + 0x6adc) = *(undefined4 *)(param_1 + 0x6b34);
      *(undefined4 *)(param_1 + 0x6ae0) = *(undefined4 *)(param_1 + 0x6b08);
      *(undefined4 *)(param_1 + 0x6ae4) = *(undefined4 *)(param_1 + 0x6b18);
      *(undefined4 *)(param_1 + 0x6ae8) = *(undefined4 *)(param_1 + 0x6b28);
      *(undefined4 *)(param_1 + 0x6aec) = *(undefined4 *)(param_1 + 0x6b38);
      *(undefined4 *)(param_1 + 0x6af0) = *(undefined4 *)(param_1 + 0x6b0c);
      *(undefined4 *)(param_1 + 0x6af4) = *(undefined4 *)(param_1 + 0x6b1c);
      *(undefined4 *)(param_1 + 0x6af8) = *(undefined4 *)(param_1 + 0x6b2c);
      *(undefined4 *)(param_1 + 0x6afc) = *(undefined4 *)(param_1 + 0x6b3c);
      *(undefined1 *)(param_1 + 0xf671) = 1;
      *(undefined1 *)(param_1 + 0xf673) = 1;
      return;
    case 1:
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0x75cc) = param_3[1];
      *(undefined8 *)(param_1 + 0x75c4) = uVar7;
      *(undefined8 *)(param_1 + 0x75dc) = uVar6;
      *(undefined8 *)(param_1 + 0x75d4) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0x75ec) = param_3[5];
      *(undefined8 *)(param_1 + 0x75e4) = uVar7;
      *(undefined8 *)(param_1 + 0x75fc) = uVar6;
      *(undefined8 *)(param_1 + 0x75f4) = uVar5;
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0x6b48) = param_3[1];
      *(undefined8 *)(param_1 + 0x6b40) = uVar7;
      *(undefined8 *)(param_1 + 0x6b58) = uVar6;
      *(undefined8 *)(param_1 + 0x6b50) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0x6b68) = param_3[5];
      *(undefined8 *)(param_1 + 0x6b60) = uVar7;
      *(undefined8 *)(param_1 + 0x6b78) = uVar6;
      *(undefined8 *)(param_1 + 0x6b70) = uVar5;
      *(undefined1 *)(param_1 + 0xf671) = 1;
      *(undefined1 *)(param_1 + 0xf673) = 1;
      return;
    case 2:
      iVar4 = 0x6b60;
      break;
    case 3:
      iVar4 = 0x6ba0;
      break;
    case 4:
      iVar4 = 0x6be0;
      break;
    case 5:
      iVar4 = 0x6c20;
      break;
    case 6:
      iVar4 = 0x6c60;
      break;
    case 7:
      iVar4 = 0x6ca0;
      break;
    case 8:
      iVar4 = 0x6ce0;
      break;
    case 9:
      iVar4 = 0x6d20;
      break;
    default:
      return;
    }
    uVar7 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    puVar1 = (undefined8 *)(param_1 + 0x90 + iVar4);
    puVar1[1] = param_3[1];
    *puVar1 = uVar7;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    uVar7 = param_3[4];
    uVar6 = param_3[7];
    uVar5 = param_3[6];
    puVar1[5] = param_3[5];
    puVar1[4] = uVar7;
    puVar1[7] = uVar6;
    puVar1[6] = uVar5;
    *(undefined1 *)(param_1 + 0xf671) = 1;
    return;
  }
LAB_100798f4:
  uVar7 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  puVar1 = (undefined8 *)(param_1 + 0x90 + (param_2 + 0x1cd) * 0x40);
  puVar1[1] = param_3[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  uVar7 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  puVar1[5] = param_3[5];
  puVar1[4] = uVar7;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  *(undefined1 *)(param_1 + 0xf672) = 1;
  puVar2 = (uint *)(param_1 + 0xf660 + ((uVar3 >> 5) + 5) * 4);
  *puVar2 = 1 << (ulonglong)(uVar3 & 0x1f) | *puVar2;
  if (uVar3 != 0) {
    return;
  }
  uVar7 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(param_1 + 0x6a08) = param_3[1];
  *(undefined8 *)(param_1 + 0x6a00) = uVar7;
  *(undefined8 *)(param_1 + 0x6a18) = uVar6;
  *(undefined8 *)(param_1 + 0x6a10) = uVar5;
  uVar7 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  *(undefined8 *)(param_1 + 0x6a28) = param_3[5];
  *(undefined8 *)(param_1 + 0x6a20) = uVar7;
  *(undefined8 *)(param_1 + 0x6a38) = uVar6;
  *(undefined8 *)(param_1 + 0x6a30) = uVar5;
  *(undefined1 *)(param_1 + 0xf671) = 1;
  return;
}

