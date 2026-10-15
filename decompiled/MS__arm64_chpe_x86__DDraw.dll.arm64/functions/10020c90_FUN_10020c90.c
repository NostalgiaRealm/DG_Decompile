/*
 * FUN_10020c90 at 10020c90
 * undefined FUN_10020c90(void)
 * Address ranges: 10020c90-10020e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10020c90(int param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5,
                 undefined8 param_6,int param_7,byte param_8)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int local_150;
  int iStack_14c;
  undefined4 local_148;
  undefined8 local_140;
  longlong lStack_138;
  undefined8 local_130;
  int local_120 [8];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [28];
  undefined2 local_9c;
  undefined2 local_9a;
  undefined1 auStack_80 [28];
  ushort local_64;
  undefined2 local_62;
  
  *(undefined1 *)(param_1 + 0x39) = 1;
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  cVar6 = '\0';
  if (param_2 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_2,auStack_b8);
    cVar5 = FUN_1001fc90(param_1,local_9a,local_9c);
    cVar6 = '\0';
    if (cVar5 != '\0') {
      (*pcVar4)();
      (*extraout_w11_00)(param_2,auStack_80);
      iStack_14c = (uint)param_8 * 4 + 5;
      local_140 = 0xffffffff00000000;
      if (param_8 == 0) {
        uVar3 = (ulonglong)local_64;
      }
      else {
        uVar3 = 0;
      }
      lStack_138 = uVar3 << 0x20;
      local_130 = 0;
      local_e0 = 0;
      local_f8 = 0x1688;
      local_f0 = 0xffffffff00000000;
      local_120[1] = 4;
      local_120[2] = 0;
      *(int *)(param_1 + 0x2c) = param_3;
      *(undefined4 *)(param_1 + 0x30) = 0;
      local_100 = 0x500000000;
      lStack_e8 = (ulonglong)local_64 << 0x20;
      local_d0 = 0x500000000;
      uStack_c0 = 0;
      local_c8 = 0;
      local_120[3] = 0;
      local_120[4] = 0;
      local_120[5] = 0;
      piVar1 = local_120;
      if (param_7 == 0) {
        piVar1 = (int *)0x0;
      }
      else {
        *(int *)(param_1 + 0x34) = param_7;
      }
      piVar2 = &local_150;
      if (param_3 == 0) {
        piVar2 = (int *)0x0;
      }
      *(int *)(param_1 + 0xc) = param_2;
      local_150 = param_3;
      local_148 = param_5;
      local_120[0] = param_7;
      cVar6 = FUN_1001fcf0(param_1,piVar2,0,0,piVar1,local_62,local_64,0);
      if (cVar6 == '\0') {
        *(int *)(param_1 + 0xc) = 0;
      }
      else {
        uVar7 = (*pcVar4)();
        (*extraout_w11_01)(uVar7);
      }
    }
  }
  return cVar6;
}

