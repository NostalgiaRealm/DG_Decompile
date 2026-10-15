/*
 * FUN_1001ee90 at 1001ee90
 * undefined FUN_1001ee90(void)
 * Address ranges: 1001ee90-1001f2e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ee90(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar9;
  int extraout_w13;
  int iVar10;
  undefined1 auStack_130 [4];
  undefined4 local_12c;
  undefined4 uStack_128;
  int local_124;
  int local_120;
  undefined4 local_118 [2];
  int local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined1 auStack_e8 [8];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d0;
  int iStack_cc;
  int local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 auStack_98 [4];
  int local_94;
  int iStack_90;
  undefined1 auStack_80 [12];
  int local_74;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    if (param_2 == 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 1;
      uStack_50 = 0;
      local_48 = 0;
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_00)(uVar5,&local_68);
    }
    else {
      bVar2 = false;
      bVar1 = false;
      iVar3 = (*(code *)PTR_FUN_1016c1d0)(param_2,auStack_130);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = local_124;
        if (local_120 != 0) {
          iVar3 = local_120;
        }
        (*(code *)PTR_FUN_1016c024)(iVar3,0x18,auStack_98);
        iVar10 = iStack_90;
        if (local_120 == 0) {
          iVar10 = iStack_90 >> 1;
        }
        iStack_cc = local_94 << 1;
        local_bc = 0;
        local_b4 = 0;
        local_d0 = 0x28;
        local_c8 = -iVar10;
        local_c4 = 0x200001;
        local_ac = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_118[0] = 0;
        iVar3 = (*(code *)PTR_FUN_1016c00c)(0,&local_d0,0,local_118,0,0);
        bVar1 = bVar2;
        if (((iVar3 != 0) &&
            (iVar4 = (*(code *)PTR_FUN_1016c024)(iVar3,0x18,auStack_80), iVar4 != 0)) &&
           (iVar4 = (*(code *)PTR_FUN_1016c004)(0), iVar4 != 0)) {
          uVar5 = (*(code *)PTR_FUN_1016c034)(iVar4,iVar3);
          iVar3 = (*(code *)PTR_FUN_1016c004)(0);
          if (iVar3 != 0) {
            bVar1 = local_120 == 0;
            if (bVar1) {
              uVar6 = (*(code *)PTR_FUN_1016c034)(iVar3,local_124);
              (*(code *)__hybrid_CompilerIAT)(iVar4,0,0,local_94,iVar10,iVar3,0,iVar10,0xcc0020);
            }
            else {
              uVar6 = (*(code *)PTR_FUN_1016c034)(iVar3,local_120);
              (*(code *)__hybrid_CompilerIAT)(iVar4,0,0,local_94,iVar10,iVar3,0,0,0xcc0020);
            }
            (*(code *)PTR_FUN_1016c034)(iVar3,uVar6);
            uVar6 = (*(code *)PTR_FUN_1016c034)(iVar3,local_124);
            (*(code *)__hybrid_CompilerIAT)(iVar4,local_94,0,local_94,iVar10,iVar3,0,0,0xcc0020);
            (*(code *)PTR_FUN_1016c034)(iVar3,uVar6);
            if (!bVar1) {
              iVar8 = 0;
              iVar7 = local_6c + local_94 * 4;
              if (0 < iVar10) {
                do {
                  iVar9 = 0;
                  if (0 < local_94) {
                    do {
                      if (*(int *)(iVar7 + iVar9 * 4) == 0) {
                        *(undefined1 *)(local_6c + iVar9 * 4 + 3) = 0xff;
                      }
                      iVar9 = iVar9 + 1;
                    } while (iVar9 < local_94);
                  }
                  iVar8 = iVar8 + 1;
                  iVar7 = local_74 + iVar7;
                  local_6c = local_74 + local_6c;
                } while (iVar8 < iVar10);
              }
            }
            (*(code *)PTR_FUN_1016c014)(iVar3);
          }
          iVar3 = (*(code *)PTR_FUN_1016c034)(iVar4,uVar5);
          (*(code *)PTR_FUN_1016c014)(iVar4);
        }
        (*(code *)PTR_FUN_1016c018)(local_120);
        (*(code *)PTR_FUN_1016c018)(local_124);
      }
      if (iVar3 != 0) {
        (*(code *)PTR_FUN_1016c024)(iVar3,0x18,auStack_e8);
        local_100 = FUN_1001f768(param_1);
        local_110 = extraout_w13 / 2;
        uStack_10c = local_e0;
        local_f8 = uStack_dc;
        local_108 = local_12c;
        uStack_104 = uStack_128;
        if (!bVar1) {
          uStack_dc = 0;
        }
        local_f0 = uStack_dc;
        uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar5,&local_110);
        (*(code *)PTR_FUN_1016c018)(iVar3);
      }
    }
  }
  return;
}

