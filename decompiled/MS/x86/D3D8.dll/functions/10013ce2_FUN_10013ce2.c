/*
 * FUN_10013ce2 at 10013ce2
 * undefined __thiscall FUN_10013ce2(void * this, char param_1, byte param_2, char param_3)
 * Address ranges: 10013ce2-10013d29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013ce2(void *this,char param_1,byte param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 == '\0') || (param_3 == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  uVar1 = *(uint *)((int)this + 0x20c);
  uVar2 = uVar1 & 0xfffffff9 | (uint)param_2 << 2 | uVar2;
  *(uint *)((int)this + 0x20c) = uVar2;
  *(byte *)((int)this + 0xa02) = *(byte *)((int)this + 0xa02) | uVar2 != uVar1;
  return;
}

