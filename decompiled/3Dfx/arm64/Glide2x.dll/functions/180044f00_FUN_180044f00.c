/*
 * FUN_180044f00 at 180044f00
 * undefined __cdecl FUN_180044f00(undefined8 * param_1)
 * Address ranges: 180044f00-180044ff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044f00(undefined8 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_180064e30;
  param_1[8] = &PTR_LAB_180064e98;
  if (param_1[9] == 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        lVar3 = param_1[0xb];
        lVar5 = uVar4 * 0x30;
        if (*(longlong *)(lVar5 + lVar3 + 0x20) != 0) {
          do {
            uVar2 = (**(code **)(**(longlong **)(lVar3 + lVar5 + 0x20) + 0x40))();
            if (*(ulonglong *)(lVar3 + lVar5 + 0x28) <= uVar2) break;
            DataMemoryBarrier(2,2);
            Yield();
            lVar3 = param_1[0xb];
          } while (*(longlong *)(lVar5 + 0x20 + lVar3) != 0);
        }
        (**(code **)(**(longlong **)(lVar5 + param_1[0xb] + 0x10) + 0x10))();
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_1[0xf] != 0) {
    FUN_180058d08(param_1[9],*(int *)(param_1 + 6),param_1[0x10],param_1[0x11],
                  (longlong *)param_1[3],param_1[4]);
  }
  FUN_180045408(param_1);
  return;
}

