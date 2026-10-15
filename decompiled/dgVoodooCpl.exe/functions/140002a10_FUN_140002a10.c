/*
 * FUN_140002a10 at 140002a10
 * undefined8 __fastcall FUN_140002a10(undefined8 param_1, byte * param_2, undefined8 * param_3)
 * Address ranges: 140002a10-140002c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140002a10(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined1 uVar5;
  undefined8 local_res8;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8 [128];
  
  local_b8 = 0;
  uVar5 = 1;
  local_res8 = param_1;
  iVar1 = FUN_1400242b4(param_2,(byte *)" max @ %d %c",&local_b8,&local_res8);
  iVar2 = FUN_1400242b4(param_2,(byte *)" max_4_3 @ %d %c",&local_b8,&local_res8);
  iVar3 = FUN_1400242b4(param_2,(byte *)" max_16_9 @ %d %c",&local_b8,&local_res8);
  if (iVar1 == 1) {
    *param_3 = 0xffffffffffffffff;
  }
  else {
    if (iVar2 == 1) {
      *(undefined4 *)((longlong)param_3 + 4) = 0x100;
    }
    else {
      if (iVar3 != 1) {
        iVar1 = FUN_1400242b4(param_2,(byte *)" %s %c",local_a8,&local_res8);
        if (iVar1 == 1) {
          iVar1 = FUN_140024ce8(local_a8,&DAT_1400272d4);
          uVar4 = CONCAT44(extraout_var,iVar1);
          if (iVar1 == 0) {
            *param_3 = 0xffffffffffffffff;
            *(undefined4 *)(param_3 + 1) = 0;
            goto LAB_140002bee;
          }
        }
        iVar1 = FUN_1400242b4(param_2,(byte *)" %s %c",local_a8,&local_res8);
        if (iVar1 == 1) {
          iVar1 = FUN_140024ce8(local_a8,(byte *)"max_4_3");
          uVar4 = CONCAT44(extraout_var_00,iVar1);
          if (iVar1 == 0) {
            *(undefined4 *)param_3 = 0xffffffff;
            *(undefined8 *)((longlong)param_3 + 4) = 0x100;
            goto LAB_140002bee;
          }
        }
        iVar1 = FUN_1400242b4(param_2,(byte *)" %s %c",local_a8,&local_res8);
        if (iVar1 == 1) {
          iVar1 = FUN_140024ce8(local_a8,(byte *)"max_16_9");
          uVar4 = CONCAT44(extraout_var_01,iVar1);
          if (iVar1 == 0) {
            *(undefined4 *)param_3 = 0xffffffff;
            *(undefined8 *)((longlong)param_3 + 4) = 0x101;
            goto LAB_140002bee;
          }
        }
        local_ac = 0;
        iVar1 = FUN_1400242b4(param_2,(byte *)"%d x %d %c",&local_b4,&local_b0);
        uVar4 = CONCAT44(extraout_var_02,iVar1);
        if (iVar1 != 2) {
          iVar1 = FUN_1400242b4(param_2,(byte *)"%d x %d @ %d %c",&local_b4,&local_b0);
          uVar4 = CONCAT44(extraout_var_03,iVar1);
          if (iVar1 != 3) {
            uVar5 = 0;
            goto LAB_140002bee;
          }
        }
        *(undefined4 *)param_3 = local_b4;
        *(undefined4 *)((longlong)param_3 + 4) = local_b0;
        *(undefined4 *)(param_3 + 1) = local_ac;
        goto LAB_140002bee;
      }
      *(undefined4 *)((longlong)param_3 + 4) = 0x101;
    }
    *(undefined4 *)param_3 = 0xffffffff;
  }
  uVar4 = (ulonglong)local_b8;
  *(uint *)(param_3 + 1) = local_b8;
LAB_140002bee:
  return CONCAT71((int7)(uVar4 >> 8),uVar5);
}

