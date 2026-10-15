/*
 * FUN_1000b495 at 1000b495
 * undefined __thiscall FUN_1000b495(void * this, uint param_1, RECT * param_2)
 * Address ranges: 1000b495-1000b4ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000b495(void *this,uint param_1,RECT *param_2)

{
  byte *pbVar1;
  LPRECT ptVar2;
  
  ptVar2 = (LPRECT)(*(int *)((int)this + 0x60) + 0xc + param_1 * 0x1c);
  UnionRect(ptVar2,ptVar2,param_2);
  if (*(int *)((int)this + 0xc4) != 0) {
    ptVar2 = (LPRECT)(*(int *)((int)this + 0xc4) + 0xc + param_1 * 0x1c);
    UnionRect(ptVar2,ptVar2,param_2);
  }
  *(undefined1 *)((int)this + 0xdb) = 0;
  pbVar1 = (byte *)((int)this + ((int)(param_1 & 0x1f) >> 3) + (param_1 >> 5) * 4 + 0xcc);
  *pbVar1 = *pbVar1 & ~('\x01' << (param_1 & 7));
  return;
}

