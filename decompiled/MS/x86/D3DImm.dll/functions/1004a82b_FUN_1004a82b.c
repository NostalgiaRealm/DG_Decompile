/*
 * FUN_1004a82b at 1004a82b
 * undefined __fastcall FUN_1004a82b(undefined4 * param_1)
 * Address ranges: 1004a82b-1004a8d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004a82b(undefined4 *param_1)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  uint uVar4;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  iVar1 = *(int *)(param_1[0x12] + 0xc);
  if (iVar1 != 0) {
    uVar4 = *(uint *)(iVar1 + 0xb8);
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        if (param_1 == *(undefined4 **)(*(int *)(iVar1 + 0xb4) + uVar3 * 4)) {
          if (uVar3 < uVar4) {
            while (uVar3 = uVar3 + 1, uVar3 < uVar4) {
              *(undefined4 *)(*(int *)(iVar1 + 0xb4) + -4 + uVar3 * 4) =
                   *(undefined4 *)(*(int *)(iVar1 + 0xb4) + uVar3 * 4);
              uVar4 = *(uint *)(iVar1 + 0xb8);
            }
            *(uint *)(iVar1 + 0xb8) = uVar4 - 1;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
  }
  uVar4 = 0;
  do {
    if (param_1[uVar4 * 7 + 9] != 0) {
      param_1[uVar4 * 7 + 9] = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  *param_1 = &PTR_FUN_1005f568;
  FUN_1005c76c(param_1);
  LeaveCriticalSection(DAT_1006bbd0);
  return;
}

