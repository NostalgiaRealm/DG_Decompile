/*
 * FUN_140002d10 at 140002d10
 * undefined8 __cdecl FUN_140002d10(undefined8 param_1, byte * param_2, undefined8 * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140002d10-140002ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_140002d10(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 uStack_d0;
  undefined1 local_cf [3];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0 [2];
  byte abStack_b8 [136];
  
  local_cc = 0;
  iVar1 = FUN_1400248b0(param_2,(byte *)" max @ %d %c",&local_cc,&uStack_d0,param_5,param_6,param_7,
                        param_8);
  iVar2 = FUN_1400248b0(param_2,(byte *)" max_4_3 @ %d %c",&local_cc,&uStack_d0,param_5,param_6,
                        param_7,param_8);
  iVar3 = FUN_1400248b0(param_2,(byte *)" max_16_9 @ %d %c",&local_cc,&uStack_d0,param_5,param_6,
                        param_7,param_8);
  if (iVar1 == 1) {
    uVar5 = 0xffffffffffffffff;
  }
  else if (iVar2 == 1) {
    uVar5 = 0x100ffffffff;
  }
  else {
    if (iVar3 != 1) {
      iVar1 = FUN_1400248b0(param_2,(byte *)" %s %c",abStack_b8,&uStack_d0,param_5,param_6,param_7,
                            param_8);
      if ((iVar1 == 1) && (uVar4 = FUN_140024ce0(abStack_b8,&DAT_140027374), uVar4 == 0)) {
        uVar5 = 0xffffffffffffffff;
LAB_140002e64:
        *param_3 = uVar5;
        *(undefined4 *)(param_3 + 1) = 0;
        return 1;
      }
      iVar1 = FUN_1400248b0(param_2,(byte *)" %s %c",abStack_b8,&uStack_d0,param_5,param_6,param_7,
                            param_8);
      if ((iVar1 == 1) && (uVar4 = FUN_140024ce0(abStack_b8,(byte *)"max_4_3"), uVar4 == 0)) {
        uVar5 = 0x100ffffffff;
        goto LAB_140002e64;
      }
      iVar1 = FUN_1400248b0(param_2,(byte *)" %s %c",abStack_b8,&uStack_d0,param_5,param_6,param_7,
                            param_8);
      if ((iVar1 == 1) && (uVar4 = FUN_140024ce0(abStack_b8,(byte *)"max_16_9"), uVar4 == 0)) {
        uVar5 = 0x101ffffffff;
        goto LAB_140002e64;
      }
      local_c0[0] = 0;
      local_cf[0] = 0;
      iVar1 = FUN_1400248b0(param_2,(byte *)"%d x %d %c",&local_c8,&uStack_c4,local_cf,param_6,
                            param_7,param_8);
      if ((iVar1 != 2) &&
         (iVar1 = FUN_1400248b0(param_2,(byte *)"%d x %d @ %d %c",&local_c8,&uStack_c4,local_c0,
                                local_cf,param_7,param_8), iVar1 != 3)) {
        return 0;
      }
      *(undefined4 *)param_3 = local_c8;
      *(undefined4 *)((longlong)param_3 + 4) = uStack_c4;
      local_cc = local_c0[0];
      goto LAB_140002ed8;
    }
    uVar5 = 0x101ffffffff;
  }
  *param_3 = uVar5;
LAB_140002ed8:
  *(undefined4 *)(param_3 + 1) = local_cc;
  return 1;
}

