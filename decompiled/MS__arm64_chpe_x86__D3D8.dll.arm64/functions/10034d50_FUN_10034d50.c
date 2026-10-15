/*
 * FUN_10034d50 at 10034d50
 * undefined FUN_10034d50(void)
 * Address ranges: 10034d50-10034e2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10034d50(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,int param_13)

{
  ushort uVar1;
  
  *(short *)(param_1 + 10) = (short)param_3;
  *(short *)(param_1 + 8) = (short)param_2;
  *(undefined2 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  *(char *)(param_1 + 0x1c) = (char)param_7;
  *(char *)(param_1 + 0x1d) = (char)param_8;
  *(char *)(param_1 + 0x1e) = (char)(param_5 >> 3);
  if (param_9 == 0) {
    param_9 = FUN_10035120(param_2,param_5,param_7,param_6,param_11);
  }
  *(int *)(param_1 + 0x10) = param_9;
  uVar1 = FUN_10034d10(param_3,param_8,param_6);
  *(ushort *)(param_1 + 0xe) = uVar1;
  if (param_13 == 0) {
    param_13 = (uint)uVar1 * param_9;
  }
  *(int *)(param_1 + 0x14) = param_13;
  return;
}

