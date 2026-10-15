/*
 * FUN_10057ff1 at 10057ff1
 * undefined4 __fastcall FUN_10057ff1(int * param_1)
 * Address ranges: 10057ff1-1005807b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10057ff1(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_10057bee(&DAT_10062ef8);
  uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
  uVar2 = (uint)uVar7;
  uVar3 = FUN_1005807c(param_1,uVar2,uVar5);
  iVar6 = uVar3 * 0x38;
  if (uVar3 != param_1[2]) {
    iVar1 = *param_1;
    if ((*(uint *)(iVar6 + iVar1) == uVar2) && (*(uint *)(iVar6 + 4 + iVar1) == uVar5)) {
      uVar4 = FUN_10057b8d(&DAT_10062ef8,(uint *)(iVar1 + 8 + iVar6));
      if ((char)uVar4 != '\0') {
        FUN_10057c61(param_1,*(int **)(iVar6 + 0x30 + *param_1));
        FUN_1005824e(param_1,uVar3,uVar2,uVar5);
      }
      goto LAB_1005806f;
    }
  }
  FUN_100581be(param_1,uVar3,uVar2,uVar5);
LAB_1005806f:
  return *(undefined4 *)(iVar6 + 0x30 + *param_1);
}

