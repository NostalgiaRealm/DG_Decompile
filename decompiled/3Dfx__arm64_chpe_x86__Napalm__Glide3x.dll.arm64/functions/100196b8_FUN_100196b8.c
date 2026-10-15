/*
 * FUN_100196b8 at 100196b8
 * undefined FUN_100196b8(void)
 * Address ranges: 100196b8-1001989f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100196b8(int param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auVar9 [16];
  
  bVar1 = false;
  iVar3 = FUN_1001cae0(*(undefined4 *)(param_1 + 0x365c),*(undefined4 *)(param_1 + 0x2b1c));
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar3 != -1) {
    auVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11)(auVar9._0_8_ & 0xffffffff,auVar9._8_8_ & 0xffffffff);
    bVar1 = *(int *)(iVar3 + 0x10) == 5 || *(int *)(iVar3 + 0x10) == 8;
  }
  if ((param_2 == '\0') || (param_4 == '\0')) {
    bVar8 = 0;
    if (param_2 != '\0') goto LAB_1001978c;
LAB_1001979c:
    bVar6 = 0;
    if (param_2 != '\0') goto LAB_100197a8;
  }
  else {
    bVar8 = 1;
LAB_1001978c:
    if (param_5 == '\0') goto LAB_1001979c;
    bVar6 = 2;
LAB_100197a8:
    bVar5 = 4;
    if (param_6 != '\0') goto LAB_100197b8;
  }
  bVar5 = 0;
LAB_100197b8:
  if (bVar1) {
    param_3 = param_2 != '\0' && param_7 != '\0';
  }
  bVar4 = 8;
  if (param_3 == '\0') {
    bVar4 = 0;
  }
  bVar5 = bVar4 | bVar8 | bVar6 | bVar5;
  if (bVar5 != *(byte *)(param_1 + 0x2c7c)) {
    FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
    (*pcVar2)();
    (*extraout_w11_00)(param_1);
    *(byte *)(param_1 + 0x2c7c) = bVar5;
    *(undefined1 *)(param_1 + 0x2da9) = 1;
    if ((*(int *)(param_1 + 0x2b30) == 0) || (*(int *)(param_1 + 0x2c20) != 0)) {
      uVar7 = 0xff0000;
    }
    else {
      uVar7 = 0;
    }
    *(uint *)(param_1 + 0x2ddc) = *(ushort *)(param_1 + 0x2ddc) | uVar7;
    *(undefined1 *)(param_1 + 0x3650) = 1;
  }
  return;
}

