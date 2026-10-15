/*
 * FUN_10024e6a at 10024e6a
 * uint __fastcall FUN_10024e6a(int param_1)
 * Address ranges: 10024e6a-10024ec5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10024e6a(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x11c) * 0x228;
  uVar4 = (*(uint *)(&DAT_1006c448 + iVar1) / *(uint *)(&DAT_1006c42c + iVar1)) *
          *(int *)(&DAT_1006c458 + iVar1);
  uVar2 = (*(uint *)(&DAT_1006c44c + iVar1) / *(uint *)(&DAT_1006c430 + iVar1)) *
          *(int *)(&DAT_1006c45c + iVar1);
  uVar3 = *(uint *)(DAT_1006c210 + 0x80e);
  if ((*(uint *)(DAT_1006c210 + 0x80e) == 0) && (uVar3 = uVar2, uVar4 < uVar2)) {
    uVar3 = uVar4;
  }
  uVar2 = 0x10;
  if (uVar3 < 0x11) {
    uVar2 = uVar3;
  }
  return uVar2;
}

