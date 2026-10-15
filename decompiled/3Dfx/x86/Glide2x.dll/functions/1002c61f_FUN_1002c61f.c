/*
 * FUN_1002c61f at 1002c61f
 * undefined __thiscall FUN_1002c61f(void * this, byte param_1)
 * Address ranges: 1002c61f-1002c6b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c61f(void *this,byte param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = -(uint)(*(char *)((int)this + 0x315b) != '\0') & 0x30;
  uVar1 = -(uint)(*(char *)((int)this + 0x315a) != '\0');
  uVar2 = -(uint)(*(char *)((int)this + 0x3159) != '\0') & 3;
  uVar4 = uVar3 | uVar1 & 0xc | uVar2;
  if ((((byte)uVar4 & 5) == 5) && ((param_1 & 0x10) == 0)) {
    uVar4 = uVar3 | uVar1 & 8 | uVar2;
  }
  if (((uVar4 & 0x10) != 0 && (uVar4 & 5) != 0) && ((param_1 & 0x40) == 0)) {
    uVar4 = uVar4 & 0xffffffef;
  }
  if (((uVar4 & 2) != 0) && ((param_1 & 2) == 0)) {
    uVar4 = uVar4 & 0xfffffffd;
  }
  if (((uVar4 & 8) != 0) && ((param_1 & 8) == 0)) {
    uVar4 = uVar4 & 0xfffffff7;
  }
  if (((uVar4 & 0x20) != 0) && ((param_1 & 0x20) == 0)) {
    uVar4 = uVar4 & 0xffffffdf;
  }
  *(uint *)((int)this + 0x2bdc) = uVar4;
  return;
}

