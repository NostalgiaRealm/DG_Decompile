/*
 * FUN_10052602 at 10052602
 * undefined4 __fastcall FUN_10052602(int param_1)
 * Address ranges: 10052602-10052700
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10052645) */

undefined4 __fastcall FUN_10052602(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  *(uint *)(param_1 + 0x930) = (*(int *)(param_1 + 0x930) + 1U) % *(uint *)(param_1 + 0x924);
  uVar4 = *(undefined4 *)(param_1 + 0x6a0 + *(int *)(param_1 + 0x92c) * 8);
  uVar1 = *(undefined4 *)(param_1 + 0x6a4 + *(int *)(param_1 + 0x92c) * 8);
  piVar2 = *(int **)(*(int *)(param_1 + 0x8e0) + 0xc);
  uVar5 = (**(code **)(*piVar2 + 0x20))(piVar2);
  if (uVar5 < CONCAT44(uVar1,uVar4)) {
    iVar3 = *(int *)(param_1 + 0x930);
    if (iVar3 == *(int *)(param_1 + 0x92c)) {
      *(uint *)(param_1 + 0x92c) = (*(int *)(param_1 + 0x92c) + 1U) % *(uint *)(param_1 + 0x924);
    }
    FUN_1004dc27(*(void **)(param_1 + 0x8e0),*(uint *)(param_1 + 0x6a0 + iVar3 * 8),
                 *(uint *)(param_1 + 0x6a4 + iVar3 * 8));
    uVar4 = *(undefined4 *)(param_1 + 0x63c + *(int *)(param_1 + 0x930) * 4);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x63c + *(int *)(param_1 + 0x92c) * 4);
    *(undefined4 *)(param_1 + 0x63c + *(int *)(param_1 + 0x92c) * 4) =
         *(undefined4 *)(param_1 + 0x63c + *(int *)(param_1 + 0x930) * 4);
    *(undefined4 *)(param_1 + 0x63c + *(int *)(param_1 + 0x930) * 4) = uVar4;
    iVar3 = *(int *)(param_1 + 0x92c);
    uVar1 = *(undefined4 *)(param_1 + 0x6a4 + *(int *)(param_1 + 0x930) * 8);
    *(undefined4 *)(param_1 + 0x6a0 + iVar3 * 8) =
         *(undefined4 *)(param_1 + 0x6a0 + *(int *)(param_1 + 0x930) * 8);
    *(undefined4 *)(param_1 + 0x6a4 + iVar3 * 8) = uVar1;
    *(uint *)(param_1 + 0x92c) = (*(int *)(param_1 + 0x92c) + 1U) % *(uint *)(param_1 + 0x924);
  }
  return uVar4;
}

