/*
 * FUN_100dcc00 at 100dcc00
 * undefined FUN_100dcc00(void)
 * Address ranges: 100dcc00-100dccbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100dcc00(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined4 local_20 [4];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_2 + 0x2c) == 2) {
    local_20[0] = 0;
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11)(uVar2,&DAT_101291c0,local_20);
    if (-1 < iVar3) {
      uVar2 = (*pcVar1)();
      (*extraout_w11_00)(uVar2,0xc);
      uVar2 = (*pcVar1)();
      (*extraout_w11_01)(uVar2);
    }
  }
  return;
}

