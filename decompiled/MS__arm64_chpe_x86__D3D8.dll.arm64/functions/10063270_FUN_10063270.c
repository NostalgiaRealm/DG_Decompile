/*
 * FUN_10063270 at 10063270
 * undefined FUN_10063270(void)
 * Address ranges: 10063270-1006358f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063270(int param_1,uint param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
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
    goto LAB_100632e4;
  }
  if (0xff < uVar3) {
    switch(param_2) {
    case 0:
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0x589c) = param_3[1];
      *(undefined8 *)(param_1 + 0x5894) = uVar7;
      *(undefined8 *)(param_1 + 0x58ac) = uVar6;
      *(undefined8 *)(param_1 + 0x58a4) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(&DAT_000058bc + param_1) = param_3[5];
      *(undefined8 *)(param_1 + 0x58b4) = uVar7;
      *(undefined8 *)(param_1 + 0x58cc) = uVar6;
      *(undefined8 *)(param_1 + 0x58c4) = uVar5;
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0x4e18) = param_3[1];
      *(undefined8 *)(param_1 + 0x4e10) = uVar7;
      *(undefined8 *)(param_1 + 0x4e28) = uVar6;
      *(undefined8 *)(param_1 + 20000) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0x4e38) = param_3[5];
      *(undefined8 *)(param_1 + 0x4e30) = uVar7;
      *(undefined8 *)(param_1 + 0x4e48) = uVar6;
      *(undefined8 *)(param_1 + 0x4e40) = uVar5;
      FUN_1002f7f0((undefined8 *)(param_1 + 0x5894),param_1 + 0x4e90,0);
      *(undefined4 *)(param_1 + 0x4e50) = *(undefined4 *)(param_1 + 0x4e90);
      *(undefined4 *)(param_1 + 0x4e54) = *(undefined4 *)(param_1 + 0x4ea0);
      *(undefined4 *)(param_1 + 0x4e58) = *(undefined4 *)(param_1 + 0x4eb0);
      *(undefined4 *)(param_1 + 0x4e5c) = *(undefined4 *)(param_1 + 0x4ec0);
      *(undefined4 *)(param_1 + 0x4e60) = *(undefined4 *)(param_1 + 0x4e94);
      *(undefined4 *)(param_1 + 0x4e64) = *(undefined4 *)(param_1 + 0x4ea4);
      *(undefined4 *)(param_1 + 0x4e68) = *(undefined4 *)(param_1 + 0x4eb4);
      *(undefined4 *)(param_1 + 0x4e6c) = *(undefined4 *)(param_1 + 0x4ec4);
      *(undefined4 *)(param_1 + 0x4e70) = *(undefined4 *)(param_1 + 0x4e98);
      *(undefined4 *)(param_1 + 0x4e74) = *(undefined4 *)(param_1 + 0x4ea8);
      *(undefined4 *)(param_1 + 0x4e78) = *(undefined4 *)(param_1 + 0x4eb8);
      *(undefined4 *)(param_1 + 0x4e7c) = *(undefined4 *)(param_1 + 0x4ec8);
      *(undefined4 *)(param_1 + 0x4e80) = *(undefined4 *)(param_1 + 0x4e9c);
      *(undefined4 *)(param_1 + 0x4e84) = *(undefined4 *)(param_1 + 0x4eac);
      *(undefined4 *)(param_1 + 0x4e88) = *(undefined4 *)(param_1 + 0x4ebc);
      *(undefined4 *)(param_1 + 0x4e8c) = *(undefined4 *)(param_1 + 0x4ecc);
      *(undefined1 *)(param_1 + 0xd981) = 1;
      *(undefined1 *)(param_1 + 0xd983) = 1;
      return;
    case 1:
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0x58dc) = param_3[1];
      *(undefined8 *)(param_1 + 0x58d4) = uVar7;
      *(undefined8 *)(param_1 + 0x58ec) = uVar6;
      *(undefined8 *)(&DAT_000058e4 + param_1) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0x58fc) = param_3[5];
      *(undefined8 *)(param_1 + 0x58f4) = uVar7;
      *(undefined8 *)(param_1 + 0x590c) = uVar6;
      *(undefined8 *)(param_1 + 0x5904) = uVar5;
      uVar7 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      *(undefined8 *)(param_1 + 0x4ed8) = param_3[1];
      *(undefined8 *)(param_1 + 0x4ed0) = uVar7;
      *(undefined8 *)(param_1 + 0x4ee8) = uVar6;
      *(undefined8 *)(param_1 + 0x4ee0) = uVar5;
      uVar7 = param_3[4];
      uVar6 = param_3[7];
      uVar5 = param_3[6];
      *(undefined8 *)(param_1 + 0x4ef8) = param_3[5];
      *(undefined8 *)(param_1 + 0x4ef0) = uVar7;
      *(undefined8 *)(param_1 + 0x4f08) = uVar6;
      *(undefined8 *)(param_1 + 0x4f00) = uVar5;
      *(undefined1 *)(param_1 + 0xd981) = 1;
      *(undefined1 *)(param_1 + 0xd983) = 1;
      return;
    case 2:
      iVar4 = 0x4ef0;
      break;
    case 3:
      iVar4 = 0x4f30;
      break;
    case 4:
      iVar4 = 0x4f70;
      break;
    case 5:
      iVar4 = 0x4fb0;
      break;
    case 6:
      iVar4 = 0x4ff0;
      break;
    case 7:
      iVar4 = 0x5030;
      break;
    case 8:
      iVar4 = 0x5070;
      break;
    case 9:
      iVar4 = 0x50b0;
      break;
    default:
      return;
    }
    uVar7 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    puVar2 = (undefined8 *)(param_1 + 0x90 + iVar4);
    puVar2[1] = param_3[1];
    *puVar2 = uVar7;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    uVar7 = param_3[4];
    uVar6 = param_3[7];
    uVar5 = param_3[6];
    puVar2[5] = param_3[5];
    puVar2[4] = uVar7;
    puVar2[7] = uVar6;
    puVar2[6] = uVar5;
    *(undefined1 *)(param_1 + 0xd981) = 1;
    return;
  }
LAB_100632e4:
  iVar4 = param_1 + 0x90 + uVar3 * 0x40;
  uVar7 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(iVar4 + 0x58dc) = param_3[1];
  *(undefined8 *)(iVar4 + 0x58d4) = uVar7;
  *(undefined8 *)(iVar4 + 0x58ec) = uVar6;
  *(undefined8 *)(&DAT_000058e4 + iVar4) = uVar5;
  uVar7 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  *(undefined8 *)(iVar4 + 0x58fc) = param_3[5];
  *(undefined8 *)(iVar4 + 0x58f4) = uVar7;
  *(undefined8 *)(iVar4 + 0x590c) = uVar6;
  *(undefined8 *)(iVar4 + 0x5904) = uVar5;
  *(undefined1 *)(param_1 + 0xd982) = 1;
  puVar1 = (uint *)(param_1 + 0xd970 + ((uVar3 >> 5) + 5) * 4);
  *puVar1 = 1 << (ulonglong)(uVar3 & 0x1f) | *puVar1;
  if (uVar3 != 0) {
    return;
  }
  uVar7 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(param_1 + 0x4d98) = param_3[1];
  *(undefined8 *)(param_1 + 0x4d90) = uVar7;
  *(undefined8 *)(param_1 + 0x4da8) = uVar6;
  *(undefined8 *)(param_1 + 0x4da0) = uVar5;
  uVar7 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  *(undefined8 *)(param_1 + 0x4db8) = param_3[5];
  *(undefined8 *)(param_1 + 0x4db0) = uVar7;
  *(undefined8 *)(param_1 + 0x4dc8) = uVar6;
  *(undefined8 *)(param_1 + 0x4dc0) = uVar5;
  *(undefined1 *)(param_1 + 0xd981) = 1;
  return;
}

