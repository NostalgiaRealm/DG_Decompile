/*
 * FUN_100e50c8 at 100e50c8
 * undefined FUN_100e50c8(void)
 * Address ranges: 100e50c8-100e52a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_100e50c8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,char param_7,char param_8)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  int local_9c;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [4];
  int local_84;
  int local_60 [8];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  bVar2 = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(param_2,local_60,auStack_90);
  if (-1 < iVar3) {
    if (local_60[0] == 4 && param_8 == '\0') {
      local_98 = 0;
      local_9c = 0;
      (*pcVar1)();
      iVar3 = (*extraout_w11_00)(param_2,0,&local_98,&local_9c);
      if (-1 < iVar3) {
        bVar2 = FUN_100ec910(*(undefined4 *)(param_1 + 0x8e4),param_2,0);
        if ((bVar2 & 1) != 0) {
          FUN_100ff660(local_9c + param_4,param_6,param_5 - param_4);
        }
        local_98 = CONCAT44(param_5,param_4);
        (*pcVar1)();
        (*extraout_w11_01)(param_2,0,&local_98);
        if (param_7 != '\0') {
          (*pcVar1)();
          (*extraout_w11_02)(param_2,0,0);
        }
        FUN_100e1588(param_1,param_2,0,1,0);
        if ((bVar2 & 1) != 0) {
          return bVar2;
        }
      }
    }
    FUN_100e4f48(param_1,auStack_88,param_3,param_5 - param_4,param_6);
    if (local_84 == 0) {
      bVar2 = 0;
    }
    else {
      FUN_100e4fc8(param_1,param_2,param_3,auStack_88,param_4);
      bVar2 = 1;
    }
  }
  return bVar2;
}

