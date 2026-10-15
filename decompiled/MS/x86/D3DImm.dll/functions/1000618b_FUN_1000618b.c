/*
 * FUN_1000618b at 1000618b
 * undefined __thiscall FUN_1000618b(void * this, char param_1, byte param_2, char param_3)
 * Address ranges: 1000618b-100061d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000618b(void *this,char param_1,byte param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 == '\0') || (param_3 == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  uVar1 = *(uint *)((int)this + 0x210);
  uVar2 = uVar1 & 0xfffffff9 | (uint)param_2 << 2 | uVar2;
  *(uint *)((int)this + 0x210) = uVar2;
  *(byte *)((int)this + 0x932) = *(byte *)((int)this + 0x932) | uVar2 != uVar1;
  return;
}

