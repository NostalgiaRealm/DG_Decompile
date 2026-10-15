/*
 * FUN_10052a70 at 10052a70
 * undefined FUN_10052a70(void)
 * Address ranges: 10052a70-10052b87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052a70(int param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *extraout_w11;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uVar1 = 0x80070057;
  if ((param_2 != (undefined8 *)0x0) && ((param_3 & 0xfffffffe) == 0)) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    FUN_100917d0(param_2,0,0x42c);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)(uVar1);
    FUN_10002290(uVar2,auStack_40,(int)uVar2 + 0x174);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x81) = local_3c;
    *(undefined4 *)((int)param_2 + 0x40c) = uStack_38;
    *(undefined4 *)(param_2 + 0x82) = local_34;
    *(undefined4 *)((int)param_2 + 0x414) = uStack_30;
    *(undefined4 *)((int)param_2 + 0x404) = local_1c;
    *(undefined4 *)(param_2 + 0x80) = uStack_18;
    param_2[0x84] = uStack_24;
    param_2[0x83] = local_2c;
    *(undefined4 *)(param_2 + 0x85) = local_14;
    *param_2 = DAT_100b3c90;
    *(undefined1 *)(param_2 + 1) = DAT_100b3c98;
    uVar2 = s_dgVoodoo_DX_API_Layer_100b3b70._0_8_;
    param_2[0x41] = s_dgVoodoo_DX_API_Layer_100b3b70._8_8_;
    param_2[0x40] = uVar2;
    *(undefined4 *)(param_2 + 0x42) = s_dgVoodoo_DX_API_Layer_100b3b70._16_4_;
    *(undefined2 *)((int)param_2 + 0x214) = s_dgVoodoo_DX_API_Layer_100b3b70._20_2_;
  }
  return uVar1;
}

