/*
 * FUN_1801b8768 at 1801b8768
 * undefined FUN_1801b8768(void)
 * Address ranges: 1801b8768-1801b8807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b8768(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint extraout_w1;
  float fVar4;
  
  *(uint *)(param_1 + 0x1ceb0) = param_4;
  uVar3 = FUN_1801b7f38();
  *(undefined4 *)(param_1 + 0x1ceb4) = uVar3;
  uVar1 = *(uint *)(&DAT_180248440 + (longlong)(int)extraout_w1 * 0x2c);
  if (uVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)((double)(uVar1 & param_4) / (double)uVar1);
  }
  lVar2 = (ulonglong)extraout_w1 * 0x2c;
  *(float *)(param_1 + 0x1ce8c) = fVar4;
  *(uint *)(param_1 + 0x1cee0) = (uint)(byte)(&DAT_180248468)[lVar2];
  *(uint *)(param_1 + 0x1cee4) = (uint)(byte)(&DAT_180248469)[lVar2];
  *(uint *)(param_1 + 0x1cee8) = (uint)(byte)(&DAT_18024846a)[lVar2];
  *(uint *)(param_1 + 0x1ceec) = (uint)(byte)(&DAT_18024846b)[lVar2];
  return;
}

