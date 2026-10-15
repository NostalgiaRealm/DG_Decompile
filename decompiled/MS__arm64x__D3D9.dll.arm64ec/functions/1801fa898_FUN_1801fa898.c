/*
 * FUN_1801fa898 at 1801fa898
 * undefined FUN_1801fa898(void)
 * Address ranges: 1801fa898-1801fab1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801fa898(undefined8 param_1,uint *param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *local_d0 [2];
  undefined1 auStack_b0 [4];
  uint local_ac;
  ulonglong local_a8;
  undefined1 auStack_a0 [128];
  
  local_ac = 0;
  local_a8 = 0;
  iVar3 = FUN_180223228(param_1,s__d__c_180237ec4,&local_ac,auStack_b0,local_d0,0);
  if (iVar3 == 1) {
    *param_2 = local_ac;
    iVar7 = 1;
  }
  else {
    iVar3 = FUN_180223228(param_1,s___llu__c_180237eb8,&local_a8,auStack_b0,local_d0,0);
    if (iVar3 == 1) {
      FUN_180223228(param_1,&DAT_180237edc,auStack_a0);
      if (local_a8 == 0) {
        *param_2 = 0;
        iVar7 = 1;
      }
      else {
        uVar4 = FUN_180222d10(auStack_a0);
        if (uVar4 < 7) {
          uVar9 = (ulonglong)local_ac;
        }
        else {
          uVar8 = 1;
          for (iVar3 = uVar4 - 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar8 = uVar8 * 10;
          }
          if (uVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1801fa97c);
            (*pcVar2)();
          }
          uVar9 = 0;
          if (uVar8 != 0) {
            uVar9 = local_a8 / uVar8;
          }
          uVar4 = 6;
        }
        iVar3 = 0;
        uVar5 = (uint)uVar9;
        uVar6 = uVar5;
        while (9 < uVar6) {
          uVar8 = uVar9 & 0xffffffff;
          uVar5 = (uint)uVar9;
          if (uVar5 + (int)(uVar8 / 10) * -10 != 0) break;
          uVar5 = (uint)(uVar8 / 10);
          iVar3 = iVar3 + 1;
          uVar9 = uVar8 / 10;
          uVar6 = (uint)(uVar8 / 10);
        }
        *param_2 = uVar5;
        iVar7 = 1;
        for (iVar3 = uVar4 - iVar3; iVar3 != 0; iVar3 = iVar3 + -1) {
          iVar7 = iVar7 * 10;
        }
      }
    }
    else {
      local_d0[0] = auStack_b0;
      iVar3 = FUN_180223228(param_1,s__d__llu__c_180237ed0,&local_ac,&local_a8,local_d0,8);
      if (iVar3 != 2) {
        return 0;
      }
      FUN_180223228(param_1,s__d__s_180237ee4,&local_ac,auStack_a0,local_d0,0);
      uVar4 = FUN_180222d10(auStack_a0);
      if (6 < uVar4) {
        uVar9 = 1;
        for (iVar3 = uVar4 - 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          uVar9 = uVar9 * 10;
        }
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1801faa70);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = local_a8 / uVar9;
        }
        uVar4 = 6;
        local_a8 = uVar8;
      }
      iVar3 = 0;
      for (; (9 < (uint)local_a8 && ((uint)local_a8 % 10 == 0));
          local_a8._0_4_ = (uint)local_a8 / 10) {
        iVar3 = iVar3 + 1;
      }
      iVar7 = 1;
      iVar3 = uVar4 - iVar3;
      for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar7 = iVar7 * 10;
      }
      *param_2 = (uint)local_a8 + iVar7 * local_ac;
      iVar7 = 1;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        iVar7 = iVar7 * 10;
      }
    }
  }
  *param_3 = iVar7;
  return 1;
}

