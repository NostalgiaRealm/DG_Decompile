/*
 * FUN_100231af at 100231af
 * undefined4 __stdcall FUN_100231af(int param_1)
 * Address ranges: 100231af-10023236
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100231af(int param_1)

{
  undefined4 *this;
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_8;
  
  iVar5 = param_1 * 0x228;
  this = (undefined4 *)(&DAT_100ba938 + iVar5);
  thunk_FUN_100ad48c((LPVOID)*this);
  piVar2 = DAT_100ba2b0;
  *this = 0;
  *(undefined4 *)(&DAT_100ba93c + iVar5) = 0;
  *(undefined4 *)(&DAT_100ba940 + iVar5) = 0;
  uVar1 = (&DAT_100ba730)[param_1 * 0x8a];
  uVar3 = (**(code **)(*piVar2 + 0x48))(uVar1);
  uVar6 = 0;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      local_8 = (**(code **)(*DAT_100ba2b0 + 0x4c))(uVar1,uVar6);
      uVar4 = FUN_10003787(this,&local_8);
      if ((char)uVar4 == '\0') {
        thunk_FUN_100ad48c((LPVOID)*this);
        *this = 0;
        *(undefined4 *)(&DAT_100ba93c + iVar5) = 0;
        *(undefined4 *)(&DAT_100ba940 + iVar5) = 0;
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}

