/*
 * FUN_1002586c at 1002586c
 * undefined __thiscall FUN_1002586c(void * this, int param_1, int param_2)
 * Address ranges: 1002586c-10025911
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002586c(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int)this + 0x20);
  if ((*piVar3 != 0) && ((*(uint *)((int)this + 0x34) >> 3 & 1) == 0)) {
    thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0x24));
    thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0x28));
    if (param_1 == 0) {
      VirtualFree((LPCVOID)(*piVar3 - param_2),0,0x8000);
    }
    else {
      UnmapViewOfFile((LPCVOID)(*piVar3 - param_2));
    }
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
  }
  param_2 = (int)this;
  uVar1 = FUN_10023cf4(&param_2);
  if ((uVar1 != 0xffffffff) && (uVar1 < DAT_100ba718)) {
    while (uVar1 = uVar1 + 1, uVar1 < DAT_100ba718) {
      *(undefined4 *)(DAT_100ba714 + -4 + uVar1 * 4) = *(undefined4 *)(DAT_100ba714 + uVar1 * 4);
    }
    DAT_100ba718 = DAT_100ba718 - 1;
  }
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xffffffce;
  return;
}

