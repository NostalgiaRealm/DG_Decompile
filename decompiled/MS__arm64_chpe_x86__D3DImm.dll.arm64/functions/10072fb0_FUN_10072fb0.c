/*
 * FUN_10072fb0 at 10072fb0
 * undefined FUN_10072fb0(void)
 * Address ranges: 10072fb0-10073103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10072fb0(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,uint param_5)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined4 local_60;
  undefined1 auStack_5c [4];
  longlong local_58;
  int local_50 [8];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  bVar2 = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(param_2,local_50,auStack_5c);
  if (-1 < iVar3) {
    if (local_50[0] == 4) {
      local_58 = 0;
      local_60 = 0;
      (*pcVar1)();
      iVar3 = (*extraout_w11_00)(param_2,0,&local_58,&local_60);
      if (-1 < iVar3) {
        bVar2 = FUN_100785b8(*(undefined4 *)(param_1 + 0x8e4),param_2);
        if ((bVar2 & 1) != 0) {
          FUN_10081ee0(local_60,&DAT_100a2360,param_5);
        }
        local_58 = (ulonglong)param_5 << 0x20;
        (*pcVar1)();
        (*extraout_w11_01)(param_2,0,&local_58);
        FUN_10072268(param_1,param_2,0,1,0);
        if ((bVar2 & 1) != 0) {
          return bVar2;
        }
      }
    }
    bVar2 = FUN_10072f38(param_1,param_2,param_3);
  }
  return bVar2;
}

