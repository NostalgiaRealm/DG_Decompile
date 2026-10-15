/*
 * FUN_1009e598 at 1009e598
 * undefined __fastcall FUN_1009e598(undefined4 * param_1)
 * Address ranges: 1009e598-1009e5ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009e598(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_8;
  
  LOCK();
  piVar1 = param_1 + 2;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (param_1[1] + iVar2 + -1 != 0) {
    return;
  }
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*(uint *)(param_1[4] + 0xdd0) >> 2) & 1);
  iVar2 = param_1[4];
  uVar4 = 0;
  uVar3 = *(uint *)(iVar2 + 0x6788);
  if (uVar3 != 0) {
    do {
      if (*(undefined4 **)(*(int *)(iVar2 + 0x6784) + uVar4 * 4) == param_1) {
        if (uVar4 != 0xffffffff) {
          uVar4 = uVar4 + 1;
          if (uVar4 < uVar3) {
            do {
              *(undefined4 *)(*(int *)(iVar2 + 0x6784) + -4 + uVar4 * 4) =
                   *(undefined4 *)(*(int *)(iVar2 + 0x6784) + uVar4 * 4);
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(uint *)(iVar2 + 0x6788));
          }
          *(int *)(iVar2 + 0x6788) = *(int *)(iVar2 + 0x6788) + -1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  FUN_1009e6a7((int)param_1);
  *param_1 = &PTR_FUN_100d7248;
  FUN_100cfd6c(param_1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

