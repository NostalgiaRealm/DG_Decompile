/*
 * FUN_10008b77 at 10008b77
 * uint __thiscall FUN_10008b77(void * this, uint param_1)
 * Address ranges: 10008b77-10008bc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10008b77(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xd4);
  if (iVar1 == 0) {
    param_1 = param_1 >> 0x18 | param_1 << 8;
  }
  else if (iVar1 == 1) {
    param_1 = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 |
              param_1 << 0x18;
  }
  else if (iVar1 == 3) {
    param_1 = param_1 >> 0x10 & 0xff00 | (param_1 & 0xffffff00) << 0x10 | param_1 & 0xff00ff;
  }
  return param_1;
}

