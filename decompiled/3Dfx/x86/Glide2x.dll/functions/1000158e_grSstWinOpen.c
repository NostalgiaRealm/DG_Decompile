/*
 * grSstWinOpen at 1000158e
 * bool __stdcall grSstWinOpen(HWND param_1, uint param_2, uint param_3, undefined4 param_4, undefined1 param_5, uint param_6, uint param_7)
 * Address ranges: 1000158e-10001607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstWinOpen,28
 */

/* __stdcall grSstWinOpen,28 */

bool grSstWinOpen(HWND param_1,uint param_2,uint param_3,undefined4 param_4,undefined1 param_5,
                 uint param_6,uint param_7)

{
  int *piVar1;
  char cVar2;
  undefined *this;
  int iVar3;
  uint local_c;
  char *local_8;
  
                    /* 0x158e  80  _grSstWinOpen@28 */
  local_8 = "3DfxSpl2.dll";
  local_c = 0;
  this = FUN_10012760();
  this[0x3d] = 1;
  piVar1 = (int *)(this + 0x34);
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar3 == 0) {
    cVar2 = FUN_10012926((int)this);
    if ((cVar2 != '\0') && (*(int *)(this + 0x30) == 0)) {
      iVar3 = FUN_10012ad6(this,param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,
                           (undefined1 *)&local_c);
      goto LAB_100015f4;
    }
  }
  iVar3 = 0;
LAB_100015f4:
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  this[0x3d] = 0;
  return iVar3 != 0;
}

