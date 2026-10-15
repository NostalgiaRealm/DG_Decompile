/*
 * FUN_1004e270 at 1004e270
 * undefined FUN_1004e270(void)
 * Address ranges: 1004e270-1004e9b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1004e270(int param_1,int *param_2,undefined1 param_3,int *param_4,undefined4 *param_5,
            char param_6)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  int *piVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  undefined4 local_78;
  int *local_74;
  int *local_70;
  code *local_6c;
  code *local_68;
  int *local_64;
  undefined8 local_60;
  undefined4 local_58;
  int iStack_54;
  code *local_50;
  int *piStack_4c;
  uint *local_48;
  undefined4 *local_44;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(uint *)(param_1 + 0x154) >> 0xb & 1) != 0) {
    *param_4 = *(int *)(param_1 + 0x174);
    *param_5 = *(undefined4 *)(param_1 + 0x160);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4);
  puVar9 = (undefined4 *)(iVar1 + 0x70);
  puVar11 = (undefined4 *)(iVar1 + 0x6c);
  local_74 = param_2;
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar6 = (*extraout_w11)(uVar8,*puVar11,*puVar9);
  if (cVar6 != '\0') {
    uVar13 = 0;
    if (*(uint *)(param_1 + 0x24) != 0) {
      do {
        iVar1 = *(int *)(param_1 + 0x20) + uVar13 * 0x20;
        if ((*(uint *)(iVar1 + 0x18) >> 1 & 1) != 0) {
          *(undefined1 *)(iVar1 + 0x1c) = 1;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_1 + 0x24));
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  local_68 = (code *)(iVar1 + 0x34);
  puVar9 = (undefined4 *)(iVar1 + 0x70);
  puVar11 = (undefined4 *)(iVar1 + 0x6c);
  local_70 = puVar9;
  local_6c = (code *)puVar11;
  if ((*(uint *)local_68 >> 5 & 1) == 0) {
    uVar8 = (*pcVar4)();
    cVar6 = (*extraout_w11_12)(uVar8,*puVar11,*puVar9);
    local_78 = 0;
    if (cVar6 != '\0') {
      local_60 = 0;
      local_58 = FUN_10007228(iVar1);
      puVar10 = (undefined4 *)(iVar1 + 0xa8);
      puVar12 = (undefined4 *)(iVar1 + 0xa4);
      iStack_54 = *(ushort *)(iVar1 + 0xe) - 1;
      uVar8 = (*pcVar4)();
      cVar6 = (*extraout_w11_13)(uVar8,*puVar11,*puVar9,*puVar12,*puVar10,&local_60);
      *(char *)(iVar1 + 0xae) = cVar6;
      local_78 = 0;
      if (cVar6 == '\0') {
        local_78 = 2;
      }
      uVar8 = (*pcVar4)();
      (*extraout_w11_14)(uVar8,*puVar11,*puVar9,0);
    }
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
    piVar17 = (int *)(iVar1 + 0x20);
    local_78 = 0;
    local_64 = (int *)(iVar1 + 0x24);
    if (*local_64 == 0) {
      if (*piVar17 == 0) {
        uVar8 = (*pcVar4)();
        local_78 = (*extraout_w11_07)(uVar8,*puVar11,*puVar9,local_74,param_3,param_4,param_5);
        goto LAB_1004e968;
      }
      FUN_10007548(iVar1);
      uVar8 = (*pcVar4)();
      cVar6 = (*extraout_w11_00)(uVar8,*puVar11,*puVar9);
      if (cVar6 != '\0') {
        cVar6 = '\0';
        if (*(short *)(iVar1 + 0xc) == 1) {
          if (*(char *)(iVar1 + 0x48) == '\0') {
            local_60 = 0;
            local_58 = FUN_10007228(iVar1);
            iStack_54 = *(ushort *)(iVar1 + 0xe) - 1;
            (*pcVar4)();
            cVar6 = (*extraout_w11_02)(iVar1,&local_60);
          }
          else {
            local_78 = 0;
            local_74 = (int *)0x0;
            (*pcVar4)();
            cVar7 = (*extraout_w11_03)(iVar1,&local_74,&local_78);
            if (cVar7 != '\0') {
              (*pcVar4)();
              (*extraout_w11_04)(iVar1,local_74,*piVar17);
              (*pcVar4)();
              (*extraout_w11_05)(iVar1);
              cVar6 = '\x01';
            }
          }
        }
        else if (*(char *)(iVar1 + 0x48) == '\0') {
          (*pcVar4)();
          cVar6 = (*extraout_w11_01)(iVar1);
        }
        local_78 = 0;
        if (cVar6 == '\0') {
          local_78 = 2;
        }
        uVar8 = (*pcVar4)();
        (*extraout_w11_06)(uVar8,*(undefined4 *)local_6c,*local_70,0);
        *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
        *(undefined1 *)(iVar1 + 0xae) = 0;
      }
      *param_4 = *piVar17;
      local_44 = (undefined4 *)(iVar1 + 0x10);
    }
    else {
      uVar8 = (*pcVar4)();
      cVar6 = (*extraout_w11_08)(uVar8,*puVar11,*puVar9);
      if (cVar6 != '\0') {
        uVar8 = (*pcVar4)();
        (*extraout_w11_09)(uVar8,*puVar11,*puVar9,0);
        if (*(int *)(iVar1 + 0x24) != 0) {
          FUN_100a9eb0(*(int *)(iVar1 + 0x28),0,*(uint *)(iVar1 + 0x2c) >> 2);
          uVar13 = *(uint *)(iVar1 + 0x2c);
          FUN_100a9e00(*(int *)(iVar1 + 0x28) + (uVar13 & 0xfffffffc),0,uVar13 & 3);
        }
        *(undefined1 *)(iVar1 + 0xae) = 0;
      }
      piVar5 = local_64;
      *param_4 = *piVar17;
      local_44 = (undefined4 *)(iVar1 + 0x10);
      *param_5 = *local_44;
      if (param_6 != '\0') {
        uVar16 = 0x80808080;
        uVar13 = 0;
        uVar15 = 0;
        local_48 = (uint *)local_68;
        uVar2 = (uint)*(ushort *)(iVar1 + 0xc) * *(int *)(iVar1 + 0x14) + 0xfff >> 0xc;
        if (uVar2 != 0) {
          local_70 = (int *)(iVar1 + 0x28);
          local_50 = pcVar4;
          local_6c = pcVar4;
          local_68 = FUN_100a9598;
          iVar14 = 0;
          bVar3 = false;
          local_74 = param_4;
          local_64 = local_70;
          piStack_4c = piVar17;
          do {
            if ((*(byte *)(*local_64 + iVar14) & uVar16) != 0) {
              if (uVar13 != uVar15) {
                if (!bVar3) {
                  FUN_10007548(iVar1);
                  bVar3 = true;
                }
                FUN_100075f8(iVar1,&local_60,uVar13,uVar15);
                (*local_6c)();
                (*extraout_w11_10)(iVar1,&local_60);
                uVar13 = uVar15;
              }
              uVar13 = uVar13 + 1;
            }
            piVar17 = piStack_4c;
            pcVar4 = local_50;
            param_4 = local_74;
            uVar15 = uVar15 + 1;
            *(byte *)(*local_70 + iVar14) = *(byte *)(*local_70 + iVar14) | (byte)uVar16;
            *(byte *)(*piVar5 + iVar14) = *(byte *)(*piVar5 + iVar14) | (byte)uVar16;
            iVar14 = (uVar16 & 1) + iVar14;
            uVar16 = uVar16 >> 1 | uVar16 << 0x1f;
          } while (uVar15 < uVar2);
          if (uVar13 != uVar15) {
            if (!bVar3) {
              FUN_10007548(iVar1);
            }
            FUN_100075f8(iVar1,&local_60,uVar13,uVar15);
            (*pcVar4)();
            (*extraout_w11_11)(iVar1,&local_60);
          }
        }
        *local_48 = *local_48 | 1;
      }
      *param_4 = *piVar17;
    }
    *param_5 = *local_44;
  }
LAB_1004e968:
  uVar8 = 0x80004005;
  switch(local_78) {
  case 0:
    uVar8 = 0;
    break;
  case 1:
    uVar8 = 0x8876021c;
  }
  return uVar8;
}

