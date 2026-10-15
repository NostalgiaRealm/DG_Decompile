/*
 * FUN_100ab8c3 at 100ab8c3
 * int * __thiscall FUN_100ab8c3(void * this, int param_1, undefined4 param_2, short param_3)
 * Address ranges: 100ab8c3-100ab957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_100ab8c3(void *this,int param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  
  FUN_100ada8e(this,0,0x120);
  FUN_100adac0((undefined4 *)((int)this + 0x20),(undefined4 *)PTR_LAB_100b7070,DAT_100b7074);
  FUN_100adac0((undefined4 *)((int)this + 0xa0),(undefined4 *)PTR_LAB_100b7070,DAT_100b7074);
  *(int *)((int)this + 0x10) = param_1;
  iVar1 = DAT_100b7084;
  *(code **)(DAT_100b7084 + 0xa0 + (int)this) = FUN_100ab4d7;
  *(code **)(iVar1 + 0x20 + (int)this) = FUN_100ab4d7;
  iVar1 = DAT_100b7088;
  *(short *)(DAT_100b7088 + 0xa0 + (int)this) = param_3 << 2;
  *(short *)(iVar1 + 0x20 + (int)this) = param_3 << 2;
  iVar1 = DAT_100b7080;
  *(undefined4 *)(DAT_100b7080 + 0xa0 + (int)this) = param_2;
  *(undefined4 *)(iVar1 + 0x20 + (int)this) = param_2;
  return this;
}

