/*
 * FUN_1002d55f at 1002d55f
 * undefined4 __fastcall FUN_1002d55f(undefined4 param_1, uint param_2, uint param_3, undefined4 param_4, undefined1 param_5, uint param_6, uint param_7)
 * Address ranges: 1002d55f-1002d5eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_1002d55f(HWND param_1,uint param_2,uint param_3,undefined4 param_4,undefined1 param_5,
            uint param_6,uint param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined *this;
  undefined4 uVar4;
  undefined1 local_10 [4];
  char *local_c;
  HWND local_8;
  
  local_10[0] = 0;
  local_c = "3DfxSpl3.dll";
  local_8 = param_1;
  this = FUN_10005411();
  this[0x3d] = 1;
  cVar3 = FUN_10004240();
  if ((cVar3 != '\0') && (this[0x3c] != '\0')) {
    FUN_10005fa1(this,0);
  }
  piVar1 = (int *)(this + 0x34);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    cVar3 = FUN_1000560f((int)this);
    if ((cVar3 != '\0') && (*(int *)(this + 0x30) == 0)) {
      uVar4 = FUN_1000577f(this,local_8,param_2,param_3,param_4,3,param_5,param_6,param_7,local_10);
      goto LAB_1002d5e0;
    }
  }
  uVar4 = 0;
LAB_1002d5e0:
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  this[0x3d] = 0;
  return uVar4;
}

