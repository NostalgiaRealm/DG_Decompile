/*
 * FUN_18021fef0 at 18021fef0
 * undefined FUN_18021fef0(void)
 * Address ranges: 18021fef0-18021fffb;180220010-180220207;180220210-180220343;180220348-18022038b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18021fef0(undefined8 param_1,undefined4 param_2,ulonglong param_3,longlong param_4)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 uVar10;
  int local_710 [2];
  ulonglong local_708;
  undefined1 auStack_700 [24];
  undefined **local_6e8;
  undefined8 uStack_6e0;
  undefined4 local_6d8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined1 local_698;
  undefined4 local_694;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined4 local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  ulonglong local_640;
  wchar_t awStack_638 [4];
  wchar_t awStack_630 [4];
  wchar_t awStack_628 [4];
  wchar_t local_620 [496];
  undefined1 auStack_240 [528];
  
  lVar6 = FUN_18021f2d0();
  iVar4 = thunk_FUN_1802240e4(*(undefined8 *)(lVar6 + 0x3b0));
  bVar2 = iVar4 == 1;
  if (iVar4 == 1) {
    local_708 = local_708 & 0xffffffff00000000;
    thunk_FUN_180223ec8(*(undefined8 *)(lVar6 + 0x3b0),&local_708);
    bVar2 = (int)local_708 == *(int *)(lVar6 + 0x3b8);
  }
  if ((*(longlong *)(lVar6 + 0x3b0) == 0) || (bVar2)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_18021fe78(lVar6,1);
    uVar5 = uVar5 & 0xff;
  }
  local_710[0] = 0;
  thunk_FUN_180223ec8(param_4,local_710);
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  switch(param_2) {
  case 0x401:
    if ((*(longlong *)(lVar6 + 0x3b0) == 0) && (param_4 != 0)) {
      if ((uVar5 == 0) && (iVar4 = thunk_FUN_180223a40(lVar6 + 0x3c0,lVar6 + 0x3c8,0,0), iVar4 != 0)
         ) {
        *(longlong *)(lVar6 + 0x3b0) = param_4;
        *(int *)(lVar6 + 0x3b8) = local_710[0];
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar6 + 0x5dc,lVar6 + 0x800,0x20c);
      }
      uVar9 = (ulonglong)uVar5 ^ 1;
      goto LAB_180220368;
    }
    break;
  case 0x402:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
      FUN_18021fe78(lVar6,param_3 == 0);
      goto LAB_180220050;
    }
    break;
  case 0x403:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
      uVar8 = thunk_FUN_180223a68(0x40,0,param_3 & 0xffffffff);
      uVar10 = *(undefined8 *)(lVar6 + 0x3c0);
LAB_180220088:
      local_708 = 0;
      uVar7 = thunk_FUN_1802239dc();
      thunk_FUN_180223a54(uVar7,uVar10,uVar8,&local_708,0,0,2);
      thunk_FUN_180223824(uVar8);
      uVar9 = local_708;
      goto LAB_180220368;
    }
    break;
  case 0x404:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
      uVar8 = thunk_FUN_180223a68(0x40,0,param_3 & 0xffffffff);
      uVar10 = *(undefined8 *)(lVar6 + 0x3c8);
      goto LAB_180220088;
    }
    break;
  case 0x405:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
      FUN_1802223d0(auStack_700,*(undefined8 *)(lVar6 + 0x3c8));
      FUN_1801ef7d0(lVar6 + 0x800,auStack_700);
      FUN_1802224d0(auStack_700);
      goto LAB_180220050;
    }
    break;
  case 0x406:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
      thunk_FUN_1802236f8(lVar6 + 0x388);
      uVar8 = *(undefined8 *)(lVar6 + 0x3c0);
      FUN_1801ed0b8(auStack_240);
      FUN_1802223d0(auStack_700,uVar8);
      uVar9 = FUN_1801ed448(lVar6 + 0x5dc,auStack_700,0);
      if ((uVar9 & 1) == 0) {
        local_6e8 = &PTR_FUN_180237d20;
        uStack_6e0 = 0;
        local_6d8 = 0;
        local_6d0 = 0;
        local_6c8 = 0;
        local_6c0 = 0;
        uStack_6b8 = 0;
        local_6b0 = 0;
        uStack_6a8 = 0;
        local_6a0 = 0;
        local_698 = 1;
        local_694 = 0;
        local_690 = 0;
        uStack_688 = 0;
        local_680 = 0;
        local_678 = 0;
        uStack_670 = 0;
        local_668 = 0;
        local_660 = 0;
        local_658 = 0;
        uStack_650 = 0;
        local_648 = 0;
        uVar9 = FUN_1801f37e0(&local_6e8,auStack_700,1);
        if ((uVar9 & 1) != 0) {
          uVar9 = FUN_1801f2e70(auStack_240,&local_6e8,0);
          if ((uVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(&local_640,auStack_240,0x20c);
          }
          FUN_180222c50(&local_640,0,0x20c);
          uVar8 = FUN_1801ed0b8(&local_640);
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar6 + 0x5dc,uVar8,0x20c);
        }
        FUN_1801f36f8(&local_6e8);
      }
      FUN_1802224d0(auStack_700);
      *(undefined1 *)(lVar6 + 0x7e9) = 1;
      thunk_FUN_18022370c(lVar6 + 0x388);
      goto LAB_180220050;
    }
    break;
  case 0x407:
    local_640 = local_640 & 0xffffffffffff0000;
    if (*(int *)(lVar6 + 0x138) == 0) {
      awStack_638[0] = u__Unknown__inactive__180239f70[4];
      awStack_638[1] = u__Unknown__inactive__180239f70[5];
      awStack_638[2] = u__Unknown__inactive__180239f70[6];
      awStack_638[3] = u__Unknown__inactive__180239f70[7];
      local_640._0_2_ = u__Unknown__inactive__180239f70[0];
      local_640._2_2_ = u__Unknown__inactive__180239f70[1];
      local_640._4_2_ = u__Unknown__inactive__180239f70[2];
      local_640._6_2_ = u__Unknown__inactive__180239f70[3];
      awStack_628[0] = u__Unknown__inactive__180239f70[0xc];
      awStack_628[1] = u__Unknown__inactive__180239f70[0xd];
      awStack_628[2] = u__Unknown__inactive__180239f70[0xe];
      awStack_628[3] = u__Unknown__inactive__180239f70[0xf];
      awStack_630[0] = u__Unknown__inactive__180239f70[8];
      awStack_630[1] = u__Unknown__inactive__180239f70[9];
      awStack_630[2] = u__Unknown__inactive__180239f70[10];
      awStack_630[3] = u__Unknown__inactive__180239f70[0xb];
      local_620[0] = u__Unknown__inactive__180239f70[0x10];
      local_620[1] = u__Unknown__inactive__180239f70[0x11];
      local_620[2] = u__Unknown__inactive__180239f70[0x12];
      local_620[3] = u__Unknown__inactive__180239f70[0x13];
    }
    else {
      uVar5 = 0;
      do {
        (*(code *)puVar1)();
        cVar3 = (*extraout_x11)();
        if (cVar3 != '\0') break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(lVar6 + 0x138));
      uVar8 = (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)(uVar8,&local_640,0x200);
    }
    thunk_FUN_1802240f8(param_1,&local_640);
LAB_180220050:
    uVar9 = 1;
    goto LAB_180220368;
  default:
    uVar9 = thunk_FUN_180223eb4(param_1,param_2,param_3,param_4);
    goto LAB_180220368;
  case 0x409:
    if ((*(longlong *)(lVar6 + 0x3b0) == param_4) && (*(int *)(lVar6 + 0x3b8) == local_710[0])) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar6 + 0x3d0,lVar6 + 0x5dc,0x20c);
    }
    break;
  case 0x40a:
    uVar9 = *(ulonglong *)(lVar6 + 0x3b0);
    goto LAB_180220368;
  }
  uVar9 = 0;
LAB_180220368:
  FUN_18021fa28(lVar6);
  return uVar9;
}

