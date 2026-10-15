/*
 * FUN_10049309 at 10049309
 * undefined __thiscall FUN_10049309(void * this, uint param_1)
 * Address ranges: 10049309-10049397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049309(void *this,uint param_1)

{
  uint uVar1;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  if (*(char *)((int)this + 0x1efc) != '\0') {
    local_c = &local_10;
    local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
      local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    uVar1 = 0;
    if (*(int *)((int)this + 0xa0) != 0) {
      do {
        FUN_1003f89d(*(void **)(*(int *)((int)this + 0x9c) + uVar1 * 4),param_1);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)this + 0xa0));
    }
  }
  return;
}

