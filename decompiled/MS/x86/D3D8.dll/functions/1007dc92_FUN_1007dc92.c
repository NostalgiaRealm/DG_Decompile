/*
 * FUN_1007dc92 at 1007dc92
 * undefined __thiscall FUN_1007dc92(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1007dc92-1007dd3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007dc92(void *this,undefined4 param_1,undefined4 param_2)

{
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
  FUN_100038a0(this,param_1,param_2);
  FUN_1007d0ce(this,0);
  FUN_1007ced5(this,(undefined4 *)0x0);
  if (*(int *)((int)this + 0xb04) == 1) {
    if ((*(byte *)((int)this + 0xb0c) & 0x20) == 0) goto LAB_1007dd18;
  }
  else if (*(int *)((int)this + 0xb04) != 3) goto LAB_1007dd18;
  *(undefined4 *)((int)this + 0x4f0) = 1;
LAB_1007dd18:
  FUN_1007b09f((int)this);
  return;
}

