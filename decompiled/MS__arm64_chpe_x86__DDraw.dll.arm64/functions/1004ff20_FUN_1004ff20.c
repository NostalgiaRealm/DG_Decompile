/*
 * FUN_1004ff20 at 1004ff20
 * undefined FUN_1004ff20(void)
 * Address ranges: 1004ff20-1005001f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004ff20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte abStack_410 [1024];
  
  iVar4 = *(int *)(param_1 + 0x108);
  if ((iVar4 == 0) &&
     ((iVar4 = *(int *)(*(int *)(param_1 + 0xfc) + 0xf4), iVar4 == 0 ||
      (iVar4 = *(int *)(iVar4 + 0x108), iVar4 == 0)))) {
    FUN_100917d0(abStack_410,0,0x400);
    iVar4 = (*(code *)PTR_FUN_100ba048)(0,0,0x100,abStack_410);
    if (iVar4 != 0x100) {
      FUN_100917d0(param_2,0,0x400);
      return 0;
    }
    uVar5 = 0;
    do {
      iVar4 = uVar5 * 4;
      iVar1 = uVar5 * 4;
      iVar2 = uVar5 * 4;
      iVar3 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + iVar3) =
           (uint)abStack_410[iVar2 + 2] |
           ((uint)abStack_410[iVar1 + 1] | (abStack_410[iVar4] | 0xff00) << 8) << 8;
    } while (uVar5 < 0x100);
  }
  else {
    FUN_10041540(iVar4,param_2);
  }
  return 1;
}

