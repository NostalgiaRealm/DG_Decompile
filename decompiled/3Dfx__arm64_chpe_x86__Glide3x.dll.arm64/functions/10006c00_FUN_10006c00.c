/*
 * FUN_10006c00 at 10006c00
 * undefined FUN_10006c00(void)
 * Address ranges: 10006c00-10007153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10006c00(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  
  iVar3 = FUN_10005ff8();
  uVar4 = FUN_10006b58(iVar3);
  local_900 = 0;
  (*(code *)PTR_FUN_100a0194)(param_4,&local_900);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  switch(param_2) {
  case 0x401:
    if ((*(int *)(iVar3 + 0x330) == 0) && (param_4 != 0)) {
      if (((uVar4 & 0xff) == 0) &&
         (iVar5 = (*(code *)PTR_FUN_100a0024)(iVar3 + 0x338,iVar3 + 0x33c,0,0), iVar5 != 0)) {
        *(int *)(iVar3 + 0x330) = param_4;
        *(int *)(iVar3 + 0x334) = local_900;
        FUN_1007e4a0(iVar3 + 0x54c,iVar3 + 0x764,0x20c);
        FUN_1007e4a0(iVar3 + 0x340,iVar3 + 0x764,0x20c);
        *(undefined1 *)(iVar3 + 0x759) = 0;
      }
      uVar4 = uVar4 & 0xff ^ 1;
      goto LAB_1000712c;
    }
    break;
  case 0x402:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      FUN_10006ab8(iVar3,param_3 == 0);
      goto LAB_10006d30;
    }
    break;
  case 0x403:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      uVar6 = (*(code *)PTR_FUN_100a00a8)(0x40,0,param_3);
      local_8fc = 0;
      uVar9 = *(undefined4 *)(iVar3 + 0x338);
      uVar7 = (*(code *)PTR_FUN_100a004c)();
      (*(code *)PTR_FUN_100a0038)(uVar7,uVar9,uVar6,&local_8fc,0,0,2);
      (*(code *)PTR_FUN_100a000c)(uVar6);
      uVar4 = local_8fc;
      goto LAB_1000712c;
    }
    break;
  case 0x404:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      uVar6 = (*(code *)PTR_FUN_100a00a8)(0x40,0,param_3);
      local_8f8[0] = 0;
      uVar9 = *(undefined4 *)(iVar3 + 0x33c);
      uVar7 = (*(code *)PTR_FUN_100a004c)();
      (*(code *)PTR_FUN_100a0038)(uVar7,uVar9,uVar6,local_8f8,0,0,2);
      (*(code *)PTR_FUN_100a000c)(uVar6);
      uVar4 = local_8f8[0];
      goto LAB_1000712c;
    }
    break;
  case 0x405:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      local_8d8 = 0;
      uStack_8dc = *(undefined4 *)(iVar3 + 0x33c);
      local_8e0 = &PTR_FUN_10098d64;
      FUN_10050a70(iVar3 + 0x764,&local_8e0);
      FUN_10046500(&local_8e0);
      goto LAB_10006d30;
    }
    break;
  case 0x406:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      (*(code *)PTR_FUN_100a003c)(iVar3 + 0x318);
      FUN_10005bc8(auStack_460);
      local_8e8 = 0;
      local_8f0[0] = &PTR_FUN_10098d64;
      uVar10 = FUN_1004e308(iVar3 + 0x54c,local_8f0,0);
      if ((uVar10 & 1) == 0) {
        FUN_10047cc0(auStack_8d0);
        uVar10 = FUN_10047ed8(auStack_8d0,local_8f0,1);
        if ((uVar10 & 1) != 0) {
          uVar10 = FUN_1004da30(auStack_460,auStack_8d0,0);
          if ((uVar10 & 1) == 0) {
            FUN_1007e4d0(auStack_250,0,0x20c);
            puVar8 = (ulonglong *)FUN_10005bc8(auStack_250);
          }
          else {
            FUN_1007e4a0(&local_860,auStack_460,0x20c);
            puVar8 = &local_860;
          }
          FUN_1007e4a0(iVar3 + 0x54c,puVar8,0x20c);
        }
        FUN_10047e40(auStack_8d0);
      }
      FUN_10046500(local_8f0);
      *(undefined1 *)(iVar3 + 0x759) = 1;
      (*(code *)PTR_FUN_100a0090)(iVar3 + 0x318);
      goto LAB_10006d30;
    }
    break;
  case 0x407:
    local_860 = local_860 & 0xffffffffffff0000;
    if (*(uint *)(iVar3 + 0xd4) == 0) {
      uStack_858 = uRam100994e0;
      local_860 = _DAT_100994d8;
      uStack_848 = uRam100994f0;
      uStack_850 = _DAT_100994e8;
      local_840 = DAT_100994f8;
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
    (*(code *)PTR_FUN_100a0200)(param_1,&local_860);
LAB_10006d30:
    uVar4 = 1;
    goto LAB_1000712c;
  default:
    uVar4 = (*(code *)PTR_FUN_100a014c)(param_1,param_2,param_3,param_4);
    goto LAB_1000712c;
  case 0x409:
    if ((*(int *)(iVar3 + 0x330) == param_4) && (*(int *)(iVar3 + 0x334) == local_900)) {
      FUN_1007e4a0(iVar3 + 0x340,iVar3 + 0x54c,0x20c);
      goto LAB_10006d30;
    }
    break;
  case 0x40a:
    uVar4 = *(uint *)(iVar3 + 0x330);
    goto LAB_1000712c;
  }
  uVar4 = 0;
LAB_1000712c:
  FUN_10006a00(iVar3);
  return uVar4;
}

