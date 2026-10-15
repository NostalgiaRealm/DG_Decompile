/*
 * FUN_1800a0660 at 1800a0660
 * undefined FUN_1800a0660(void)
 * Address ranges: 1800a0660-1800a06ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a0660(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint extraout_w1;
  float fVar4;
  
  *(uint *)(param_1 + 0x1ceb0) = param_4;
  uVar3 = FUN_1800a0038();
  *(undefined4 *)(param_1 + 0x1ceb4) = uVar3;
  uVar1 = *(uint *)(&DAT_18024a950 + (longlong)(int)extraout_w1 * 0x2c);
  if (uVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)((double)(uVar1 & param_4) / (double)uVar1);
  }
  lVar2 = (ulonglong)extraout_w1 * 0x2c;
  *(float *)(param_1 + 0x1ce8c) = fVar4;
  *(uint *)(param_1 + 0x1cee0) = (uint)(byte)(&DAT_18024a978)[lVar2];
  *(uint *)(param_1 + 0x1cee4) = (uint)(byte)(&DAT_18024a979)[lVar2];
  *(uint *)(param_1 + 0x1cee8) = (uint)(byte)(&DAT_18024a97a)[lVar2];
  *(uint *)(param_1 + 0x1ceec) = (uint)(byte)(&DAT_18024a97b)[lVar2];
  return;
}

