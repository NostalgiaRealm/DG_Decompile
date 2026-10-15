/*
 * FUN_100215d0 at 100215d0
 * undefined __thiscall FUN_100215d0(void * this, int param_1, int param_2, int param_3, int param_4, float param_5)
 * Address ranges: 100215d0-10021640
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100215d0(void *this,int param_1,int param_2,int param_3,int param_4,float param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 0xc;
    *(short *)(param_2 + uVar2 * 2) =
         (short)(int)(param_5 * *(float *)((int)this + iVar1 + param_1 * 0xc18 + 0x9c));
    *(short *)(param_3 + uVar2 * 2) =
         (short)(int)(param_5 * *(float *)((int)this + iVar1 + param_1 * 0xc18 + 0xa0));
    *(short *)(param_4 + uVar2 * 2) =
         (short)(int)(param_5 * *(float *)((int)this + iVar1 + param_1 * 0xc18 + 0xa4));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return;
}

