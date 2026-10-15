/*
 * FUN_1003d640 at 1003d640
 * undefined1 __fastcall FUN_1003d640(void * param_1)
 * Address ranges: 1003d640-1003d6d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1003d640(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  int local_18 [5];
  
  uVar4 = 1;
  uVar3 = 0;
  if (*(int *)((int)param_1 + 0x38) != 0) {
    local_18[4] = FUN_1003d988(param_1,*(undefined4 **)((int)param_1 + 0x34),
                               *(uint *)((int)param_1 + 0x38));
    uVar4 = local_18[4] != -1;
    if ((bool)uVar4) {
      uVar3 = 1;
      if (1 < *(uint *)((int)param_1 + 0x60)) {
        do {
          iVar1 = FUN_10061253((byte *)(*(int *)(*(int *)((int)param_1 + 0x5c) + uVar3 * 0x10) +
                                       *(int *)((int)param_1 + 0x44)),
                               (byte *)(local_18[4] + *(int *)((int)param_1 + 0x44)));
          if (iVar1 == 0) {
            *(int *)((int)param_1 + 0x4c) =
                 (*(int *)((int)param_1 + 0x4c) - *(int *)((int)param_1 + 0x38)) + -1;
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)((int)param_1 + 0x60));
      }
      if (uVar3 == *(uint *)((int)param_1 + 0x60)) {
        local_18[1] = 0;
        local_18[2] = 0;
        local_18[3] = 0;
        local_18[0] = local_18[4];
        uVar2 = FUN_1003dc1a((void *)((int)param_1 + 0x5c),local_18);
        uVar4 = (undefined1)uVar2;
      }
    }
  }
  *(uint *)((int)param_1 + 0x50) = uVar3;
  return uVar4;
}

