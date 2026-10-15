/*
 * FUN_140016798 at 140016798
 * bool __fastcall FUN_140016798(undefined8 param_1, undefined8 param_2, longlong * param_3, undefined4 param_4, int * param_5)
 * Address ranges: 140016798-140016963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140016798(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  int *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  bVar1 = false;
  uVar7 = 0;
  bVar8 = true;
  while (uVar2 = (**(code **)(*param_3 + 0x38))(param_3,param_4), uVar7 < uVar2) {
    pbVar6 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar7);
    iVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar7);
    iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar7);
    iVar5 = FUN_140024ce8(pbVar6,(byte *)"version");
    if (iVar5 != 0) {
      return false;
    }
    if ((iVar4 == 0) && (iVar3 != 0)) {
      bVar1 = FUN_1400163f4(pbVar6,param_3,param_4,uVar7,param_5,iVar3);
      bVar8 = bVar1;
    }
    uVar7 = uVar7 + 1;
    if (bVar8 == false) {
      return false;
    }
  }
  if (bVar1 == false) {
    *param_5 = 0x287;
    return bVar8;
  }
  if (*param_5 == 0x287) {
    return bVar8;
  }
  if (*param_5 == 0x286) {
    return bVar8;
  }
  if (*param_5 == 0x285) {
    return bVar8;
  }
  if (*param_5 == 0x283) {
    return bVar8;
  }
  if (*param_5 == 0x282) {
    return bVar8;
  }
  if (*param_5 == 0x281) {
    return bVar8;
  }
  if (*param_5 == 0x280) {
    return bVar8;
  }
  if (*param_5 == 0x279) {
    return bVar8;
  }
  if (*param_5 == 0x278) {
    return bVar8;
  }
  if (*param_5 == 0x277) {
    return bVar8;
  }
  if (*param_5 == 0x276) {
    return bVar8;
  }
  if (*param_5 == 0x275) {
    return bVar8;
  }
  if (*param_5 == 0x274) {
    return bVar8;
  }
  if (*param_5 == 0x273) {
    return bVar8;
  }
  if (*param_5 == 0x270) {
    return bVar8;
  }
  if (*param_5 == 0x263) {
    return bVar8;
  }
  if (*param_5 == 0x262) {
    return bVar8;
  }
  if (*param_5 == 0x261) {
    return bVar8;
  }
  if (*param_5 == 0x260) {
    return bVar8;
  }
  if (*param_5 == 0x255) {
    return bVar8;
  }
  return false;
}

