/*
 * FUN_100811f8 at 100811f8
 * undefined FUN_100811f8(void)
 * Address ranges: 100811f8-100813b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_100811f8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,char param_7,char param_8)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  int local_6c;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  int local_58 [6];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  bVar2 = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(param_2,local_58,auStack_68);
  if (-1 < iVar3) {
    if (local_58[0] == 4 && param_8 == '\0') {
      local_60 = 0;
      local_6c = 0;
      (*pcVar1)();
      iVar3 = (*extraout_w11_00)(param_2,0,&local_60,&local_6c);
      if (-1 < iVar3) {
        bVar2 = FUN_10078ac0(*(undefined4 *)(param_1 + 0x8e4),param_2,0);
        if ((bVar2 & 1) != 0) {
          FUN_100917a0(local_6c + param_4,param_6,param_5 - param_4);
        }
        local_60 = CONCAT44(param_5,param_4);
        (*pcVar1)();
        (*extraout_w11_01)(param_2,0,&local_60);
        if (param_7 != '\0') {
          (*pcVar1)();
          (*extraout_w11_02)(param_2,0,0);
        }
        FUN_1007d820(param_1,param_2,0,1,0);
        if ((bVar2 & 1) != 0) {
          return bVar2;
        }
      }
    }
    bVar2 = FUN_100810a8(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return bVar2;
}

