/*
 * FUN_100195cd at 100195cd
 * undefined4 __thiscall FUN_100195cd(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 100195cd-10019670
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_100195cd(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_1 < 6) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)((int)this + (param_1 + 0x3d) * 0x10);
    param_2[1] = *(undefined4 *)((int)this + param_1 * 0x10 + 0x3d4);
    param_2[2] = *(undefined4 *)((int)this + param_1 * 0x10 + 0x3d8);
    param_2[3] = *(undefined4 *)((int)this + param_1 * 0x10 + 0x3dc);
    uVar1 = 0;
  }
  return uVar1;
}

