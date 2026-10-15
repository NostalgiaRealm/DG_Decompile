/*
 * FUN_10008300 at 10008300
 * undefined FUN_10008300(void)
 * Address ranges: 10008300-10008853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10008300(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  int local_900;
  uint local_8fc;
  uint local_8f8 [2];
  undefined **local_8f0 [2];
  undefined1 local_8e8;
  undefined **local_8e0;
  undefined4 uStack_8dc;
  undefined1 local_8d8;
  undefined1 auStack_8d0 [112];
  ulonglong local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined1 auStack_460 [528];
  undefined1 auStack_250 [528];
  
  iVar3 = FUN_100076f8();
  uVar4 = FUN_10008258(iVar3);
  local_900 = 0;
  (*(code *)PTR_FUN_100a8194)(param_4,&local_900);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  switch(param_2) {
  case 0x401:
    if ((*(int *)(iVar3 + 0x330) == 0) && (param_4 != 0)) {
      if (((uVar4 & 0xff) == 0) &&
         (iVar5 = (*(code *)PTR_FUN_100a8024)(iVar3 + 0x338,iVar3 + 0x33c,0,0), iVar5 != 0)) {
        *(int *)(iVar3 + 0x330) = param_4;
        *(int *)(iVar3 + 0x334) = local_900;
        FUN_10083b40(iVar3 + 0x54c,iVar3 + 0x764,0x20c);
        FUN_10083b40(iVar3 + 0x340,iVar3 + 0x764,0x20c);
        *(undefined1 *)(iVar3 + 0x759) = 0;
      }
      uVar4 = uVar4 & 0xff ^ 1;
      goto LAB_1000882c;
    }
    break;
  case 0x402:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      FUN_100081b8(iVar3,param_3 == 0);
      goto LAB_10008430;
    }
    break;
  case 0x403:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      uVar6 = (*(code *)PTR_FUN_100a80a8)(0x40,0,param_3);
      local_8fc = 0;
      uVar9 = *(undefined4 *)(iVar3 + 0x338);
      uVar7 = (*(code *)PTR_FUN_100a804c)();
      (*(code *)PTR_FUN_100a8038)(uVar7,uVar9,uVar6,&local_8fc,0,0,2);
      (*(code *)PTR_FUN_100a800c)(uVar6);
      uVar4 = local_8fc;
      goto LAB_1000882c;
    }
    break;
  case 0x404:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      uVar6 = (*(code *)PTR_FUN_100a80a8)(0x40,0,param_3);
      local_8f8[0] = 0;
      uVar9 = *(undefined4 *)(iVar3 + 0x33c);
      uVar7 = (*(code *)PTR_FUN_100a804c)();
      (*(code *)PTR_FUN_100a8038)(uVar7,uVar9,uVar6,local_8f8,0,0,2);
      (*(code *)PTR_FUN_100a800c)(uVar6);
      uVar4 = local_8f8[0];
      goto LAB_1000882c;
    }
    break;
  case 0x405:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      local_8d8 = 0;
      uStack_8dc = *(undefined4 *)(iVar3 + 0x33c);
      local_8e0 = &PTR_FUN_1009f144;
      FUN_10056120(iVar3 + 0x764,&local_8e0);
      FUN_1004bbc0(&local_8e0);
      goto LAB_10008430;
    }
    break;
  case 0x406:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      (*(code *)PTR_FUN_100a803c)(iVar3 + 0x318);
      FUN_100072c8(auStack_460);
      local_8e8 = 0;
      local_8f0[0] = &PTR_FUN_1009f144;
      uVar10 = FUN_100539b8(iVar3 + 0x54c,local_8f0,0);
      if ((uVar10 & 1) == 0) {
        FUN_1004d380(auStack_8d0);
        uVar10 = FUN_1004d598(auStack_8d0,local_8f0,1);
        if ((uVar10 & 1) != 0) {
          uVar10 = FUN_100530e0(auStack_460,auStack_8d0,0);
          if ((uVar10 & 1) == 0) {
            FUN_10083b70(auStack_250,0,0x20c);
            puVar8 = (ulonglong *)FUN_100072c8(auStack_250);
          }
          else {
            FUN_10083b40(&local_860,auStack_460,0x20c);
            puVar8 = &local_860;
          }
          FUN_10083b40(iVar3 + 0x54c,puVar8,0x20c);
        }
        FUN_1004d500(auStack_8d0);
      }
      FUN_1004bbc0(local_8f0);
      *(undefined1 *)(iVar3 + 0x759) = 1;
      (*(code *)PTR_FUN_100a8090)(iVar3 + 0x318);
      goto LAB_10008430;
    }
    break;
  case 0x407:
    local_860 = local_860 & 0xffffffffffff0000;
    if (*(uint *)(iVar3 + 0xd4) == 0) {
      uStack_858 = uRam1009faf8;
      local_860 = _DAT_1009faf0;
      uStack_848 = uRam1009fb08;
      uStack_850 = _DAT_1009fb00;
      local_840 = DAT_1009fb10;
    }
    else {
      uVar4 = 0;
      do {
        uVar9 = (*pcVar1)();
        cVar2 = (*extraout_w11)(uVar9);
        if (cVar2 != '\0') break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar3 + 0xd4));
      uVar9 = (*pcVar1)();
      (*extraout_w11_00)(uVar9,&local_860,0x200);
    }
    (*(code *)PTR_FUN_100a8200)(param_1,&local_860);
LAB_10008430:
    uVar4 = 1;
    goto LAB_1000882c;
  default:
    uVar4 = (*(code *)PTR_FUN_100a814c)(param_1,param_2,param_3,param_4);
    goto LAB_1000882c;
  case 0x409:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      FUN_10083b40(iVar3 + 0x340,iVar3 + 0x54c,0x20c);
      goto LAB_10008430;
    }
    break;
  case 0x40a:
    uVar4 = *(uint *)(iVar3 + 0x330);
    goto LAB_1000882c;
  }
  uVar4 = 0;
LAB_1000882c:
  FUN_10008100(iVar3);
  return uVar4;
}

