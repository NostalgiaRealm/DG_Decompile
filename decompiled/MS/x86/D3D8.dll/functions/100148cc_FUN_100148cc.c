/*
 * FUN_100148cc at 100148cc
 * undefined4 __thiscall FUN_100148cc(void * this, int * param_1)
 * Address ranges: 100148cc-1001498a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_100148cc(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort in_FPUControlWord;
  uint local_c;
  uint *local_8;
  
  uVar2 = 0x8876086c;
  if ((param_1 != (int *)0x0) && (*(char *)((int)this + 0x220) != '\0')) {
    local_8 = &local_c;
    local_c = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_c = (uint)in_FPUControlWord;
    }
    *param_1 = *(int *)((int)this + 0x21c) + 1;
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x210) + *(int *)((int)this + 0x21c) * 4) + 4) = 0
    ;
    iVar1 = *(int *)(*(int *)((int)this + 0x210) + *(int *)((int)this + 0x21c) * 4);
    (**(code **)(**(int **)((int)this + 0x14) + 0x78))(iVar1,*(undefined4 *)(iVar1 + 4));
    *(undefined1 *)((int)this + 0x220) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

