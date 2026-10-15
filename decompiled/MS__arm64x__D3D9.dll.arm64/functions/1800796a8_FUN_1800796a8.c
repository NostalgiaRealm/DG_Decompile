/*
 * FUN_1800796a8 at 1800796a8
 * undefined FUN_1800796a8(void)
 * Address ranges: 1800796a8-1800797cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1800796a8(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,uint *param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint **ppuVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint local_e0;
  undefined1 local_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint *local_c0 [16];
  uint *local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = param_5;
  uStack_18 = param_6;
  local_10 = param_7;
  uStack_8 = param_8;
  if ((*(char *)(param_2 + 0x74) != '\0') && ((param_4 >> 0xd & 1) != 0)) {
    ppuVar1 = &local_20;
    if ((*param_5 >> 0x1e & 1) != 0) {
      local_dc = (undefined1)param_5[1];
      local_e0 = FUN_1800f42d0(param_2 + 0x20,4,0);
      local_c0[0] = &local_e0;
      uVar5 = -(longlong)ppuVar1 - 8U & 7;
      uStack_c8 = 0xffffffffffffffff;
      local_d0 = 0xffffffffffffffff;
      puVar3 = *(uint **)((longlong)ppuVar1 + uVar5 + 8);
      uVar4 = 1;
      if (puVar3 != (uint *)0x0) {
        lVar2 = (uVar5 | 0x10) + (longlong)ppuVar1;
        do {
          local_c0[uVar4] = puVar3;
          puVar3 = *(uint **)((-lVar2 & 7U) + lVar2);
          lVar2 = (-lVar2 & 7U | 8) + lVar2;
          uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (puVar3 != (uint *)0x0);
      }
      local_c0[uVar4] = (uint *)0x0;
      FUN_1800f5760(param_2 + 0x20,param_3,param_4,local_c0);
      local_dc = FUN_1800f5ea8(0xe4,local_dc);
      local_c0[1] = &local_e0;
      local_c0[2] = (uint *)0x0;
      ppuVar1 = local_c0;
      param_4 = 0x36;
      local_c0[0] = param_5;
      goto LAB_1800797b4;
    }
  }
  ppuVar1 = &local_20;
LAB_1800797b4:
  FUN_1800f5760(param_2 + 0x20,param_3,param_4,ppuVar1);
  return;
}

