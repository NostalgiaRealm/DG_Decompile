/*
 * FUN_100399e0 at 100399e0
 * undefined FUN_100399e0(void)
 * Address ranges: 100399e0-10039f43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100399e0(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  uint uVar3;
  
  *param_4 = 0;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = 0;
  if (param_2 == *(int *)(param_1 + 0x14)) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0xc) != 0) {
      do {
        if (*param_4 != 0) {
          return uVar2;
        }
        uVar2 = (*pcVar1)();
        uVar2 = (*extraout_w11)(uVar2,*param_3,param_4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x18)) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0xc) != 0) {
      do {
        if (*param_4 != 0) {
          return uVar2;
        }
        uVar2 = (*pcVar1)();
        uVar2 = (*extraout_w11_00)(uVar2,*param_3,param_3[1],param_3[2],param_4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x1c)) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0xc) != 0) {
      do {
        if (*param_4 != 0) {
          return uVar2;
        }
        uVar2 = (*pcVar1)();
        uVar2 = (*extraout_w11_01)(uVar2,*param_3,param_4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x20)) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0xc) != 0) {
      do {
        if (*param_4 != 0) {
          return uVar2;
        }
        uVar2 = (*pcVar1)();
        uVar2 = (*extraout_w11_02)(uVar2,*param_3,param_3[1],param_4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x24)) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0xc) != 0) {
      do {
        if (*param_4 != 0) {
          return uVar2;
        }
        uVar2 = (*pcVar1)();
        uVar2 = (*extraout_w11_03)(uVar2,*param_3,param_3[1],param_4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x28)) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0xc) != 0) {
      do {
        if (*param_4 != 0) {
          return uVar2;
        }
        uVar2 = (*pcVar1)();
        uVar2 = (*extraout_w11_04)(uVar2,*param_3,param_3[1],param_4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x2c)) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0xc) != 0) {
      do {
        if (*param_4 != 0) {
          return uVar2;
        }
        uVar2 = (*pcVar1)();
        uVar2 = (*extraout_w11_05)(uVar2,*param_3,param_4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x30)) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0xc) != 0) {
      do {
        if (*param_4 != 0) {
          return uVar2;
        }
        uVar2 = (*pcVar1)();
        uVar2 = (*extraout_w11_06)(uVar2,*param_3,param_3[1],param_3[2],param_3[3],param_4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x34)) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0xc) != 0) {
      do {
        if (*param_4 != 0) {
          return uVar2;
        }
        uVar2 = (*pcVar1)();
        uVar2 = (*extraout_w11_07)(uVar2,*param_3,param_3[1],param_3[2],param_3[3],param_4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
  }
  return uVar2;
}

