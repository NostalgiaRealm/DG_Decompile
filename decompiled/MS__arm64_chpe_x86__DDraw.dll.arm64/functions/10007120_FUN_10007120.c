/*
 * FUN_10007120 at 10007120
 * undefined FUN_10007120(void)
 * Address ranges: 10007120-100071df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007120(int param_1,undefined4 param_2,undefined2 param_3,undefined8 param_4,uint param_5,
                 int param_6,undefined4 param_7,uint param_8,undefined4 param_9,undefined4 param_10,
                 undefined4 param_11)

{
  undefined8 uVar1;
  int iVar2;
  uint extraout_w10;
  uint uVar3;
  int extraout_w11;
  
  *(undefined2 *)(param_1 + 10) = param_3;
  *(short *)(param_1 + 8) = (short)param_2;
  *(undefined2 *)(param_1 + 0xc) = 1;
  *(int *)(param_1 + 0x18) = param_6;
  *(char *)(param_1 + 0x1c) = (char)param_7;
  *(char *)(param_1 + 0x1d) = (char)param_8;
  *(char *)(param_1 + 0x1e) = (char)(param_5 >> 3);
  iVar2 = FUN_100071e0(param_2,param_5,param_7,param_6,param_11);
  *(int *)(extraout_w11 + 0x10) = iVar2;
  uVar3 = extraout_w10;
  if (param_6 != 0) {
    if (param_8 == 0) {
                    /* WARNING: Does not return */
      uVar1 = SoftwareBreakpoint(0xf004,0x100071b4);
      (*(code *)uVar1)();
    }
    uVar3 = 0;
    if (param_8 != 0) {
      uVar3 = ((extraout_w10 + param_8) - 1 & -param_8) / param_8;
    }
  }
  *(short *)(extraout_w11 + 0xe) = (short)uVar3;
  *(uint *)(extraout_w11 + 0x14) = (uVar3 & 0xffff) * iVar2;
  return;
}

