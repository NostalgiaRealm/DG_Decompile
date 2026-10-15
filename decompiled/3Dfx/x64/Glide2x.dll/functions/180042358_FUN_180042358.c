/*
 * FUN_180042358 at 180042358
 * undefined __fastcall FUN_180042358(undefined8 * param_1)
 * Address ranges: 180042358-18004241d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042358(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *param_1 = &PTR_FUN_180063e18;
  param_1[8] = &PTR_LAB_180063e80;
  if (param_1[9] == 0) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        lVar1 = param_1[0xb];
        lVar2 = *(longlong *)(lVar1 + 0x20 + uVar5 * 0x30);
        while ((lVar2 != 0 &&
               (uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x20 + uVar5 * 0x30) + 0x40))(),
               uVar3 < *(ulonglong *)(lVar1 + 0x28 + uVar5 * 0x30)))) {
          lVar1 = param_1[0xb];
          lVar2 = *(longlong *)(lVar1 + 0x20 + uVar5 * 0x30);
        }
        (**(code **)(**(longlong **)(param_1[0xb] + 0x10 + uVar5 * 0x30) + 0x10))();
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_1[0xf] != 0) {
    FUN_180056eb8(param_1[9],*(int *)(param_1 + 6),param_1[0x10],param_1[0x11],
                  (longlong *)param_1[3],param_1[4]);
  }
  FUN_180042534(param_1);
  return;
}

