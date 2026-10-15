/*
 * FUN_100cbef0 at 100cbef0
 * undefined FUN_100cbef0(void)
 * Address ranges: 100cbef0-100cbfb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100cbef0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_w1;
  float fVar4;
  
  *(uint *)(param_1 + 0x1cea0) = param_4;
  uVar3 = FUN_100cb1a8(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x1cea4) = uVar3;
  iVar2 = extraout_w1 * 0x2c;
  uVar1 = *(uint *)(&DAT_1016f210 + extraout_w1 * 0x2c);
  if (uVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)((double)(uVar1 & param_4) / (double)uVar1);
  }
  *(float *)(param_1 + 0x1ce7c) = fVar4;
  *(uint *)(param_1 + 0x1ced0) = (uint)(byte)(&DAT_1016f238)[iVar2];
  *(uint *)(param_1 + 0x1ced4) = (uint)(byte)(&DAT_1016f239)[iVar2];
  *(uint *)(param_1 + 0x1ced8) = (uint)(byte)(&DAT_1016f23a)[iVar2];
  *(uint *)(param_1 + 0x1cedc) = (uint)(byte)(&DAT_1016f23b)[iVar2];
  return;
}

