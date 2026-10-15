/*
 * FUN_1008f57f at 1008f57f
 * uint __thiscall FUN_1008f57f(void * this, uint param_1, byte param_2)
 * Address ranges: 1008f57f-1008f5b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1008f57f(void *this,uint param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 >> (param_2 & 0x1f);
  uVar2 = 1;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  if ((&DAT_100d27d8)[*(int *)((int)this + 0x1c)] != '\0') {
    uVar2 = (uVar2 - 1) + (uint)(byte)(&DAT_100d28e4)[*(int *)((int)this + 0x1c)] &
            -(uint)(byte)(&DAT_100d28e4)[*(int *)((int)this + 0x1c)];
  }
  return uVar2;
}

