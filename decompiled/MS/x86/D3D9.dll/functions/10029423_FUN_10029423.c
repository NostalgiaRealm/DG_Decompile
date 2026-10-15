/*
 * FUN_10029423 at 10029423
 * undefined4 __fastcall FUN_10029423(uint param_1)
 * Address ranges: 10029423-100294c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10029423(uint param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = FUN_100cde07(param_1,(byte *)"SetCursor",1,param_1);
  *(int *)(param_1 + 0x2c) = iVar1;
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_100cde07(extraout_ECX,(byte *)"DefWindowProcA",4,param_1);
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_100cde07(extraout_ECX_00,(byte *)"DefWindowProcW",4,param_1);
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 != 0) {
        this = (void *)(*(int *)(param_1 + 4) + 0x60);
        iVar2 = FUN_100ce0de(this,*(int *)(param_1 + 0x2c));
        *(int *)(param_1 + 0x50) = iVar2;
        iVar2 = FUN_100ce0de(this,*(int *)(param_1 + 0x30));
        *(int *)(param_1 + 0x54) = iVar2;
        iVar1 = FUN_100ce0de(this,iVar1);
        *(int *)(param_1 + 0x58) = iVar1;
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      FUN_100cdfce((void *)(*(int *)(param_1 + 4) + 0x60),*(int *)(param_1 + 0x30),param_1);
    }
    uVar3 = FUN_100cdfce((void *)(*(int *)(param_1 + 4) + 0x60),*(int *)(param_1 + 0x2c),param_1);
  }
  return uVar3 & 0xffffff00;
}

