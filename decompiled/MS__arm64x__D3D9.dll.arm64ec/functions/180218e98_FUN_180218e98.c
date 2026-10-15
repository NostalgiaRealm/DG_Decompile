/*
 * FUN_180218e98 at 180218e98
 * undefined FUN_180218e98(void)
 * Address ranges: 180218e98-180218f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180218e98(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  lVar5 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      if (*(longlong *)(param_2 + 0xda0 + uVar4 * 8) != 0) {
        FUN_180206a20(param_1);
        *(undefined8 *)(param_2 + 0xda0 + uVar4 * 8) = 0;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 0x28));
  }
  iVar2 = *(int *)(param_2 + 0xdb0);
  if (iVar2 != -1) {
    lVar3 = *(longlong *)(lVar5 + 0x2230);
    thunk_FUN_1802236f8(lVar3 + 0x28);
    FUN_18020c678(lVar3,iVar2,2);
    thunk_FUN_18022370c(lVar3 + 0x28);
  }
  iVar2 = *(int *)(param_2 + 0xdb4);
  if (iVar2 != -1) {
    lVar5 = *(longlong *)(lVar5 + 0x2238);
    thunk_FUN_1802236f8(lVar5 + 0x28);
    FUN_18020c678(lVar5,iVar2,2);
    thunk_FUN_18022370c(lVar5 + 0x28);
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

