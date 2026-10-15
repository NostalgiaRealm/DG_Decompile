/*
 * FUN_10007abf at 10007abf
 * undefined __thiscall FUN_10007abf(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10007abf-10007b79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007abf(void *this,uint param_1,undefined4 *param_2)

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
  if (*(char *)((int)this + 0x224) == '\0') {
    FUN_10013726((void *)(*(int *)((int)this + 0x9cc) + param_1 * 0x40),param_2);
    FUN_1000797f(this,param_1);
  }
  else {
    FUN_10013726((void *)(param_1 * 0x40 + 0x58c +
                         *(int *)(*(int *)((int)this + 0x214) + *(int *)((int)this + 0x220) * 4)),
                 param_2);
    pbVar1 = (byte *)(extraout_EDX + 0xa4c + (param_1 >> 5) * 4 + ((int)(param_1 & 0x1f) >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (param_1 & 7);
  }
  return;
}

