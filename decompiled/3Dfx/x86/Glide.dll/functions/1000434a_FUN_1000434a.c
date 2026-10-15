/*
 * FUN_1000434a at 1000434a
 * bool __fastcall FUN_1000434a(undefined4 param_1, uint param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5, int param_6)
 * Address ranges: 1000434a-100043ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall
FUN_1000434a(uint param_1,uint param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5,
            int param_6)

{
  int *piVar1;
  char cVar2;
  undefined *this;
  int iVar3;
  undefined1 local_10 [4];
  char *local_c;
  uint local_8;
  
  local_10[0] = 1;
  local_c = "3DfxSpl.dll";
  local_8 = param_1;
  this = FUN_10012ab2();
  this[0x3d] = 1;
  piVar1 = (int *)(this + 0x34);
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar3 == 0) {
    cVar2 = FUN_10012c78((int)this);
    if ((cVar2 != '\0') && (*(int *)(this + 0x30) == 0)) {
      iVar3 = FUN_10012e28(this,0,local_8,param_2,param_3,0,param_4,param_6,0,local_10);
      goto LAB_100043b1;
    }
  }
  iVar3 = 0;
LAB_100043b1:
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  this[0x3d] = 0;
  if (iVar3 != 0) {
    FUN_10050561(&DAT_10059764,0,0x30);
    DAT_1005978c = 1;
    DAT_10059788 = 1;
  }
  return iVar3 != 0;
}

