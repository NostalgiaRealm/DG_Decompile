/*
 * FUN_1002a1e6 at 1002a1e6
 * undefined4 __fastcall FUN_1002a1e6(undefined4 param_1, uint param_2, uint param_3, undefined4 param_4, undefined1 param_5, uint param_6, uint param_7)
 * Address ranges: 1002a1e6-1002a272
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_1002a1e6(HWND param_1,uint param_2,uint param_3,undefined4 param_4,undefined1 param_5,
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
  this = FUN_1000504c();
  this[0x3d] = 1;
  cVar3 = FUN_1000403e();
  if ((cVar3 != '\0') && (this[0x3c] != '\0')) {
    FUN_10005bb0(this,0);
  }
  piVar1 = (int *)(this + 0x34);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    cVar3 = FUN_1000522d((int)this);
    if ((cVar3 != '\0') && (*(int *)(this + 0x30) == 0)) {
      uVar4 = FUN_1000539d(this,local_8,param_2,param_3,param_4,0,param_5,param_6,param_7,local_10);
      goto LAB_1002a267;
    }
  }
  uVar4 = 0;
LAB_1002a267:
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  this[0x3d] = 0;
  return uVar4;
}

