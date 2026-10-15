/*
 * FUN_10092040 at 10092040
 * uint __thiscall FUN_10092040(void * this, uint param_1, uint param_2, int param_3)
 * Address ranges: 10092040-100920cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10092040(void *this,uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  
  local_10 = *(undefined4 *)((int)this + 0xdd4);
  local_c = *(undefined1 *)((int)this + 0xdd8);
  local_b = *(undefined1 *)((int)this + 0xdda);
  local_a = *(undefined1 *)((int)this + 0xdd9);
  local_9 = *(undefined1 *)(*(int *)((int)this + 0xc) + 0x959);
  local_8 = *(undefined1 *)((int)this + 0xddc);
  local_7 = *(undefined1 *)((int)this + 0x6703);
  uVar1 = FUN_10004108(this,param_1,param_2,param_3,&local_10);
  if (-1 < (int)uVar1) {
    FUN_100173fe((void *)((int)this + 0x66a8),DAT_100dea74,
                 -(uint)(this != (void *)0x0) & (int)this + 0x66a4U);
  }
  return uVar1;
}

