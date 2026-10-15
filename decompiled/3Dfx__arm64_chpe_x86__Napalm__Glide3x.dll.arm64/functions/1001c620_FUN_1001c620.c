/*
 * FUN_1001c620 at 1001c620
 * undefined FUN_1001c620(void)
 * Address ranges: 1001c620-1001c883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1001c620(undefined4 param_1,undefined4 param_2,int param_3,int param_4,char param_5,char param_6
            ,char param_7,char param_8,undefined1 param_9,undefined4 param_10,undefined4 param_11,
            undefined4 param_12,undefined4 param_13)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auVar7 [16];
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar5 = (*extraout_w11)(param_1,param_2);
  auVar7 = FUN_1001b518(param_3,*(undefined1 *)(iVar5 + 0x48));
  pbVar1 = (byte *)(iVar5 + 0x4a);
  bVar3 = auVar7._0_4_ == 0x20;
  uVar4 = 1;
  if ((*pbVar1 & 1) != 0) {
    if ((param_3 != 0xff) &&
       ((((*(int *)(&DAT_100a02d0 + param_3 * 4) != *(int *)(iVar5 + 8) &&
          (*(int *)(&DAT_100a02d0 + param_3 * 4) != *(int *)(iVar5 + 0xc))) ||
         (param_4 != *(int *)(iVar5 + 0x60))) ||
        ((bVar3 != (bool)*(char *)(iVar5 + 0x7c) ||
         (param_5 != *(char *)(iVar5 + 0x7d) || param_7 != '\0')))))) {
      auVar7 = FUN_1001c4e0(param_1,param_2,1,0);
    }
    if ((*(char *)(iVar5 + 0x7d) != '\0') && (param_8 != '\0')) {
      auVar7 = FUN_1001c4e0(param_1,param_2,1,0);
    }
  }
  if ((*pbVar1 & 1) == 0) {
    *(undefined8 *)(iVar5 + 0x8c) = 0;
    *(undefined8 *)(iVar5 + 0x84) = 0;
    *(undefined8 *)(iVar5 + 0x9c) = 0;
    *(undefined8 *)(iVar5 + 0x94) = 0;
  }
  *(undefined8 *)(iVar5 + 0x6c) = 0;
  *(int *)(iVar5 + 0x5c) = param_3;
  *(undefined1 *)(iVar5 + 0x7f) = param_9;
  *(undefined4 *)(iVar5 + 0x74) = param_11;
  *(undefined4 *)(iVar5 + 0x78) = param_13;
  *(int *)(iVar5 + 0x60) = param_4;
  *(bool *)(iVar5 + 0x7c) = bVar3;
  *(char *)(iVar5 + 0x7d) = param_5;
  *(char *)(iVar5 + 0x80) = param_7;
  *(bool *)(iVar5 + 0x7e) = param_7 == '\0' || param_8 == '\0';
  *(byte *)(iVar5 + 0x82) = *(byte *)(iVar5 + 0x82) & 0xfc;
  if (param_6 == '\0') {
    if ((param_7 != '\0' && (param_7 == '\0' || param_8 == '\0')) || ((*pbVar1 & 1) != 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    (*pcVar2)(auVar7._0_8_,auVar7._8_8_,uVar6);
    uVar4 = (*extraout_w11_00)(param_1,param_2,uVar6 & 0xffffffff,bVar3);
  }
  return uVar4;
}

