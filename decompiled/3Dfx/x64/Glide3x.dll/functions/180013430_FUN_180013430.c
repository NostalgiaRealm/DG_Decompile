/*
 * FUN_180013430 at 180013430
 * undefined4 __fastcall FUN_180013430(longlong param_1)
 * Address ranges: 180013430-1800134e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180013430(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar1 + 8);
  if (*(int *)(lVar2 + 0xeb) == 1) {
    iVar3 = *(int *)(lVar1 + 0x2d04);
  }
  else {
    if (*(int *)(lVar2 + 0xeb) != 2) {
      return 0;
    }
    iVar3 = *(int *)(lVar2 + 0xe7);
  }
  if (iVar3 == 1) {
    uVar6 = 2;
  }
  else {
    if (iVar3 != 2) {
      return 0;
    }
    uVar6 = 4;
  }
  uVar4 = *(uint *)(lVar2 + 0xef);
  if (*(uint *)(lVar2 + 0xef) == 0) {
    uVar5 = *(uint *)(lVar1 + 0xb0) / *(uint *)(lVar1 + 0xa8);
    uVar4 = *(uint *)(lVar1 + 0xb4) / *(uint *)(lVar1 + 0xac);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (uVar5 < uVar4) {
      uVar4 = uVar5;
    }
  }
  if (*(uint *)(lVar1 + 0x2d40) != uVar4) {
    *(uint *)(lVar1 + 0x2d40) = uVar4;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x32f0) = 1;
  }
  return uVar6;
}

