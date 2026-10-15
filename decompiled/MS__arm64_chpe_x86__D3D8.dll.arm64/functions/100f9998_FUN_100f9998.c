/*
 * FUN_100f9998 at 100f9998
 * undefined FUN_100f9998(void)
 * Address ranges: 100f9998-100fa077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100f9998(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  int local_dc;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int *local_cc;
  int *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  iVar10 = param_1 + param_2 * 0x16c0;
  piVar1 = (int *)(iVar10 + 0x1c98);
  iVar13 = FUN_100df3e0(*piVar1,2);
  piVar2 = (int *)(iVar10 + 0x1d58);
  *piVar2 = iVar13;
  if (iVar13 != -1) {
    piVar3 = (int *)(iVar10 + 0x1c9c);
    iVar13 = FUN_100df3e0(*piVar3,2);
    piVar4 = (int *)(iVar10 + 0x1d5c);
    *piVar4 = iVar13;
    if (iVar13 != -1) {
      param_1 = param_1 + 0x520;
      local_dc = param_1;
      iVar13 = FUN_100e0218(param_1,param_2,0x400,0,0);
      piVar5 = (int *)(iVar10 + 0x1d68);
      *piVar5 = iVar13;
      if (iVar13 != 0) {
        local_d8 = (int *)(iVar10 + 0x19c4);
        cVar12 = FUN_100e50c8(*local_d8,iVar13,iVar10 + 0x1af0,0,0x400,&DAT_1012f3e0,0,0);
        pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        if (cVar12 != '\0') {
          iVar13 = FUN_100e0218(param_1,param_2,84000,4,0);
          local_cc = (int *)(iVar10 + 0x1d6c);
          *local_cc = iVar13;
          if (iVar13 != 0) {
            iVar13 = FUN_100e0218(param_1,param_2,0x20000,4,0);
            if (iVar13 != 0) {
              iVar14 = FUN_100e0218(param_1,param_2,84000,0,0);
              iVar9 = local_dc;
              local_d0 = (int *)(iVar10 + 0x1d70);
              *local_d0 = iVar14;
              if (iVar14 != 0) {
                puVar6 = (undefined4 *)(iVar10 + 0x1d74);
                uVar15 = FUN_100e0218(local_dc,param_2,0x20000,0,0);
                local_50 = 0;
                *puVar6 = uVar15;
                local_78[0] = 3;
                local_70 = 0;
                local_68 = 0xa0;
                local_60 = 0x10001000000c8;
                uStack_58 = 0x10000001b;
                local_48 = 1;
                iVar14 = FUN_100e0328(iVar9,param_2,local_78);
                piVar7 = (int *)(iVar10 + 0x1d60);
                *piVar7 = iVar14;
                local_d4 = piVar7;
                if (iVar14 != 0) {
                  local_68 = 400;
                  local_60 = CONCAT44(local_60._4_4_,0x11c);
                  iVar14 = FUN_100e0328(iVar9,param_2,local_78);
                  piVar8 = (int *)(iVar10 + 0x1d64);
                  *piVar8 = iVar14;
                  local_c8 = piVar8;
                  if (iVar14 != 0) {
                    local_c0 = 0x40000001e;
                    local_b8 = 0x1688;
                    local_b0 = 0xffffffff00000000;
                    uStack_a8 = 0;
                    local_a0 = 0;
                    puVar16 = (undefined4 *)FUN_100dfee0(*piVar1,&local_cc,*piVar2,0);
                    FUN_100e0168(iVar9,param_2,*piVar7,&local_c0,*puVar16);
                    local_c0 = CONCAT44(local_c0._4_4_,0x1c);
                    puVar16 = (undefined4 *)FUN_100dfee0(*piVar1,&local_d0,*piVar2 + 1,0);
                    FUN_100e0168(iVar9,param_2,*piVar8,&local_c0,*puVar16);
                    local_80 = 0;
                    local_90 = 0x40000001c;
                    uStack_88 = 0;
                    puVar16 = (undefined4 *)FUN_100dfee0(*piVar3,&local_dc,*piVar4,0);
                    FUN_100e01c0(iVar9,param_2,*piVar7,&local_90,*puVar16);
                    puVar16 = (undefined4 *)FUN_100dfee0(*piVar3,&local_d4,*piVar4 + 1,0);
                    FUN_100e01c0(iVar9,param_2,*piVar8,&local_90,*puVar16);
                    piVar1 = local_d8;
                    puVar16 = (undefined4 *)(iVar10 + 0x740);
                    iVar9 = *local_d8;
                    *(undefined4 *)(iVar10 + 0x744) = *(undefined4 *)(iVar10 + 0x17a0);
                    FUN_100ec3e0(*(undefined4 *)(iVar9 + 0x8e4),*puVar16,
                                 *(undefined4 *)(iVar9 + 0x8e0),iVar9,*(undefined8 *)(iVar9 + 0x938)
                                );
                    FUN_100e23e0(*piVar1,*puVar16);
                    uVar15 = FUN_100f80d0(iVar10 + 0x1d1c,puVar16);
                    iVar10 = *piVar1;
                    FUN_100ec3e0(*(undefined4 *)(iVar10 + 0x8e4),uVar15,
                                 *(undefined4 *)(iVar10 + 0x8e0),iVar10,
                                 *(undefined8 *)(iVar10 + 0x938));
                    FUN_100e2490(*piVar1,uVar15);
                    iVar10 = *piVar1;
                    (*pcVar11)();
                    uVar17 = (*extraout_w11)(iVar13);
                    FUN_100e2bc0(iVar10,3,uVar17);
                    iVar10 = *piVar1;
                    uVar15 = (*pcVar11)();
                    uVar17 = (*extraout_w11_00)(uVar15);
                    FUN_100e2b30(iVar10,1,uVar17);
                    FUN_100e1588(*piVar1,iVar13,0,1,0x40);
                    FUN_100e1588(*piVar1,*piVar5,0,1,0x40);
                    FUN_100e3a80(*piVar1,0x80,0x100,1);
                    uVar15 = *puVar6;
                    FUN_100e1588(*piVar1,iVar13,0,1,0x800);
                    FUN_100e1588(*piVar1,uVar15,0,1,0x400);
                    FUN_100e3620(*piVar1,uVar15,iVar13);
                    FUN_100e1060(*piVar1 + 4,0);
                    iVar10 = *piVar1;
                    if (*(int *)(iVar10 + 0x8e0) != 0) {
                      piVar1 = (int *)(iVar10 + 0x914);
                      *(int *)(iVar10 + *piVar1 * 4 + 0x760) = iVar13;
                      *piVar1 = *piVar1 + 1;
                    }
                    return 1;
                  }
                  uVar15 = (*pcVar11)();
                  (*extraout_w11_01)(uVar15);
                  *piVar7 = 0;
                }
                uVar15 = (*pcVar11)();
                (*extraout_w11_02)(uVar15);
                *puVar6 = 0;
              }
              piVar7 = local_d0;
              uVar15 = (*pcVar11)();
              (*extraout_w11_03)(uVar15);
              *piVar7 = 0;
            }
            piVar7 = local_cc;
            uVar15 = (*pcVar11)();
            (*extraout_w11_04)(uVar15);
            *piVar7 = 0;
          }
        }
        uVar15 = (*pcVar11)();
        (*extraout_w11_05)(uVar15);
        *piVar5 = 0;
      }
      iVar10 = *piVar4;
      if (iVar10 != -1) {
        iVar9 = *piVar3;
        iVar13 = iVar9 + 0x1c;
        (*(code *)PTR_FUN_10134070)(iVar13);
        FUN_100df258(iVar9,iVar10,2);
        (*(code *)PTR_FUN_101340bc)(iVar13);
      }
    }
    iVar10 = *piVar2;
    if (iVar10 != -1) {
      iVar9 = *piVar1;
      iVar13 = iVar9 + 0x1c;
      (*(code *)PTR_FUN_10134070)(iVar13);
      FUN_100df258(iVar9,iVar10,2);
      (*(code *)PTR_FUN_101340bc)(iVar13);
    }
  }
  return 0;
}

