/*
 * FUN_10079811 at 10079811
 * undefined __thiscall FUN_10079811(void * this, uint param_1, char param_2)
 * Address ranges: 10079811-10079832
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10079811(void *this,uint param_1,char param_2)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (int)(param_1 & 0x1f) >> 3;
  if (param_2 == '\0') {
    pbVar2 = (byte *)((int)this + iVar1 + (param_1 >> 5) * 4);
    *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
  }
  else {
    pbVar2 = (byte *)((int)this + iVar1 + (param_1 >> 5) * 4);
    *pbVar2 = *pbVar2 | '\x01' << (param_1 & 7);
  }
  return;
}

