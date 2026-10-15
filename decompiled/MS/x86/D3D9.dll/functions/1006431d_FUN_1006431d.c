/*
 * FUN_1006431d at 1006431d
 * undefined __fastcall FUN_1006431d(int * param_1)
 * Address ranges: 1006431d-1006438e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1006431d(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*param_1 + 0x4e8);
  if (iVar1 != 0) {
    *(undefined1 *)(*param_1 + 0x4fb + iVar1) = 1;
    iVar1 = *param_1;
    if (*(char *)(*(int *)(iVar1 + 0xf4) + 0x148) != '\0') {
      if (*(int *)(iVar1 + 0x2f4) == 0) {
        uVar2 = FUN_100c2e34(iVar1,4,'\x01');
        *(uint *)(*param_1 + 0x2f4) = uVar2;
      }
      FUN_100c3be1((int *)*param_1,(int *)param_1[1],0x36);
    }
  }
  return;
}

