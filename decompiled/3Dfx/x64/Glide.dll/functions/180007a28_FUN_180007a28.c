/*
 * FUN_180007a28 at 180007a28
 * undefined8 __fastcall FUN_180007a28(byte * param_1, uint * param_2, undefined4 * param_3)
 * Address ranges: 180007a28-180007c4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180007a28(byte *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 extraout_var;
  int iVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 local_res20 [8];
  uint local_a8 [2];
  ulonglong local_a0;
  char local_98 [128];
  
  local_a8[0] = 0;
  local_a0 = 0;
  uVar8 = 1;
  iVar2 = FUN_18005f830(param_1,(byte *)" %d %c",local_a8,local_res20);
  if (iVar2 == 1) {
    uVar7 = (ulonglong)local_a8[0];
    *param_2 = local_a8[0];
    *param_3 = 1;
  }
  else {
    puVar10 = local_res20;
    iVar2 = FUN_18005f830(param_1,(byte *)" .%llu %c",&local_a0,puVar10);
    if (iVar2 == 1) {
      FUN_18005f830(param_1,&DAT_180061c84,local_98,puVar10);
      if (local_a0 == 0) {
        *param_2 = 0;
        uVar7 = 1;
      }
      else {
        lVar5 = FUN_18005dc60(local_98);
        uVar3 = (uint)lVar5;
        if (uVar3 < 7) {
          local_a0 = (ulonglong)local_a8[0];
        }
        else {
          uVar7 = 1;
          for (iVar2 = uVar3 - 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            uVar7 = uVar7 * 10;
          }
          local_a0 = local_a0 / uVar7;
          uVar3 = 6;
        }
        iVar2 = 0;
        uVar9 = (uint)local_a0;
        while (9 < uVar9) {
          uVar7 = (local_a0 & 0xffffffff) / 10;
          uVar1 = (uint)uVar7;
          uVar9 = (uint)local_a0;
          if (uVar9 != uVar1 * 10) break;
          iVar2 = iVar2 + 1;
          uVar9 = uVar1;
          local_a0 = uVar7;
        }
        *param_2 = uVar9;
        uVar7 = 1;
        for (iVar2 = uVar3 - iVar2; iVar2 != 0; iVar2 = iVar2 + -1) {
          uVar7 = (ulonglong)(uint)((int)uVar7 * 10);
        }
      }
    }
    else {
      iVar2 = FUN_18005f830(param_1,(byte *)" %d.%llu %c",local_a8,&local_a0);
      uVar7 = CONCAT44(extraout_var,iVar2);
      if (iVar2 != 2) {
        uVar8 = 0;
        goto LAB_180007c31;
      }
      FUN_18005f830(param_1,(byte *)"%d.%s ",local_a8,local_98);
      lVar5 = FUN_18005dc60(local_98);
      uVar3 = (uint)lVar5;
      if (6 < uVar3) {
        uVar7 = 1;
        for (iVar2 = uVar3 - 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          uVar7 = uVar7 * 10;
        }
        local_a0 = local_a0 / uVar7;
        uVar3 = 6;
      }
      iVar2 = 0;
      uVar9 = (uint)local_a0;
      while (9 < uVar9) {
        uVar7 = (local_a0 & 0xffffffff) / 10;
        uVar1 = (uint)uVar7;
        uVar9 = (uint)local_a0;
        if (uVar9 != uVar1 * 10) break;
        iVar2 = iVar2 + 1;
        uVar9 = uVar1;
        local_a0 = uVar7;
      }
      iVar4 = 1;
      iVar2 = uVar3 - iVar2;
      for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
        iVar4 = iVar4 * 10;
      }
      *param_2 = iVar4 * local_a8[0] + uVar9;
      uVar7 = 1;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        uVar7 = (ulonglong)(uint)((int)uVar7 * 10);
      }
    }
    *param_3 = (int)uVar7;
  }
LAB_180007c31:
  return CONCAT71((int7)(uVar7 >> 8),uVar8);
}

