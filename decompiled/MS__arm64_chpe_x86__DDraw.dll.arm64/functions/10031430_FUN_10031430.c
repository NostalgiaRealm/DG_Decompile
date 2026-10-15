/*
 * FUN_10031430 at 10031430
 * undefined FUN_10031430(void)
 * Address ranges: 10031430-100314bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10031430(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_w1;
  float fVar4;
  
  *(uint *)(param_1 + 0xcea0) = param_4;
  uVar3 = FUN_10030738(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0xcea4) = uVar3;
  iVar2 = extraout_w1 * 0x2c;
  uVar1 = *(uint *)(&DAT_100bb780 + extraout_w1 * 0x2c);
  if (uVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)((double)(uVar1 & param_4) / (double)uVar1);
  }
  *(float *)(param_1 + 0xce7c) = fVar4;
  *(uint *)(param_1 + 0xced0) = (uint)(byte)(&DAT_100bb7a8)[iVar2];
  *(uint *)(param_1 + 0xced4) = (uint)(byte)(&DAT_100bb7a9)[iVar2];
  *(uint *)(param_1 + 0xced8) = (uint)(byte)(&DAT_100bb7aa)[iVar2];
  *(uint *)(param_1 + 0xcedc) = (uint)(byte)(&DAT_100bb7ab)[iVar2];
  return;
}

