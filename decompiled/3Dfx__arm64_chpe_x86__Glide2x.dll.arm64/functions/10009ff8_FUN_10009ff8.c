/*
 * FUN_10009ff8 at 10009ff8
 * undefined FUN_10009ff8(void)
 * Address ranges: 10009ff8-1000a2eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10009ff8(undefined4 param_1,uint *param_2,int *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_e0;
  char *pcStack_dc;
  ulonglong *local_d8;
  ulonglong *local_d4;
  undefined1 *local_d0;
  undefined1 auStack_b0 [4];
  uint local_ac;
  ulonglong local_a8;
  undefined1 auStack_a0 [128];
  
  local_d4 = (ulonglong *)auStack_b0;
  local_ac = 0;
  local_d8 = (ulonglong *)&local_ac;
  local_a8 = 0;
  pcStack_dc = s__d__c_10095a74;
  local_e0 = param_1;
  iVar3 = FUN_1007c2c0(&local_e0,0x10);
  if (iVar3 == 1) {
    *param_2 = local_ac;
    iVar3 = 1;
  }
  else {
    local_d4 = (ulonglong *)auStack_b0;
    local_d8 = &local_a8;
    pcStack_dc = s___llu__c_10095a80;
    local_e0 = param_1;
    iVar3 = FUN_1007c2c0(&local_e0,0x10);
    if (iVar3 == 1) {
      local_d8 = (ulonglong *)auStack_a0;
      pcStack_dc = &DAT_10095a8c;
      local_e0 = param_1;
      FUN_1007c2c0(&local_e0,0xc);
      if (local_a8 == 0) {
        *param_2 = 0;
        iVar3 = 1;
      }
      else {
        uVar4 = FUN_1007a1a0(auStack_a0);
        if (uVar4 < 7) {
          uVar8 = (ulonglong)local_ac;
        }
        else {
          uVar7 = 1;
          uVar9 = 0;
          if (uVar4 != 6) {
            do {
              uVar9 = uVar9 + 1;
              uVar7 = uVar7 * 10;
            } while (uVar9 < uVar4 - 6);
          }
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            uVar2 = SoftwareBreakpoint(0xf004,0x1000a100);
            (*(code *)uVar2)();
          }
          uVar8 = 0;
          if (uVar7 != 0) {
            uVar8 = local_a8 / uVar7;
          }
          uVar8 = uVar8 & 0xffffffff;
          uVar4 = 6;
        }
        uVar5 = (uint)uVar8;
        uVar9 = 0;
        if (9 < uVar5) {
          uVar9 = 0;
          do {
            uVar5 = (uint)uVar8;
            if (uVar5 + (int)(uVar8 / 10) * -10 != 0) break;
            uVar5 = (uint)(uVar8 / 10);
            uVar7 = uVar8 / 10;
            uVar9 = uVar9 + 1;
            uVar8 = uVar8 / 10;
          } while (9 < (uint)uVar7);
        }
        *param_2 = uVar5;
        iVar3 = 1;
        uVar5 = 0;
        if (uVar4 != uVar9) {
          do {
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 * 10;
          } while (uVar5 < uVar4 - uVar9);
        }
      }
    }
    else {
      local_d0 = auStack_b0;
      local_d4 = &local_a8;
      local_d8 = (ulonglong *)&local_ac;
      pcStack_dc = s__d__llu__c_10095a98;
      local_e0 = param_1;
      iVar3 = FUN_1007c2c0(&local_e0,0x14);
      if (iVar3 != 2) {
        return 0;
      }
      local_d4 = (ulonglong *)auStack_a0;
      local_d8 = (ulonglong *)&local_ac;
      pcStack_dc = s__d__s_10095aa4;
      local_e0 = param_1;
      FUN_1007c2c0(&local_e0,0x10);
      uVar4 = FUN_1007a1a0(auStack_a0);
      if (6 < uVar4) {
        uVar8 = 1;
        uVar9 = 0;
        if (uVar4 != 6) {
          do {
            uVar9 = uVar9 + 1;
            uVar8 = uVar8 * 10;
          } while (uVar9 < uVar4 - 6);
        }
        if (uVar8 == 0) {
                    /* WARNING: Does not return */
          uVar2 = SoftwareBreakpoint(0xf004,0x1000a22c);
          (*(code *)uVar2)();
        }
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = local_a8 / uVar8;
        }
        uVar4 = 6;
        local_a8 = uVar7;
      }
      uVar9 = 0;
      uVar5 = (uint)local_a8;
      if (9 < (uint)local_a8) {
        uVar9 = 0;
        uVar8 = local_a8 & 0xffffffff;
        do {
          uVar7 = uVar8 / 10;
          uVar5 = (uint)uVar8;
          if ((uint)uVar8 + (int)(uVar8 / 10) * -10 != 0) break;
          uVar1 = uVar8 / 10;
          uVar9 = uVar9 + 1;
          uVar8 = uVar8 / 10;
          uVar5 = (uint)uVar7;
        } while (9 < (uint)uVar1);
      }
      iVar3 = 1;
      uVar10 = 0;
      if (uVar4 != uVar9) {
        do {
          uVar10 = uVar10 + 1;
          iVar3 = iVar3 * 10;
        } while (uVar10 < uVar4 - uVar9);
      }
      uVar10 = 0;
      *param_2 = uVar5 + iVar3 * local_ac;
      iVar3 = 1;
      iVar6 = 1;
      if (uVar4 != uVar9) {
        do {
          uVar10 = uVar10 + 1;
          iVar3 = iVar6 * 10;
          iVar6 = iVar3;
        } while (uVar10 < uVar4 - uVar9);
      }
    }
  }
  *param_3 = iVar3;
  return 1;
}

