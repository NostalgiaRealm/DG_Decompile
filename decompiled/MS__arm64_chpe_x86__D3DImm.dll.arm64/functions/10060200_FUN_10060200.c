/*
 * FUN_10060200 at 10060200
 * undefined FUN_10060200(void)
 * Address ranges: 10060200-10060537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10060200(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 extraout_x1;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  
  if (*(int *)(param_1 + 0x1570) == 0) goto LAB_100604e8;
  puVar1 = (undefined1 *)(param_1 + 0x228);
  uVar2 = *puVar1;
  *puVar1 = *(undefined1 *)(param_1 + 0x227);
  FUN_100514e0(param_1);
  FUN_10051b20(param_1,*(undefined1 *)(param_1 + 0xa85));
  FUN_10051d30(param_1);
  FUN_10051de0(param_1);
  FUN_10053c50(param_1);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x14),extraout_x1,param_1 + 0x1590,param_1 + 0x1588,
                     param_1 + 0x159c,*(int *)(param_1 + 0x1580) + 1,param_1 + 0x158c,
                     *(int *)(param_1 + 0x1574) * *(int *)(param_1 + 0x1570));
  (*extraout_w11)(uVar5,*extraout_w8);
  *puVar1 = uVar2;
  if ((*(char *)(param_1 + 0x9d9) == '\0') && (*(char *)(*(int *)(param_1 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_1 + 0xfd) != '\0') {
      bVar3 = false;
      goto LAB_10060354;
    }
  }
  else {
    bVar3 = true;
LAB_10060354:
    uVar5 = (*pcVar4)();
    (*extraout_w11_00)(uVar5);
    uVar5 = (*pcVar4)();
    (*extraout_w11_01)(uVar5,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
    if (bVar3) {
      uVar5 = (*pcVar4)();
      (*extraout_w11_02)(uVar5,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
      if (*(char *)(*(int *)(param_1 + 0xc) + 0x75f) != '\0') {
        (*(code *)PTR_FUN_100a100c)();
      }
    }
  }
  if (*(char *)(param_1 + 0xfe) == '\0') {
    uVar5 = (*pcVar4)();
    (*extraout_w11_03)(uVar5);
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar5 = (*pcVar4)();
      (*extraout_w11_04)(uVar5);
    }
    *(char *)(param_1 + 0xfe) = '\x01';
  }
  if (*(char *)(param_1 + 0xff) != '\0') {
    if (*(int *)(param_1 + 0x2f8) != 0) {
      puVar6 = (undefined4 *)(param_1 + 0xf8);
      puVar7 = (undefined4 *)(param_1 + 0xf4);
      uVar5 = (*pcVar4)();
      (*extraout_w11_05)(uVar5,*puVar7,*puVar6,1);
    }
    *(char *)(param_1 + 0xff) = '\0';
  }
LAB_100604e8:
  if ((*(int *)(param_1 + 0x1570) != 0) || (param_2 != '\0')) {
    *(undefined4 *)(param_1 + 0x1580) = 0;
    *(undefined8 *)(param_1 + 0x156c) = 0;
  }
  return;
}

