/*
 * FUN_1002b80d at 1002b80d
 * int __thiscall FUN_1002b80d(void * this, undefined4 param_1, int * param_2)
 * Address ranges: 1002b80d-1002b89b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002b80d(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = -0x7789fff6;
  if ((((*(int *)((int)this + 0x118) == 0) && ((*(uint *)((int)this + 0x1b8) & 0x2000) != 0)) &&
      ((*(uint *)((int)this + 0x1bc) & 0xfe00) != 0x200)) &&
     (iVar1 = -0x7fffbffb,
     ((byte)*(undefined4 *)(*(int *)((int)this + 4) + 200) & 1) ==
     ((byte)*(undefined4 *)(param_2[1] + 200) & 1))) {
    *(undefined4 *)((int)this + 0x114) = param_1;
    *(int **)((int)this + 0x118) = param_2;
    iVar1 = (**(code **)(*param_2 + 0x34))(&DAT_100623c0,(int)this + 0x11c,0);
    if (-1 < iVar1) {
      *(int **)((int)this + 0x118) = param_2;
    }
  }
  return iVar1;
}

