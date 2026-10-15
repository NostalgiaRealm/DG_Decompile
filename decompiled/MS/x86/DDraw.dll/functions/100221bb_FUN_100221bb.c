/*
 * FUN_100221bb at 100221bb
 * uint __thiscall FUN_100221bb(void * this, uint param_1, byte param_2)
 * Address ranges: 100221bb-100221ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100221bb(void *this,uint param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 >> (param_2 & 0x1f);
  uVar2 = 1;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  if ((&DAT_10062900)[*(int *)((int)this + 0x1c)] != '\0') {
    uVar2 = (uVar2 - 1) + (uint)(byte)(&DAT_100629ac)[*(int *)((int)this + 0x1c)] &
            -(uint)(byte)(&DAT_100629ac)[*(int *)((int)this + 0x1c)];
  }
  return uVar2;
}

