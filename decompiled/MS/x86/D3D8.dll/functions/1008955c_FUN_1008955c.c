/*
 * FUN_1008955c at 1008955c
 * undefined1 __fastcall FUN_1008955c(void * param_1)
 * Address ranges: 1008955c-10089635
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1008955c(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_28;
  LPVOID local_24;
  undefined4 local_20;
  undefined4 local_1c;
  LPVOID local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 local_5;
  
  local_c = FUN_10089812(param_1,*(undefined4 **)((int)param_1 + 0x34),
                         *(uint *)((int)param_1 + 0x38));
  local_5 = local_c != -1;
  if ((bool)local_5) {
    iVar1 = *(int *)((int)param_1 + 0x50);
    uVar3 = 0;
    if (*(int *)(*(int *)((int)param_1 + 0x5c) + 8 + iVar1 * 0x10) != 0) {
      do {
        iVar1 = FUN_100ad5d0((byte *)(*(int *)(uVar3 * 0x1c +
                                              *(int *)(*(int *)((int)param_1 + 0x5c) + 4 +
                                                      iVar1 * 0x10)) + *(int *)((int)param_1 + 0x44)
                                     ),(byte *)(*(int *)((int)param_1 + 0x44) + local_c));
        if (iVar1 == 0) {
          *(int *)((int)param_1 + 0x4c) =
               (*(int *)((int)param_1 + 0x4c) - *(int *)((int)param_1 + 0x38)) + -1;
          break;
        }
        iVar1 = *(int *)((int)param_1 + 0x50);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(*(int *)((int)param_1 + 0x5c) + 8 + iVar1 * 0x10));
    }
    iVar1 = *(int *)((int)param_1 + 0x50) * 0x10;
    if (uVar3 == *(uint *)(iVar1 + 8 + *(int *)((int)param_1 + 0x5c))) {
      local_24 = (LPVOID)0x0;
      local_20 = 0;
      local_1c = 0;
      local_18 = (LPVOID)0x0;
      local_14 = 0;
      local_10 = 0;
      local_28 = local_c;
      uVar2 = FUN_10089b94((void *)(*(int *)((int)param_1 + 0x5c) + 4 + iVar1),&local_28);
      thunk_FUN_100ad48c(local_18);
      thunk_FUN_100ad48c(local_24);
      local_5 = (char)uVar2;
    }
    *(uint *)((int)param_1 + 0x54) = uVar3;
  }
  return local_5;
}

