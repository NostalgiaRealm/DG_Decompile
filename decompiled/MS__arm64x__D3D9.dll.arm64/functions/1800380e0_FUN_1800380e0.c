/*
 * FUN_1800380e0 at 1800380e0
 * undefined FUN_1800380e0(void)
 * Address ranges: 1800380e0-18003813f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800380e0(undefined8 *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  *param_1 = &PTR_FUN_18023bf00;
  param_1[8] = &PTR_DAT_18023bf68;
  if (param_1[9] == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar6 = 0;
      do {
        lVar4 = param_1[0xb];
        lVar5 = uVar6 * 0x30;
        if (*(longlong *)(lVar5 + lVar4 + 0x20) != 0) {
          do {
            uVar3 = (**(code **)(**(longlong **)(lVar4 + lVar5 + 0x20) + 0x40))();
            if (*(ulonglong *)(lVar4 + lVar5 + 0x28) <= uVar3) break;
            DataMemoryBarrier(2,2);
            Yield();
            lVar4 = param_1[0xb];
          } while (*(longlong *)(lVar5 + 0x20 + lVar4) != 0);
        }
        (**(code **)(**(longlong **)(lVar5 + param_1[0xb] + 0x10) + 0x10))();
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_1[0xf] != 0) {
    FUN_1800f0b40(param_1[9],*(undefined4 *)(param_1 + 6),param_1[0x10],param_1[0x11],param_1[3],
                  param_1[4]);
    puVar2 = (undefined8 *)FUN_1800381d4();
    return puVar2;
  }
  *param_1 = &PTR_FUN_18023bf10;
  param_1[8] = &PTR_D3DPERF_GetStatus_18023bf20;
  thunk_FUN_180102fc0(param_1[0xb]);
  param_1[8] = &PTR_D3DPERF_GetStatus_18023bf20;
  *param_1 = &PTR_FUN_18023bfe8;
  if ((param_2 & 1) != 0) {
    FUN_180102fc0(param_1,0x90);
  }
  return param_1;
}

