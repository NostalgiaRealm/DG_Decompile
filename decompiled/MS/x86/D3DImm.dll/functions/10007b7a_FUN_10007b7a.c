/*
 * FUN_10007b7a at 10007b7a
 * undefined __thiscall FUN_10007b7a(void * this, uint param_1, int param_2)
 * Address ranges: 10007b7a-10007c0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007b7a(void *this,uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *this_00;
  ushort in_FPUControlWord;
  float local_50 [16];
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
  this_00 = (undefined4 *)(*(int *)((int)this + 0x9cc) + param_1 * 0x40);
  puVar1 = (undefined4 *)FUN_100137b4(this_00,local_50,param_2);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *this_00 = *puVar1;
    puVar1 = puVar1 + 1;
    this_00 = this_00 + 1;
  }
  FUN_1000797f(this,param_1);
  return;
}

