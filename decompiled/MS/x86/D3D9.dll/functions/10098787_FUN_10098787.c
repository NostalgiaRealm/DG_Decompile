/*
 * FUN_10098787 at 10098787
 * undefined __thiscall FUN_10098787(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 10098787-1009887e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10098787(void *this,undefined4 param_1,undefined4 param_2)

{
  ushort in_FPUControlWord;
  undefined4 in_XMM0_Da;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  FUN_10003ea8(this,param_1,param_2);
  FUN_10091d72(this);
  FUN_10095e97(this,0,0);
  FUN_100968e7(this,0,0);
  FUN_10097411((int)this + 0x66b4,0);
  if (*(int *)((int)this + 0xdc8) == 1) {
    if ((*(byte *)((int)this + 0xdd0) & 0x20) == 0) goto LAB_10098824;
  }
  else if (*(int *)((int)this + 0xdc8) != 3) goto LAB_10098824;
  *(undefined4 *)((int)this + 0xc2d4) = 1;
LAB_10098824:
  FUN_10092113((int)this);
  FUN_10017abe();
  *(undefined4 *)((int)this + 0xc2d0) = in_XMM0_Da;
  (**(code **)(**(int **)((int)this + 0x14) + 0x9c))
            (in_XMM0_Da,*(int *)(*(int *)((int)this + 0xc) + 0x94f) != 0);
  return;
}

