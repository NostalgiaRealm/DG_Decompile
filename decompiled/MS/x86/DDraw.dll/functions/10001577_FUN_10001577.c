/*
 * FUN_10001577 at 10001577
 * undefined4 __fastcall FUN_10001577(uint param_1)
 * Address ranges: 10001577-1000161d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10001577(uint param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = FUN_1005d63e(param_1,(byte *)"SetCursor",1,param_1);
  *(int *)(param_1 + 0x2c) = iVar1;
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_1005d63e(extraout_ECX,(byte *)"DefWindowProcA",4,param_1);
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_1005d63e(extraout_ECX_00,(byte *)"DefWindowProcW",4,param_1);
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 != 0) {
        this = (void *)(*(int *)(param_1 + 4) + 0x60);
        iVar2 = FUN_1005d915(this,*(int *)(param_1 + 0x2c));
        *(int *)(param_1 + 0x50) = iVar2;
        iVar2 = FUN_1005d915(this,*(int *)(param_1 + 0x30));
        *(int *)(param_1 + 0x54) = iVar2;
        iVar1 = FUN_1005d915(this,iVar1);
        *(int *)(param_1 + 0x58) = iVar1;
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      FUN_1005d805((void *)(*(int *)(param_1 + 4) + 0x60),*(int *)(param_1 + 0x30),param_1);
    }
    uVar3 = FUN_1005d805((void *)(*(int *)(param_1 + 4) + 0x60),*(int *)(param_1 + 0x2c),param_1);
  }
  return uVar3 & 0xffffff00;
}

