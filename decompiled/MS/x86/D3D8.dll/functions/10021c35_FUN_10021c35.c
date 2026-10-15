/*
 * FUN_10021c35 at 10021c35
 * undefined4 __fastcall FUN_10021c35(uint param_1)
 * Address ranges: 10021c35-10021d8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10021c35(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  void *this;
  
  iVar1 = FUN_100ab538(param_1,(byte *)"GetDC",1,param_1);
  *(int *)(param_1 + 0x14) = iVar1;
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_100ab538(extraout_ECX,(byte *)"GetDCEx",3,param_1);
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_100ab538(extraout_ECX_00,(byte *)"GetWindowDC",1,param_1);
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 != 0) {
        iVar1 = FUN_100ab538(extraout_ECX_01,(byte *)"ReleaseDC",2,param_1);
        *(int *)(param_1 + 0x20) = iVar1;
        if (iVar1 != 0) {
          iVar1 = FUN_100ab538(extraout_ECX_02,(byte *)"BeginPaint",2,param_1);
          *(int *)(param_1 + 0x24) = iVar1;
          if (iVar1 != 0) {
            iVar1 = FUN_100ab538(extraout_ECX_03,(byte *)"EndPaint",2,param_1);
            this = (void *)(*(int *)(param_1 + 4) + 0x60);
            *(int *)(param_1 + 0x28) = iVar1;
            if (iVar1 != 0) {
              iVar2 = FUN_100ab80f(this,*(int *)(param_1 + 0x14));
              *(int *)(param_1 + 0x38) = iVar2;
              iVar2 = FUN_100ab80f(this,*(int *)(param_1 + 0x18));
              *(int *)(param_1 + 0x3c) = iVar2;
              iVar2 = FUN_100ab80f(this,*(int *)(param_1 + 0x1c));
              *(int *)(param_1 + 0x40) = iVar2;
              iVar2 = FUN_100ab80f(this,*(int *)(param_1 + 0x20));
              *(int *)(param_1 + 0x44) = iVar2;
              iVar2 = FUN_100ab80f(this,*(int *)(param_1 + 0x24));
              *(int *)(param_1 + 0x48) = iVar2;
              iVar1 = FUN_100ab80f(this,iVar1);
              *(int *)(param_1 + 0x4c) = iVar1;
              return CONCAT31((int3)((uint)iVar1 >> 8),1);
            }
            FUN_100ab6ff(this,*(int *)(param_1 + 0x24),param_1);
          }
          FUN_100ab6ff((void *)(*(int *)(param_1 + 4) + 0x60),*(int *)(param_1 + 0x20),param_1);
        }
        FUN_100ab6ff((void *)(*(int *)(param_1 + 4) + 0x60),*(int *)(param_1 + 0x1c),param_1);
      }
      FUN_100ab6ff((void *)(*(int *)(param_1 + 4) + 0x60),*(int *)(param_1 + 0x18),param_1);
    }
    uVar3 = FUN_100ab6ff((void *)(*(int *)(param_1 + 4) + 0x60),*(int *)(param_1 + 0x14),param_1);
  }
  return uVar3 & 0xffffff00;
}

