/*
 * FUN_10079207 at 10079207
 * uint __thiscall FUN_10079207(void * this, uint param_1, byte param_2)
 * Address ranges: 10079207-1007923b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10079207(void *this,uint param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 >> (param_2 & 0x1f);
  uVar2 = 1;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  if ((&DAT_100b05d0)[*(int *)((int)this + 0x1c)] != '\0') {
    uVar2 = (uVar2 - 1) + (uint)(byte)(&DAT_100b067c)[*(int *)((int)this + 0x1c)] &
            -(uint)(byte)(&DAT_100b067c)[*(int *)((int)this + 0x1c)];
  }
  return uVar2;
}

