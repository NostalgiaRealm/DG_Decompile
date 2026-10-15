/*
 * FUN_10093989 at 10093989
 * int __thiscall FUN_10093989(void * this, RECT * param_1, RECT * param_2, HWND param_3, int param_4)
 * Address ranges: 10093989-100939da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10093989(void *this,RECT *param_1,RECT *param_2,HWND param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = -0x7789f795;
  if (*(char *)((int)this + 0x2a4) != '\0') {
    iVar1 = 0;
    uVar2 = 0;
    do {
      if (*(uint *)((int)this + 0xd98) <= uVar2) {
        return iVar1;
      }
      iVar1 = *(int *)(*(int *)((int)this + 0xd94) + uVar2 * 4);
      iVar1 = FUN_1009d80c(-(uint)(iVar1 != 0) & iVar1 - 8U,param_1,param_2,param_3,param_4,0);
      uVar2 = uVar2 + 1;
    } while (-1 < iVar1);
  }
  return iVar1;
}

