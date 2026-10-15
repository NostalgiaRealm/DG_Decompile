/*
 * FUN_1009a69c at 1009a69c
 * int __thiscall FUN_1009a69c(void * this, uint param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1009a69c-1009a703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1009a69c(void *this,uint param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = -0x7789f794;
  if (param_1 < *(uint *)((int)this + 0xd98)) {
    iVar1 = FUN_10013af7(*(void **)(*(int *)((int)this + 0xd94) + param_1 * 4),&local_14);
    if (-1 < iVar1) {
      *(undefined4 *)(param_2 + 4) = local_14;
      *(undefined4 *)(param_2 + 8) = local_10;
      *(undefined4 *)(param_2 + 0xc) = local_c;
      *(undefined4 *)(param_2 + 0x10) = local_8;
      *(undefined4 *)((int)this + 0xde0) = local_8;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
      }
    }
  }
  return iVar1;
}

