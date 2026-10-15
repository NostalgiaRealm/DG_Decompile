/*
 * FUN_10048078 at 10048078
 * undefined __fastcall FUN_10048078(void * param_1)
 * Address ranges: 10048078-10048133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10048078(void *param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x44) + 0xc);
  if ((iVar4 != 0) && (*(char *)(iVar4 + 0x1efc) != '\0')) {
    uVar5 = *(uint *)(iVar4 + 0xdc);
    uVar3 = 0;
    if (uVar5 != 0) {
      do {
        if (param_1 == *(void **)(*(int *)(iVar4 + 0xd8) + uVar3 * 4)) {
          if (uVar3 < uVar5) {
            while (uVar3 = uVar3 + 1, uVar3 < uVar5) {
              *(undefined4 *)(*(int *)(iVar4 + 0xd8) + -4 + uVar3 * 4) =
                   *(undefined4 *)(*(int *)(iVar4 + 0xd8) + uVar3 * 4);
              uVar5 = *(uint *)(iVar4 + 0xdc);
            }
            *(uint *)(iVar4 + 0xdc) = uVar5 - 1;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
  }
  FUN_10047faa((int)param_1);
  uVar5 = 0;
  do {
    iVar4 = uVar5 * 0x1c;
    puVar1 = *(undefined4 **)((int)param_1 + iVar4 + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_10047f4e((int)param_1 + iVar4 + 0xc,puVar1);
      *(undefined4 *)((int)param_1 + iVar4 + 0x24) = 0;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  FUN_1004765e(param_1,1);
  LeaveCriticalSection(DAT_1006bbd0);
  return;
}

