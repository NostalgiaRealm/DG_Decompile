/*
 * FUN_180119b20 at 180119b20
 * undefined FUN_180119b20(void)
 * Address ranges: 180119b20-180119e57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180119b20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint local_70 [2];
  int local_68;
  uint uStack_64;
  int local_60;
  uint uStack_5c;
  undefined8 local_58;
  uint local_50;
  uint uStack_4c;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  iVar9 = *(int *)(param_1 + 0x74);
  uVar13 = 0;
  if ((((iVar9 - 0x46U < 0xb) && ((0x6abU >> (ulonglong)(iVar9 - 0x46U & 0x1f) & 1) != 0)) ||
      (iVar9 == 0x36314644 || iVar9 == 0x5a544e49)) || (bVar4 = false, iVar9 == 0x34324644)) {
    bVar4 = true;
  }
  bVar3 = *(int *)(param_1 + 0x20) == 5;
  iVar9 = 4;
  if (bVar3) {
    iVar9 = 5;
  }
  iVar11 = 1;
  if (bVar3) {
    iVar11 = 2;
  }
  if (bVar4) {
    iVar11 = iVar9;
  }
  if (*(int *)(param_1 + 0x7c) != 3) {
    local_70[0] = (uint)*(ushort *)(param_1 + 0x3c);
    FUN_180119a28(param_1,local_70,param_3,param_4,param_2);
    if ((*(uint *)(param_1 + 0x70) & 3) == 0) {
      uVar6 = (*(code *)puVar1)(0x180224000);
      uVar6 = (*extraout_x11_00)(uVar6,*(undefined4 *)(param_1 + 0x68),
                                 *(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x78),
                                 local_70[0]);
    }
    else {
      FUN_18010b708(param_2,&local_68);
      uVar14 = *(uint *)(param_1 + 0x68);
      uVar7 = *(uint *)(param_1 + 0x6c);
      if (*(char *)(DAT_18024d928 + 0x9f4) == '\0') {
        iVar9 = 1;
      }
      else {
        uVar12 = uVar14 * local_68;
        if (uStack_64 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180119c14);
          (*pcVar2)();
        }
        uVar14 = 0;
        if (uStack_64 != 0) {
          uVar14 = uVar12 / uStack_64;
        }
        if (uStack_5c == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180119c28);
          (*pcVar2)();
        }
        uVar12 = 0;
        if (uStack_5c != 0) {
          uVar12 = (uVar7 * local_60) / uStack_5c;
        }
        uVar7 = uVar12;
        if ((iVar11 == 2 || iVar11 == 5) && (uVar7 = uVar14, uVar12 < uVar14)) {
          uVar14 = uVar12;
          uVar7 = uVar12;
        }
        iVar9 = *(int *)(DAT_18024d928 + 0x86c);
        uVar13 = 1;
        if (iVar9 == 0) {
          iVar9 = 1;
        }
      }
      (*(code *)puVar1)(iVar9,*(undefined8 *)(param_1 + 0x50),uVar14,uVar7);
      uVar6 = (*extraout_x11)();
    }
    *(undefined8 *)(param_1 + 0x58) = uVar6;
  }
  if ((*(longlong *)(param_1 + 0x58) != 0) || (bVar4 = false, *(int *)(param_1 + 0x7c) == 3)) {
    uVar14 = *(uint *)(param_1 + 0x70) & 0x200;
    if ((uVar14 == 0) && (*(int *)(param_1 + 0x7c) == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 0x88) = uVar8;
    if ((uVar14 == 0) && (*(int *)(param_1 + 0x7c) == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    uVar14 = 0;
    uVar7 = 0;
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar12 = 0;
      uVar10 = 0;
    }
    else {
      do {
        uVar12 = 0;
        if (*(short *)(param_1 + 0x3c) != 0) {
          do {
            local_58 = 0;
            uStack_64 = *(uint *)(param_1 + 0x20);
            uStack_4c = *(uint *)(param_1 + 0x6c) >> (ulonglong)(uVar12 & 0x1f);
            local_50 = *(uint *)(param_1 + 0x68) >> (ulonglong)(uVar12 & 0x1f);
            local_60 = *(int *)(param_1 + 0x70);
            local_68 = *(int *)(param_1 + 0x74);
            uStack_5c = *(uint *)(param_1 + 0x7c);
            if (local_50 == 0) {
              local_50 = 1;
            }
            if (uStack_4c == 0) {
              uStack_4c = 1;
            }
            (*(code *)puVar1)();
            cVar5 = (*extraout_x11_01)(param_1,uVar7,uVar12,&local_68,uVar6,uVar13);
          } while ((cVar5 != '\0') && (uVar12 = uVar12 + 1, uVar12 < *(ushort *)(param_1 + 0x3c)));
        }
        uVar10 = *(uint *)(param_1 + 0x80);
        uVar14 = uVar7 + 1;
        uVar7 = uVar14;
      } while (uVar14 < uVar10);
    }
    bVar4 = uVar14 == uVar10;
    if (uVar14 != uVar10) {
      for (iVar9 = uVar14 + 1; iVar9 != 0; iVar9 = iVar9 + -1) {
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          (*(code *)puVar1)();
          (*extraout_x11_02)(param_1,iVar9 + -1,uVar12 - 1);
        }
        uVar12 = (uint)*(ushort *)(param_1 + 0x3c);
      }
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_03)();
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
  }
  return bVar4;
}

