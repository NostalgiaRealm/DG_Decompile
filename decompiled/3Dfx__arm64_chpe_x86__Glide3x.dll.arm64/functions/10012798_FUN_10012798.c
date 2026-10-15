/*
 * FUN_10012798 at 10012798
 * undefined FUN_10012798(void)
 * Address ranges: 10012798-10012d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012798(int param_1)

{
  byte *pbVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  FUN_100126b0(param_1);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x32d1) != '\0') {
    iVar5 = FUN_1001c518(param_1 + 0x3438,*(undefined4 *)(param_1 + 0x29e0));
    if (iVar5 != -1) {
      iVar5 = param_1 + iVar5 * 0x104;
      iVar7 = *(int *)(param_1 + 0x2a0c);
      iVar2 = *(int *)(param_1 + 0x2a04);
      if (*(int *)(param_1 + 0x2c78) == 1) {
        uVar8 = *(uint *)(iVar5 + 0x3598);
        iVar2 = uVar8 - iVar7;
        iVar7 = uVar8 - *(int *)(param_1 + 0x2a04);
      }
      uVar8 = *(uint *)(iVar5 + 0x3594);
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        uVar4 = SoftwareBreakpoint(0xf004,0x10012888);
        (*(code *)uVar4)();
      }
      local_58 = 0;
      if (uVar8 != 0) {
        local_58 = (uint)(*(int *)(iVar5 + 0x359c) * *(int *)(param_1 + 0x2a00)) / uVar8;
      }
      uVar9 = *(uint *)(iVar5 + 0x3598);
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        uVar4 = SoftwareBreakpoint(0xf004,0x100128ac);
        (*(code *)uVar4)();
      }
      local_54 = 0;
      if (uVar9 != 0) {
        local_54 = (uint)(*(int *)(iVar5 + 0x35a0) * iVar2) / uVar9;
      }
      local_50 = 0;
      if (uVar8 != 0) {
        local_50 = (uint)(*(int *)(iVar5 + 0x359c) * *(int *)(param_1 + 0x2a08)) / uVar8;
      }
      local_4c = 0;
      if (uVar9 != 0) {
        local_4c = (uint)(*(int *)(iVar5 + 0x35a0) * iVar7) / uVar9;
      }
      uVar6 = (*pcVar3)();
      (*extraout_w11)(uVar6,1,&local_58);
    }
    *(undefined1 *)(param_1 + 0x32d1) = 0;
  }
  if (*(char *)(param_1 + 0x32d2) != '\0') {
    uVar6 = (*pcVar3)();
    iVar5 = (*extraout_w11_00)(uVar6,*(undefined4 *)(param_1 + 0x331c),0,4,0,&local_58);
    if (-1 < iVar5) {
      uVar8 = 0;
      if (*(uint *)(param_1 + 0xd8) == 0) {
        uVar9 = 0;
      }
      else {
        do {
          pbVar1 = (byte *)(param_1 + 0x298 + uVar8);
          iVar5 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(float *)(local_58 + iVar5) = (float)*pbVar1 / 255.0;
          uVar9 = *(uint *)(param_1 + 0xd8);
        } while (uVar8 < uVar9);
      }
      *(float *)(local_58 + uVar9 * 4) = (float)*(byte *)(uVar9 + param_1 + 0x297) / 255.0;
      uVar6 = (*pcVar3)();
      (*extraout_w11_01)(uVar6,*(undefined4 *)(param_1 + 0x331c),0);
      *(undefined1 *)(param_1 + 0x32d2) = 0;
    }
  }
  uVar8 = 0;
  do {
    if (*(char *)(param_1 + 0x32d3 + uVar8) != '\0') {
      FUN_100370f8(*(undefined4 *)(uVar8 * 4 + param_1 + 0xd140));
      *(undefined1 *)(uVar8 + param_1 + 0x32d3) = 0;
    }
    if (*(char *)(param_1 + 0x32d6 + uVar8) != '\0') {
      iVar5 = *(int *)(uVar8 * 4 + param_1 + 0xd140);
      if (*(char *)(iVar5 + 0x3014) != '\0') {
        uVar6 = (*pcVar3)();
        iVar7 = (*extraout_w11_02)(uVar6,*(undefined4 *)(iVar5 + 0x302c),0,4,0,&local_58);
        if (-1 < iVar7) {
          FUN_1007e4a0(local_58,iVar5 + 0x14,0x1000);
          uVar6 = (*pcVar3)();
          (*extraout_w11_03)(uVar6,*(undefined4 *)(iVar5 + 0x302c),0);
          *(undefined1 *)(iVar5 + 0x3014) = 0;
        }
      }
      if (*(char *)(iVar5 + 0x3015) != '\0') {
        uVar6 = (*pcVar3)();
        iVar7 = (*extraout_w11_04)(uVar6,*(undefined4 *)(iVar5 + 0x3024),0,4,0,&local_58);
        if (-1 < iVar7) {
          FUN_1007e4a0(local_58,iVar5 + 0x1014,0x1000);
          uVar6 = (*pcVar3)();
          (*extraout_w11_05)(uVar6,*(undefined4 *)(iVar5 + 0x3024),0);
          *(undefined1 *)(iVar5 + 0x3015) = 0;
        }
      }
      if (*(char *)(iVar5 + 0x3016) != '\0') {
        uVar6 = (*pcVar3)();
        iVar7 = (*extraout_w11_06)(uVar6,*(undefined4 *)(iVar5 + 0x3028),0,4,0,&local_58);
        if (-1 < iVar7) {
          FUN_1007e4a0(local_58,iVar5 + 0x2014,0x1000);
          uVar6 = (*pcVar3)();
          (*extraout_w11_07)(uVar6,*(undefined4 *)(iVar5 + 0x3028),0);
          *(undefined1 *)(iVar5 + 0x3016) = 0;
        }
      }
      *(undefined1 *)(uVar8 + param_1 + 0x32d6) = 0;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  return;
}

