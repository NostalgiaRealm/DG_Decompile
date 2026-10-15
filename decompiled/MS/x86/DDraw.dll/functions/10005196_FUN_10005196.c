/*
 * FUN_10005196 at 10005196
 * undefined __thiscall FUN_10005196(void * this, int param_1, int param_2)
 * Address ranges: 10005196-1000523b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005196(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int)this + 0x20);
  if ((*piVar3 != 0) && ((*(uint *)((int)this + 0x34) >> 3 & 1) == 0)) {
    thunk_FUN_10060be1(*(LPVOID *)((int)this + 0x24));
    thunk_FUN_10060be1(*(LPVOID *)((int)this + 0x28));
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
  uVar1 = FUN_100034ea(&param_2);
  if ((uVar1 != 0xffffffff) && (uVar1 < DAT_1006c2a4)) {
    while (uVar1 = uVar1 + 1, uVar1 < DAT_1006c2a4) {
      *(undefined4 *)(DAT_1006c2a0 + -4 + uVar1 * 4) = *(undefined4 *)(DAT_1006c2a0 + uVar1 * 4);
    }
    DAT_1006c2a4 = DAT_1006c2a4 - 1;
  }
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xffffffce;
  return;
}

