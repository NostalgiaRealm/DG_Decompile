/*
 * FUN_1001c320 at 1001c320
 * undefined FUN_1001c320(void)
 * Address ranges: 1001c320-1001c433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1001c320(int param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  undefined1 auVar4 [16];
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 local_44;
  
  *param_2 = 0;
  if (((uint)param_3 >> 8 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 4);
    local_48 = 0x100;
    local_44 = 1;
    local_50 = FUN_10081da0(0x100);
    uVar3 = 0x10050;
    if (*(int *)(iVar2 + iVar1 * 0x1510 + 0x520) < 0xb000) {
      uVar3 = 0x10040;
    }
    local_4c = local_50;
    auVar4 = FUN_10049348(param_1 + 0x10,param_1 + 0x18,param_3,uVar3,&local_50,
                          *(undefined1 *)(param_1 + 0x120),0);
    iVar1 = local_50;
    if ((auVar4._0_8_ & 1) != 0) {
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (*(undefined4 *)
                          (*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x1510 + 0x510),
                         auVar4._8_8_,local_4c - local_50);
      (*extraout_w11)(uVar3,iVar1);
    }
    FUN_10081dc0(iVar1);
  }
  return param_2;
}

