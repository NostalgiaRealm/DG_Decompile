/*
 * FUN_10064740 at 10064740
 * undefined FUN_10064740(void)
 * Address ranges: 10064740-10064b5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10064740(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                undefined4 param_6,undefined4 *param_7,char param_8)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  uint local_78;
  int local_74;
  undefined4 *puStack_70;
  code *local_6c;
  int local_68;
  undefined4 local_64;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_78 = param_4;
  local_64 = param_6;
  iVar5 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar5 == 0) {
    FUN_1004bc70(0);
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar5 = -0x7789ff7e;
  if (param_5 == 0) goto LAB_10064b28;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  local_68 = (*extraout_w11)(param_5);
  iVar5 = -0x7789ff9c;
  if ((*(uint *)(local_68 + 0x68) & 0x2001) == 0) goto LAB_10064b28;
  uStack_48 = 0;
  local_50 = 0;
  iVar5 = -0x7ff8ffa9;
  iVar6 = FUN_10081e90(param_3,&local_50,0x10);
  if (iVar6 == 0) goto LAB_10064b28;
  local_6c = pcVar2;
  iVar5 = *(int *)(param_1 + 0x98);
  iVar6 = 0;
  uVar9 = 0;
  local_74 = param_5;
  puStack_70 = param_7;
  do {
    iVar7 = FUN_10081e90(param_2,&DAT_1009c4b0,0x10);
    iVar8 = (&DAT_100a4c30)[iVar5];
    iVar1 = uVar9 * 0x298 + iVar8;
    if (iVar7 == 0) {
      iVar1 = iVar1 + 0x10;
    }
    iVar7 = FUN_10081e90(param_3,iVar1,0x10);
    pcVar2 = local_6c;
    puVar3 = puStack_70;
    iVar1 = local_74;
  } while (((iVar7 != 0) || (iVar6 = uVar9 * 0x298 + iVar8, iVar6 == 0)) &&
          (uVar9 = uVar9 + 1, uVar9 < 7));
  iVar5 = -0x7fffbffe;
  if ((puStack_70 == (undefined4 *)0x0) || (iVar6 == 0)) goto LAB_10064b28;
  FUN_10096840(auStack_60);
  (*pcVar2)();
  iVar5 = (*extraout_w11_00)(iVar1);
  if ((iVar5 == 0) || (iVar8 = FUN_10081e90(param_2,&DAT_1009c480,0x10), iVar8 != 0)) {
    iVar5 = iVar1;
    if (param_8 == '\0') {
      iVar5 = 0;
    }
    uVar9 = FUN_1004ef80(param_2,*(undefined4 *)(param_1 + 0x90),iVar5,local_78,iVar6,
                         *(undefined4 *)(local_68 + 0xc),*(undefined4 *)(local_68 + 8));
    local_78 = uVar9;
    if (uVar9 == 0) {
      iVar5 = -0x7fffbffb;
    }
    else {
      iVar5 = FUN_10052df0(uVar9,param_3);
      if (iVar5 < 0) {
LAB_10064a5c:
        (*pcVar2)();
        (*extraout_w11_03)(uVar9,1);
      }
      else {
        iVar5 = FUN_10052b50(uVar9,param_2,puVar3);
        if (iVar5 < 0) {
LAB_10064a40:
          if (uVar9 != 0) {
            FUN_10053620(uVar9);
            goto LAB_10064a5c;
          }
        }
        else {
          if (param_8 == '\0') {
            iVar5 = FUN_10055930(uVar9,iVar1,local_64,0,1);
            if (iVar5 < 0) {
              uVar10 = (*pcVar2)();
              (*extraout_w11_02)(uVar10);
              *puVar3 = 0;
              uVar9 = 0;
              goto LAB_10064a40;
            }
          }
          else {
            (*pcVar2)();
            (*extraout_w11_01)(iVar1,uVar9);
          }
          FUN_100059f0(param_1 + 0x9c,&local_78);
        }
      }
    }
  }
  else {
    iVar5 = FUN_10052b50(iVar5,param_2,puVar3);
  }
  FUN_10096790(auStack_60);
  if (-1 < iVar5) {
    uVar10 = (*pcVar2)();
    cVar4 = (*extraout_w11_04)(uVar10);
    if (cVar4 == '\0') {
      uVar10 = (*pcVar2)();
      cVar4 = (*extraout_w11_06)(uVar10);
      if (cVar4 != '\0') goto LAB_10064b28;
    }
    else {
      uVar10 = (*pcVar2)();
      cVar4 = (*extraout_w11_05)(uVar10);
      if (cVar4 == '\0') goto LAB_10064b28;
    }
    FUN_10096c60();
  }
LAB_10064b28:
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar5;
}

