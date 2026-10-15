/*
 * FUN_180009bf0 at 180009bf0
 * undefined8 __cdecl FUN_180009bf0(byte * param_1, uint * param_2, int * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 180009bf0-180009e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180009bf0(byte *param_1,uint *param_2,int *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_b0 [4];
  uint local_ac;
  ulonglong local_a8;
  char acStack_a0 [128];
  
  local_ac = 0;
  local_a8 = 0;
  iVar3 = FUN_180060390(param_1,(byte *)" %d %c",&local_ac,auStack_b0,param_5,param_6,param_7,
                        param_8);
  if (iVar3 == 1) {
    *param_2 = local_ac;
    iVar9 = 1;
  }
  else {
    puVar6 = auStack_b0;
    iVar3 = FUN_180060390(param_1,(byte *)" .%llu %c",&local_a8,puVar6,param_5,param_6,param_7,
                          param_8);
    if (iVar3 == 1) {
      FUN_180060390(param_1,&DAT_180062c34,acStack_a0,puVar6,param_5,param_6,param_7,param_8);
      if (local_a8 == 0) {
        *param_2 = 0;
        iVar9 = 1;
      }
      else {
        lVar5 = FUN_18005fcd0(acStack_a0);
        uVar4 = (uint)lVar5;
        if (uVar4 < 7) {
          uVar11 = (ulonglong)local_ac;
        }
        else {
          uVar10 = 1;
          for (iVar3 = uVar4 - 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar10 = uVar10 * 10;
          }
          if (uVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180009cb8);
            (*pcVar2)();
          }
          uVar11 = 0;
          if (uVar10 != 0) {
            uVar11 = local_a8 / uVar10;
          }
          uVar4 = 6;
        }
        iVar3 = 0;
        uVar7 = (uint)uVar11;
        uVar8 = uVar7;
        while (9 < uVar8) {
          uVar10 = uVar11 & 0xffffffff;
          uVar7 = (uint)uVar11;
          if (uVar7 + (int)(uVar10 / 10) * -10 != 0) break;
          uVar7 = (uint)(uVar10 / 10);
          iVar3 = iVar3 + 1;
          uVar11 = uVar10 / 10;
          uVar8 = (uint)(uVar10 / 10);
        }
        *param_2 = uVar7;
        iVar9 = 1;
        for (iVar3 = uVar4 - iVar3; iVar3 != 0; iVar3 = iVar3 + -1) {
          iVar9 = iVar9 * 10;
        }
      }
    }
    else {
      puVar6 = auStack_b0;
      iVar3 = FUN_180060390(param_1,(byte *)" %d.%llu %c",&local_ac,&local_a8,puVar6,param_6,param_7
                            ,param_8);
      if (iVar3 != 2) {
        return 0;
      }
      FUN_180060390(param_1,(byte *)"%d.%s ",&local_ac,acStack_a0,puVar6,param_6,param_7,param_8);
      lVar5 = FUN_18005fcd0(acStack_a0);
      uVar4 = (uint)lVar5;
      if (6 < uVar4) {
        uVar11 = 1;
        for (iVar3 = uVar4 - 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          uVar11 = uVar11 * 10;
        }
        if (uVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180009d9c);
          (*pcVar2)();
        }
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = local_a8 / uVar11;
        }
        uVar4 = 6;
        local_a8 = uVar10;
      }
      iVar3 = 0;
      for (; (9 < (uint)local_a8 && ((uint)local_a8 % 10 == 0));
          local_a8._0_4_ = (uint)local_a8 / 10) {
        iVar3 = iVar3 + 1;
      }
      iVar9 = 1;
      iVar3 = uVar4 - iVar3;
      for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar9 = iVar9 * 10;
      }
      *param_2 = (uint)local_a8 + iVar9 * local_ac;
      iVar9 = 1;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        iVar9 = iVar9 * 10;
      }
    }
  }
  *param_3 = iVar9;
  return 1;
}

