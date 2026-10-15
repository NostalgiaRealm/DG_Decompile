/*
 * FUN_100ce192 at 100ce192
 * int * __thiscall FUN_100ce192(void * this, int param_1, undefined4 param_2, short param_3)
 * Address ranges: 100ce192-100ce226
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_100ce192(void *this,int param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  
  FUN_100cfed0(this,0,0x120);
  FUN_100cff00((undefined4 *)((int)this + 0x20),(undefined4 *)PTR_LAB_100db050,DAT_100db054);
  FUN_100cff00((undefined4 *)((int)this + 0xa0),(undefined4 *)PTR_LAB_100db050,DAT_100db054);
  *(int *)((int)this + 0x10) = param_1;
  iVar1 = DAT_100db064;
  *(code **)(DAT_100db064 + 0xa0 + (int)this) = FUN_100cdda6;
  *(code **)(iVar1 + 0x20 + (int)this) = FUN_100cdda6;
  iVar1 = DAT_100db068;
  *(short *)(DAT_100db068 + 0xa0 + (int)this) = param_3 << 2;
  *(short *)(iVar1 + 0x20 + (int)this) = param_3 << 2;
  iVar1 = DAT_100db060;
  *(undefined4 *)(DAT_100db060 + 0xa0 + (int)this) = param_2;
  *(undefined4 *)(iVar1 + 0x20 + (int)this) = param_2;
  return this;
}

