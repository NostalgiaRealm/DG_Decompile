/*
 * FUN_100197b1 at 100197b1
 * undefined __thiscall FUN_100197b1(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 100197b1-1001986b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100197b1(void *this,uint param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int extraout_EDX;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  if (*(char *)((int)this + 0x3c4) == '\0') {
    FUN_100289ea((void *)(*(int *)((int)this + 0xd80) + param_1 * 0x40),param_2);
    FUN_10019671(this,param_1);
  }
  else {
    FUN_100289ea((void *)(param_1 * 0x40 + 0x770 +
                         *(int *)(*(int *)((int)this + 0x3b4) + *(int *)((int)this + 0x3c0) * 4)),
                 param_2);
    pbVar1 = (byte *)(extraout_EDX + 0xabe8 + (param_1 >> 5) * 4 + ((int)(param_1 & 0x1f) >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (param_1 & 7);
  }
  return;
}

