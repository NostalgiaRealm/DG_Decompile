/*
 * FUN_18018dcf8 at 18018dcf8
 * undefined FUN_18018dcf8(void)
 * Address ranges: 18018dcf8-18018de23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018dcf8(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,
                  uint **param_5)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint local_d0;
  undefined1 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  uint *local_b0 [16];
  
  if ((*(char *)(param_2 + 0x74) != '\0') && ((param_4 >> 0xd & 1) != 0)) {
    puVar5 = *(uint **)((-(longlong)param_5 & 7U) + (longlong)param_5);
    lVar1 = (-(longlong)param_5 & 7U) + (longlong)param_5;
    if ((*puVar5 >> 0x1e & 1) != 0) {
      local_cc = (undefined1)puVar5[1];
      local_d0 = FUN_180213760(param_2 + 0x20,4,0);
      local_b0[0] = &local_d0;
      uVar4 = -lVar1 - 8U & 7;
      uStack_b8 = 0xffffffffffffffff;
      local_c0 = 0xffffffffffffffff;
      puVar2 = *(uint **)(uVar4 + lVar1 + 8);
      uVar3 = 1;
      if (puVar2 != (uint *)0x0) {
        lVar1 = (uVar4 | 0x10) + lVar1;
        do {
          local_b0[uVar3] = puVar2;
          puVar2 = *(uint **)((-lVar1 & 7U) + lVar1);
          lVar1 = (-lVar1 & 7U | 8) + lVar1;
          uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (puVar2 != (uint *)0x0);
      }
      local_b0[uVar3] = (uint *)0x0;
      FUN_180214cb8(param_2 + 0x20,param_3,param_4,local_b0);
      local_cc = FUN_180213268(0xe4,local_cc);
      local_b0[1] = &local_d0;
      local_b0[2] = (uint *)0x0;
      param_5 = local_b0;
      param_4 = 0x36;
      local_b0[0] = puVar5;
    }
  }
  FUN_180214cb8(param_2 + 0x20,param_3,param_4,param_5);
  return;
}

