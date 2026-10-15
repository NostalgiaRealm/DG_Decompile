/*
 * FUN_10032a47 at 10032a47
 * undefined4 __thiscall FUN_10032a47(void * this, int param_1)
 * Address ranges: 10032a47-10032b5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10032a47(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)((int)this + 4);
  GdiFlush();
  *(undefined1 *)(param_1 + 0x2d) = 1;
  if (*(int *)(param_1 + 0x1c) != *(int *)(iVar2 + 0x20)) {
    FUN_10005a37(*(int *)((int)this + 4) + 0x4c);
    *(undefined1 *)(*(int *)((int)this + 4) + 0xae) = 0;
    if ((*(uint *)((int)this + 0x154) >> 0xb & 1) == 0) {
      iVar3 = *(int *)((int)this + 4);
      *(undefined4 *)(iVar3 + 0x9c) = 0;
      *(undefined4 *)(iVar3 + 0xa0) = 0;
    }
  }
  uVar4 = 0x80004005;
  if ((*(byte *)(*(int *)((int)this + 4) + 200) & 0x80) == 0) {
    iVar3 = FUN_10032501(this,(RECT *)0x0);
    if (-1 < iVar3) {
      SelectObject(*(HDC *)(param_1 + 0x14),*(HGDIOBJ *)(param_1 + 0x18));
      DeleteDC(*(HDC *)(param_1 + 0x14));
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(byte *)(param_1 + 0x2d) =
           *(byte *)(param_1 + 0x2d) & ~(byte)(*(uint *)(iVar2 + 0x34) >> 2) & 1;
      if ((*(uint *)(iVar2 + 0x34) >> 2 & 1) != 0) {
        *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) & 0xfffffffd;
      }
      this_00 = *(void **)((int)this + 4);
      if ((*(char *)((int)this_00 + 0xad) != '\0') && (*(int *)((int)this_00 + 0x9c) != 0)) {
        FUN_1000523c(this_00,0,0);
      }
    }
  }
  else {
    FUN_10005a37(*(int *)((int)this + 4) + 0x4c);
    FUN_10032800((int)this);
    SelectObject(*(HDC *)(param_1 + 0x14),*(HGDIOBJ *)(param_1 + 0x18));
    DeleteDC(*(HDC *)(param_1 + 0x14));
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    puVar1 = (uint *)(*(int *)((int)this + 4) + 200);
    *puVar1 = *puVar1 & 0xffffff7f;
  }
  return uVar4;
}

