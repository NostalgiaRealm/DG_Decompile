/*
 * FUN_10033228 at 10033228
 * undefined __fastcall FUN_10033228(void * param_1)
 * Address ranges: 10033228-10033298
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10033228(void *param_1)

{
  int iVar1;
  void *this;
  
  this = param_1;
  while( true ) {
    if (this == (void *)0x0) {
      return;
    }
    iVar1 = *(int *)(*(int *)((int)this + 4) + 0x94);
    if (iVar1 == 0) {
      FUN_10032861(this);
    }
    else {
      FUN_10032e6e(this,iVar1);
    }
    *(undefined1 *)((int)this + 8) = 1;
    if (((*(uint *)((int)param_1 + 0x1b8) & 0x200) != 0) &&
       (*(int *)((int)param_1 + 4) ==
        *(int *)(&DAT_1006c484 + *(int *)(*(int *)((int)param_1 + 0xfc) + 0x11c) * 0x228))) {
      *(int *)(&DAT_1006c484 + *(int *)(*(int *)((int)param_1 + 0xfc) + 0x11c) * 0x228) = 0;
    }
    if ((*(byte *)((int)this + 0x1b8) & 8) == 0) break;
    this = *(void **)((int)this + 0x110);
  }
  return;
}

