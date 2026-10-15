/*
 * FUN_180010ce8 at 180010ce8
 * undefined FUN_180010ce8(void)
 * Address ranges: 180010ce8-180010def
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010ce8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int local_10 [4];
  
  lVar4 = *(longlong *)(param_1 + 0x358);
  uVar2 = 0;
  while (*(int *)(lVar4 + uVar2 * 4) != param_2) {
    uVar5 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar5;
    if (7 < uVar5) {
      if ((uVar5 == 8) && (uVar5 = *(uint *)(param_1 + 0x360), 8 < uVar5)) {
        uVar2 = 8;
        do {
          uVar1 = (uint)uVar2;
          if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar2 * 4) == param_2) {
            while (uVar3 = uVar1 + 1, uVar3 < uVar5) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x358) + (ulonglong)uVar1 * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x358) + (ulonglong)uVar3 * 4);
              uVar1 = uVar3;
              uVar5 = *(uint *)(param_1 + 0x360);
            }
            *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + -1;
            return;
          }
          uVar2 = (ulonglong)(uVar1 + 1);
        } while (uVar1 + 1 < uVar5);
      }
      return;
    }
  }
  local_10[0] = param_2;
  if (*(uint *)(param_1 + 0x360) < 9) {
    *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),uVar2,0);
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x360) - 1;
  *(uint *)(param_1 + 0x360) = uVar5;
  *(undefined4 *)(lVar4 + uVar2 * 4) = *(undefined4 *)(lVar4 + (ulonglong)uVar5 * 4);
  lVar4 = FUN_180007c48(param_1 + 0x318,local_10);
  if (lVar4 == 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0xc0))
            (*(longlong **)(param_1 + 0x28),uVar2 & 0xffffffff);
  return;
}

