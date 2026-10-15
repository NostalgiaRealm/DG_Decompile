/*
 * FUN_180088378 at 180088378
 * undefined __fastcall FUN_180088378(undefined8 param_1, longlong param_2, longlong * param_3, uint param_4, uint * param_5, uint * param_6)
 * Address ranges: 180088378-180088491
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180088378(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4,uint *param_5,
                  uint *param_6)

{
  uint uVar1;
  uint *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint **ppuVar7;
  uint local_d8;
  byte local_d4;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint *local_b8 [17];
  
  puVar2 = param_5;
  ppuVar7 = &param_5;
  if (((*(char *)(param_2 + 0x74) != '\0') && ((param_4 >> 0xd & 1) != 0)) &&
     ((*param_5 & 0x40000000) != 0)) {
    uVar1 = param_5[1];
    local_d8 = FUN_1800ec8c0(param_2 + 0x20,4,'\0');
    uVar4 = 1;
    local_c8 = 0xffffffff;
    local_c4 = 0xffffffff;
    local_c0 = 0xffffffff;
    local_bc = 0xffffffff;
    local_b8[0] = &local_d8;
    if (param_6 != (uint *)0x0) {
      plVar3 = (longlong *)&stack0x00000038;
      uVar5 = uVar4;
      puVar6 = param_6;
      do {
        uVar4 = (ulonglong)((int)uVar5 + 1);
        local_b8[uVar5] = puVar6;
        puVar6 = (uint *)*plVar3;
        plVar3 = plVar3 + 1;
        uVar5 = uVar4;
      } while (puVar6 != (uint *)0x0);
    }
    local_b8[uVar4] = (uint *)0x0;
    local_d4 = (byte)uVar1;
    FUN_1800edc00((uint *)(param_2 + 0x20),param_3,param_4,(uint *)local_b8);
    local_d4 = FUN_1800ee208(0xe4,local_d4);
    ppuVar7 = local_b8;
    local_b8[1] = &local_d8;
    local_b8[0] = puVar2;
    param_4 = 0x36;
    local_b8[2] = (uint *)0x0;
  }
  FUN_1800edc00((uint *)(param_2 + 0x20),param_3,param_4,(uint *)ppuVar7);
  return;
}

