/*
 * FUN_1001d098 at 1001d098
 * undefined FUN_1001d098(void)
 * Address ranges: 1001d098-1001d183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d098(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint *extraout_w11;
  uint *extraout_w11_00;
  uint *puVar6;
  code *extraout_w11_01;
  undefined4 *extraout_w13;
  undefined4 *extraout_w13_00;
  undefined4 *extraout_w13_01;
  undefined4 *extraout_w13_02;
  undefined4 *puVar7;
  int extraout_w14;
  int extraout_w14_00;
  int extraout_w14_01;
  int extraout_w14_02;
  int iVar8;
  undefined1 auVar9 [16];
  
  uVar5 = (ulonglong)*(byte *)(*(int *)(param_1 + 0xc) + 0x14c);
  uVar3 = FUN_100273a8(param_1,*(int *)(param_1 + 0xc) + 0x141,uVar5);
  iVar8 = extraout_w14;
  puVar7 = extraout_w13;
  if (((uVar3 & 1) == 0) &&
     (uVar3 = FUN_100273a8(uVar3,extraout_w14 + 0x149,uVar5 & 0xffffffff), iVar8 = extraout_w14_00,
     puVar7 = extraout_w13_00, (uVar3 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  puVar6 = (uint *)(iVar8 + 0x218);
  *puVar6 = uVar2;
  if (uVar2 == 1) {
    uVar4 = FUN_10027440(uVar3,iVar8 + 0x151);
    uVar2 = ((uint)uVar4 & 0xff) + 1;
    *extraout_w11 = uVar2;
    iVar8 = extraout_w14_01;
    puVar6 = extraout_w11;
    puVar7 = extraout_w13_01;
    if (uVar2 == 2) {
      uVar2 = FUN_10027440(uVar4,extraout_w14_01 + 0x192);
      uVar2 = (uVar2 & 0xff) + 2;
      *extraout_w11_00 = uVar2;
      iVar8 = extraout_w14_02;
      puVar6 = extraout_w11_00;
      puVar7 = extraout_w13_02;
    }
  }
  uVar1 = *(uint *)(*(int *)(iVar8 + 4) + 0x33);
  if (uVar1 < uVar2) {
    *puVar6 = uVar1;
    uVar2 = uVar1;
  }
  auVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(*puVar7,uVar2);
  (*extraout_w11_01)(auVar9._0_8_ & 0xffffffff,auVar9._8_8_ & 0xffffffff);
  return;
}

