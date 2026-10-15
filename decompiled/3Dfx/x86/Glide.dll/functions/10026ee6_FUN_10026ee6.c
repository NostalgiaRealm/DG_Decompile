/*
 * FUN_10026ee6 at 10026ee6
 * undefined __fastcall FUN_10026ee6(int param_1)
 * Address ranges: 10026ee6-10027014
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10026ee6(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3018) + 0x3188);
  if (*(char *)(param_1 + 0x3014) != '\0') {
    bVar2 = FUN_1003eeed(*(void **)(iVar1 + 0x1304),*(uint *)(param_1 + 0x3020),
                         (void *)(iVar1 + 0x1430),*(int *)(param_1 + 0x301c) << 2,
                         *(int *)(param_1 + 0x301c) * 5,(undefined4 *)(param_1 + 0x14));
    if (bVar2) {
      if (*(int *)(iVar1 + 4) == 0x10de) {
        FUN_1003d4be(*(void **)(iVar1 + 0x1304),*(uint *)(param_1 + 0x3020),0,1,0);
      }
      *(undefined1 *)(param_1 + 0x3014) = 0;
    }
  }
  if (*(char *)(param_1 + 0x3015) != '\0') {
    bVar2 = FUN_1003eeed(*(void **)(iVar1 + 0x1304),*(uint *)(param_1 + 0x3020),
                         (void *)(iVar1 + 0x1430),*(int *)(param_1 + 0x301c) * 2,
                         *(int *)(param_1 + 0x301c) * 3,(undefined4 *)(param_1 + 0x1014));
    if (bVar2) {
      if (*(int *)(iVar1 + 4) == 0x10de) {
        FUN_1003d4be(*(void **)(iVar1 + 0x1304),*(uint *)(param_1 + 0x3020),0,1,0);
      }
      *(undefined1 *)(param_1 + 0x3015) = 0;
    }
  }
  if (*(char *)(param_1 + 0x3016) != '\0') {
    bVar2 = FUN_1003eeed(*(void **)(iVar1 + 0x1304),*(uint *)(param_1 + 0x3020),
                         (void *)(iVar1 + 0x1430),*(int *)(param_1 + 0x301c) * 3,
                         *(int *)(param_1 + 0x301c) << 2,(undefined4 *)(param_1 + 0x2014));
    if (bVar2) {
      if (*(int *)(iVar1 + 4) == 0x10de) {
        FUN_1003d4be(*(void **)(iVar1 + 0x1304),*(uint *)(param_1 + 0x3020),0,1,0);
      }
      *(undefined1 *)(param_1 + 0x3016) = 0;
    }
  }
  return;
}

