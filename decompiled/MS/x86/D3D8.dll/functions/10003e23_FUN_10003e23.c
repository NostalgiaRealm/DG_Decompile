/*
 * FUN_10003e23 at 10003e23
 * int __thiscall FUN_10003e23(void * this, int param_1, int * param_2, char param_3, int * param_4)
 * Address ranges: 10003e23-10003e7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10003e23(void *this,int param_1,int *param_2,char param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_10002c4b(*(void **)((int)this + 0xacc),param_1,*(int *)((int)this + 0xb04),
                       *(HWND *)((int)this + 0xb08),param_2,param_4);
  if (-1 < iVar2) {
    if ((*(char *)((int)param_4 + 0x6d) == '\0' && param_3 == '\0') &&
       ((&DAT_100ba1a4)[param_1 * 8] != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = -0x7789f796;
    }
  }
  return iVar2;
}

