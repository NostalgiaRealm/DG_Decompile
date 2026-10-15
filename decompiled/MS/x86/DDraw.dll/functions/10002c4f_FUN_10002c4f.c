/*
 * FUN_10002c4f at 10002c4f
 * bool __thiscall FUN_10002c4f(void * this, HDC param_1, undefined4 * param_2)
 * Address ranges: 10002c4f-10002cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10002c4f(void *this,HDC param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  bool bVar4;
  undefined4 uStack_8;
  
  iVar3 = (int)this * 0x228;
  bVar4 = false;
  if ((param_1 == *(HDC *)(&DAT_1006c48c + iVar3)) && (*(HDC *)(&DAT_1006c48c + iVar3) != (HDC)0x0))
  {
    uStack_8 = this;
    FUN_10001a9c((int)&uStack_8 + 3);
    piVar1 = (int *)(&DAT_1006c490 + iVar3);
    *piVar1 = *piVar1 + -1;
    bVar4 = *piVar1 == 0;
    if (bVar4) {
      iVar2 = *(int *)(&DAT_1006c488 + iVar3);
      SelectObject(param_1,*(HGDIOBJ *)(iVar2 + 0x50));
      *(undefined4 *)(iVar2 + 0x50) = 0;
      DeleteDC(param_1);
      *(undefined1 *)(iVar2 + 0x65) = 1;
      *(undefined4 *)(&DAT_1006c48c + iVar3) = 0;
    }
    lpCriticalSection = DAT_1006c254;
    *param_2 = 1;
    LeaveCriticalSection(lpCriticalSection);
  }
  return bVar4;
}

