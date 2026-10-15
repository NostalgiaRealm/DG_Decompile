/*
 * FUN_100234c1 at 100234c1
 * bool __thiscall FUN_100234c1(void * this, HDC param_1, undefined4 * param_2)
 * Address ranges: 100234c1-10023531
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100234c1(void *this,HDC param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uStack_8;
  
  iVar3 = (int)this * 0x228;
  bVar4 = false;
  if ((param_1 == *(HDC *)(&DAT_100ba8fc + iVar3)) && (*(HDC *)(&DAT_100ba8fc + iVar3) != (HDC)0x0))
  {
    uStack_8 = this;
    FUN_10022270((undefined1 *)((int)&uStack_8 + 3));
    piVar1 = (int *)(&DAT_100ba900 + iVar3);
    *piVar1 = *piVar1 + -1;
    bVar4 = *piVar1 == 0;
    if (bVar4) {
      iVar2 = *(int *)(&DAT_100ba8f8 + iVar3);
      SelectObject(param_1,*(HGDIOBJ *)(iVar2 + 0x50));
      *(undefined4 *)(iVar2 + 0x50) = 0;
      DeleteDC(param_1);
      *(undefined1 *)(iVar2 + 0x65) = 1;
      *(undefined4 *)(&DAT_100ba8fc + iVar3) = 0;
    }
    *param_2 = 1;
    FUN_100222d0((char *)((int)&uStack_8 + 3));
  }
  return bVar4;
}

