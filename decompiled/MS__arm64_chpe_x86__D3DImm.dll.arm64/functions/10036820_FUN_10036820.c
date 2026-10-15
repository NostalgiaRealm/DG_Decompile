/*
 * FUN_10036820 at 10036820
 * undefined FUN_10036820(void)
 * Address ranges: 10036820-10036bab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036820(int param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
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
  else if (uVar3 < 8) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(param_1,0);
    goto LAB_10036890;
  }
  if (7 < uVar3) {
    switch(param_2) {
    case 0:
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0x184c) = param_3[1];
      *(undefined8 *)(param_1 + 0x1844) = uVar7;
      *(undefined8 *)(param_1 + 0x185c) = uVar6;
      *(undefined8 *)(param_1 + 0x1854) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0x186c) = param_3[5];
      *(undefined8 *)(param_1 + 0x1864) = uVar7;
      *(undefined8 *)(param_1 + 0x187c) = uVar6;
      *(undefined8 *)(param_1 + 0x1874) = uVar5;
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0xaf8) = param_3[1];
      *(undefined8 *)(param_1 + 0xaf0) = uVar7;
      *(undefined8 *)(param_1 + 0xb08) = uVar6;
      *(undefined8 *)(param_1 + 0xb00) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0xb18) = param_3[5];
      *(undefined8 *)(param_1 + 0xb10) = uVar7;
      *(undefined8 *)(param_1 + 0xb28) = uVar6;
      *(undefined8 *)(param_1 + 0xb20) = uVar5;
      FUN_100126d8((undefined8 *)(param_1 + 0x1844),(undefined4 *)(param_1 + 0xb70),0);
      *(undefined4 *)(param_1 + 0xb30) = *(undefined4 *)(param_1 + 0xb70);
      *(undefined4 *)(param_1 + 0xb34) = *(undefined4 *)(param_1 + 0xb80);
      *(undefined4 *)(param_1 + 0xb38) = *(undefined4 *)(param_1 + 0xb90);
      *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(param_1 + 0xba0);
      *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(param_1 + 0xb74);
      *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)(param_1 + 0xb84);
      *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)(param_1 + 0xb94);
      *(undefined4 *)(param_1 + 0xb4c) = *(undefined4 *)(param_1 + 0xba4);
      *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)(param_1 + 0xb78);
      *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)(param_1 + 0xb88);
      *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_1 + 0xb98);
      *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_1 + 0xba8);
      *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + 0xb7c);
      *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_1 + 0xb8c);
      *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_1 + 0xb9c);
      *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_1 + 0xbac);
      *(undefined1 *)(param_1 + 0x1d41) = 1;
      *(undefined1 *)(param_1 + 0x1d43) = 1;
      return;
    case 1:
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0x188c) = param_3[1];
      *(undefined8 *)(param_1 + 0x1884) = uVar7;
      *(undefined8 *)(param_1 + 0x189c) = uVar6;
      *(undefined8 *)(param_1 + 0x1894) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0x18ac) = param_3[5];
      *(undefined8 *)(param_1 + 0x18a4) = uVar7;
      *(undefined8 *)(param_1 + 0x18bc) = uVar6;
      *(undefined8 *)(param_1 + 0x18b4) = uVar5;
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 3000) = param_3[1];
      *(undefined8 *)(param_1 + 0xbb0) = uVar7;
      *(undefined8 *)(param_1 + 0xbc8) = uVar6;
      *(undefined8 *)(param_1 + 0xbc0) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0xbd8) = param_3[5];
      *(undefined8 *)(param_1 + 0xbd0) = uVar7;
      *(undefined8 *)(param_1 + 0xbe8) = uVar6;
      *(undefined8 *)(param_1 + 0xbe0) = uVar5;
      *(undefined1 *)(param_1 + 0x1d41) = 1;
      *(undefined1 *)(param_1 + 0x1d43) = 1;
      return;
    case 2:
      puVar4 = (undefined8 *)(param_1 + 0xc90);
      break;
    case 3:
      puVar4 = (undefined8 *)(param_1 + 0xcd0);
      break;
    case 4:
      puVar4 = (undefined8 *)(param_1 + 0xd10);
      break;
    case 5:
      puVar4 = (undefined8 *)(param_1 + 0xd50);
      break;
    case 6:
      puVar4 = (undefined8 *)(param_1 + 0xd90);
      break;
    case 7:
      puVar4 = (undefined8 *)(param_1 + 0xdd0);
      break;
    case 8:
      puVar4 = (undefined8 *)(param_1 + 0xe10);
      break;
    case 9:
      puVar4 = (undefined8 *)(param_1 + 0xe50);
      break;
    default:
      return;
    }
    uVar7 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    puVar4[1] = param_3[1];
    *puVar4 = uVar7;
    puVar4[3] = uVar6;
    puVar4[2] = uVar5;
    uVar7 = param_3[4];
    uVar6 = param_3[7];
    uVar5 = param_3[6];
    puVar4[5] = param_3[5];
    puVar4[4] = uVar7;
    puVar4[7] = uVar6;
    puVar4[6] = uVar5;
    *(undefined1 *)(param_1 + 0x1d41) = 1;
    return;
  }
LAB_10036890:
  iVar1 = param_1 + uVar3 * 0x40;
  uVar7 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(iVar1 + 0x1928) = param_3[1];
  *(undefined8 *)(iVar1 + 0x1920) = uVar7;
  *(undefined8 *)(iVar1 + 0x1938) = uVar6;
  *(undefined8 *)(iVar1 + 0x1930) = uVar5;
  uVar7 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  *(undefined8 *)(iVar1 + 0x1948) = param_3[5];
  *(undefined8 *)(iVar1 + 0x1940) = uVar7;
  *(undefined8 *)(iVar1 + 0x1958) = uVar6;
  *(undefined8 *)(iVar1 + 0x1950) = uVar5;
  *(undefined1 *)(param_1 + 0x1d42) = 1;
  puVar2 = (uint *)(param_1 + 0x1d30 + ((uVar3 >> 5) + 5) * 4);
  *puVar2 = 1 << (ulonglong)(uVar3 & 0x1f) | *puVar2;
  if (uVar3 != 0) {
    return;
  }
  uVar7 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(param_1 + 0xa78) = param_3[1];
  *(undefined8 *)(param_1 + 0xa70) = uVar7;
  *(undefined8 *)(param_1 + 0xa88) = uVar6;
  *(undefined8 *)(param_1 + 0xa80) = uVar5;
  uVar7 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  *(undefined8 *)(param_1 + 0xa98) = param_3[5];
  *(undefined8 *)(param_1 + 0xa90) = uVar7;
  *(undefined8 *)(param_1 + 0xaa8) = uVar6;
  *(undefined8 *)(param_1 + 0xaa0) = uVar5;
  *(undefined1 *)(param_1 + 0x1d41) = 1;
  return;
}

