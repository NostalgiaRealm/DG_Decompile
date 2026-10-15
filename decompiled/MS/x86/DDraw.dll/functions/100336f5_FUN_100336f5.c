/*
 * FUN_100336f5 at 100336f5
 * undefined1 __thiscall FUN_100336f5(void * this, int * param_1)
 * Address ranges: 100336f5-100337ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_100336f5(void *this,int *param_1)

{
  void *this_00;
  UINT UVar1;
  uint uVar2;
  tagPALETTEENTRY local_404 [256];
  
  this_00 = *(void **)((int)this + 0x108);
  if ((this_00 == (void *)0x0) &&
     (this_00 = (void *)FUN_10024537(*(int *)((int)this + 0xfc)), this_00 == (void *)0x0)) {
    FUN_10060d45((int *)local_404,0,0x400);
    uVar2 = 0;
    UVar1 = GetSystemPaletteEntries((HDC)0x0,0,0x100,local_404);
    if (UVar1 != 0x100) {
      FUN_10060d45(param_1,0,0x400);
      return 0;
    }
    do {
      param_1[uVar2] =
           ((local_404[uVar2].peRed | 0xffffff00) << 8 | (uint)local_404[uVar2].peGreen) << 8 |
           (uint)local_404[uVar2].peBlue;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
  }
  else {
    FUN_1002965b(this_00,param_1);
  }
  return 1;
}

