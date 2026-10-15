/*
 * FUN_10042790 at 10042790
 * undefined FUN_10042790(void)
 * Address ranges: 10042790-10042873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10042790(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  undefined1 auVar3 [16];
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined1 local_3c;
  
  local_40 = 0x100;
  local_3c = 1;
  local_48 = FUN_100fece0(0x100);
  local_44 = local_48;
  auVar3 = FUN_1006fcc8(param_1 + 0x28,param_1 + 0x38,param_4,*(undefined1 *)(param_1 + 0x70),
                        param_6,&local_48,0);
  iVar1 = local_48;
  if ((auVar3._0_8_ & 1) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(param_2 + param_3 * 0x1510 + 0x510),auVar3._8_8_,
                       local_44 - local_48);
    (*extraout_w11)(uVar2,iVar1);
  }
  FUN_100fed00(iVar1);
  return 0;
}

