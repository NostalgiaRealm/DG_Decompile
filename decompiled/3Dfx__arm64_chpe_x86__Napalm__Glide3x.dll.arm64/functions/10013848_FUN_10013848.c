/*
 * FUN_10013848 at 10013848
 * undefined FUN_10013848(void)
 * Address ranges: 10013848-10013deb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10013848(int param_1)

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
  
  FUN_10013760(param_1);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x3651) != '\0') {
    iVar5 = FUN_1001cae0(param_1 + 0x37b8,*(undefined4 *)(param_1 + 0x2b1c));
    if (iVar5 != -1) {
      iVar5 = param_1 + iVar5 * 0x104;
      iVar7 = *(int *)(param_1 + 0x2b48);
      iVar2 = *(int *)(param_1 + 0x2b40);
      if (*(int *)(param_1 + 0x2dc8) == 1) {
        uVar8 = *(uint *)(iVar5 + 0x3918);
        iVar2 = uVar8 - iVar7;
        iVar7 = uVar8 - *(int *)(param_1 + 0x2b40);
      }
      uVar8 = *(uint *)(iVar5 + 0x3914);
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        uVar4 = SoftwareBreakpoint(0xf004,0x10013938);
        (*(code *)uVar4)();
      }
      local_58 = 0;
      if (uVar8 != 0) {
        local_58 = (uint)(*(int *)(iVar5 + 0x391c) * *(int *)(param_1 + 0x2b3c)) / uVar8;
      }
      uVar9 = *(uint *)(iVar5 + 0x3918);
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        uVar4 = SoftwareBreakpoint(0xf004,0x1001395c);
        (*(code *)uVar4)();
      }
      local_54 = 0;
      if (uVar9 != 0) {
        local_54 = (uint)(*(int *)(iVar5 + 0x3920) * iVar2) / uVar9;
      }
      local_50 = 0;
      if (uVar8 != 0) {
        local_50 = (uint)(*(int *)(iVar5 + 0x391c) * *(int *)(param_1 + 0x2b44)) / uVar8;
      }
      local_4c = 0;
      if (uVar9 != 0) {
        local_4c = (uint)(*(int *)(iVar5 + 0x3920) * iVar7) / uVar9;
      }
      uVar6 = (*pcVar3)();
      (*extraout_w11)(uVar6,1,&local_58);
    }
    *(undefined1 *)(param_1 + 0x3651) = 0;
  }
  if (*(char *)(param_1 + 0x3652) != '\0') {
    uVar6 = (*pcVar3)();
    iVar5 = (*extraout_w11_00)(uVar6,*(undefined4 *)(param_1 + 0x369c),0,4,0,&local_58);
    if (-1 < iVar5) {
      uVar8 = 0;
      if (*(uint *)(param_1 + 0xdc) == 0) {
        uVar9 = 0;
      }
      else {
        do {
          pbVar1 = (byte *)(param_1 + 0x3d4 + uVar8);
          iVar5 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(float *)(local_58 + iVar5) = (float)*pbVar1 / 255.0;
          uVar9 = *(uint *)(param_1 + 0xdc);
        } while (uVar8 < uVar9);
      }
      *(float *)(local_58 + uVar9 * 4) = (float)*(byte *)(uVar9 + param_1 + 0x3d3) / 255.0;
      uVar6 = (*pcVar3)();
      (*extraout_w11_01)(uVar6,*(undefined4 *)(param_1 + 0x369c),0);
      *(undefined1 *)(param_1 + 0x3652) = 0;
    }
  }
  uVar8 = 0;
  do {
    if (*(char *)(param_1 + 0x3653 + uVar8) != '\0') {
      FUN_10036308(*(undefined4 *)(uVar8 * 4 + param_1 + 0xd4f0));
      *(undefined1 *)(uVar8 + param_1 + 0x3653) = 0;
    }
    if (*(char *)(param_1 + 0x3656 + uVar8) != '\0') {
      iVar5 = *(int *)(uVar8 * 4 + param_1 + 0xd4f0);
      if (*(char *)(iVar5 + 0x3014) != '\0') {
        uVar6 = (*pcVar3)();
        iVar7 = (*extraout_w11_02)(uVar6,*(undefined4 *)(iVar5 + 0x302c),0,4,0,&local_58);
        if (-1 < iVar7) {
          FUN_10083b40(local_58,iVar5 + 0x14,0x1000);
          uVar6 = (*pcVar3)();
          (*extraout_w11_03)(uVar6,*(undefined4 *)(iVar5 + 0x302c),0);
          *(undefined1 *)(iVar5 + 0x3014) = 0;
        }
      }
      if (*(char *)(iVar5 + 0x3015) != '\0') {
        uVar6 = (*pcVar3)();
        iVar7 = (*extraout_w11_04)(uVar6,*(undefined4 *)(iVar5 + 0x3024),0,4,0,&local_58);
        if (-1 < iVar7) {
          FUN_10083b40(local_58,iVar5 + 0x1014,0x1000);
          uVar6 = (*pcVar3)();
          (*extraout_w11_05)(uVar6,*(undefined4 *)(iVar5 + 0x3024),0);
          *(undefined1 *)(iVar5 + 0x3015) = 0;
        }
      }
      if (*(char *)(iVar5 + 0x3016) != '\0') {
        uVar6 = (*pcVar3)();
        iVar7 = (*extraout_w11_06)(uVar6,*(undefined4 *)(iVar5 + 0x3028),0,4,0,&local_58);
        if (-1 < iVar7) {
          FUN_10083b40(local_58,iVar5 + 0x2014,0x1000);
          uVar6 = (*pcVar3)();
          (*extraout_w11_07)(uVar6,*(undefined4 *)(iVar5 + 0x3028),0);
          *(undefined1 *)(iVar5 + 0x3016) = 0;
        }
      }
      *(undefined1 *)(uVar8 + param_1 + 0x3656) = 0;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  return;
}

