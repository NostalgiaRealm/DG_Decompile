/*
 * FUN_1002f315 at 1002f315
 * bool __fastcall FUN_1002f315(int param_1)
 * Address ranges: 1002f315-1002f514
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1002f315(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  undefined4 local_11c [5];
  undefined4 local_108 [5];
  undefined4 local_f4 [5];
  undefined4 local_e0 [5];
  undefined4 local_cc [5];
  undefined4 local_b8 [5];
  undefined4 local_a4 [5];
  undefined4 local_90 [5];
  undefined4 local_7c [5];
  undefined4 local_68 [5];
  undefined4 local_54 [5];
  undefined4 local_40 [5];
  undefined4 local_2c [5];
  undefined *local_18 [5];
  
  local_18[0] = (undefined *)0x2;
  local_18[1] = (undefined *)0x0;
  local_18[2] = (undefined *)0x0;
  local_18[4] = (undefined *)0x0;
  iVar2 = 5;
  ppuVar4 = local_18;
  puVar3 = local_11c;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_18[0] = (undefined *)0x2;
  local_18[1] = (undefined *)0x1;
  local_18[2] = (undefined *)0x0;
  local_18[4] = (undefined *)0x0;
  ppuVar4 = local_18;
  puVar3 = local_108;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_18[2] = (undefined *)0x0;
  local_18[4] = (undefined *)0x0;
  local_18[0] = (undefined *)0x2;
  local_18[1] = (undefined *)0x2;
  ppuVar4 = local_18;
  puVar3 = local_f4;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_18[4] = (undefined *)0x0;
  local_18[1] = (undefined *)0x3;
  local_18[0] = (undefined *)0x2;
  local_18[2] = (undefined *)0x2;
  ppuVar4 = local_18;
  puVar3 = local_e0;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  ppuVar4 = local_18;
  local_18[4] = (undefined *)0x0;
  puVar3 = local_2c;
  iVar1 = iVar2;
  if (*(char *)(param_1 + 0xec) == '\0') {
    local_18[0] = (undefined *)0x2;
    local_18[1] = (undefined *)0x4;
    local_18[2] = (undefined *)0x2;
  }
  else {
    local_18[0] = (undefined *)0x0;
    local_18[1] = (undefined *)0x1;
    local_18[2] = &DAT_100b220c;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_18[4] = (undefined *)0x5;
  local_18[0] = (undefined *)0x2;
  local_18[1] = (undefined *)0x3;
  puVar3 = local_2c;
  puVar5 = local_cc;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_18[2] = (undefined *)0x1;
  ppuVar4 = local_18;
  puVar3 = local_b8;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_18[4] = (undefined *)0x5;
  local_18[0] = (undefined *)0x2;
  local_18[1] = (undefined *)0x4;
  local_18[2] = (undefined *)0x1;
  ppuVar4 = local_18;
  puVar3 = local_a4;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_18[4] = (undefined *)0x5;
  local_18[0] = (undefined *)0x0;
  local_18[1] = (undefined *)0x1;
  local_18[2] = &DAT_100b21f8;
  ppuVar4 = local_18;
  puVar3 = local_90;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_18[4] = (undefined *)0x5;
  local_18[0] = (undefined *)0x0;
  local_18[1] = (undefined *)0x1;
  local_18[2] = &DAT_100b21e4;
  ppuVar4 = local_18;
  puVar3 = local_7c;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_18[4] = (undefined *)0x5;
  local_18[0] = (undefined *)0x0;
  local_18[1] = (undefined *)0x1;
  local_18[2] = &DAT_100b21d0;
  ppuVar4 = local_18;
  puVar3 = local_68;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_18[4] = (undefined *)0x5;
  local_18[0] = (undefined *)0x0;
  local_18[1] = (undefined *)0x1;
  local_18[2] = &DAT_100b21bc;
  ppuVar4 = local_18;
  puVar3 = local_54;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_18[4] = (undefined *)0x5;
  local_18[0] = (undefined *)0x0;
  local_18[1] = (undefined *)0x1;
  local_18[2] = &DAT_100b21a8;
  ppuVar4 = local_18;
  puVar3 = local_40;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_18[0] = (undefined *)0xc;
  local_18[2] = (undefined *)0x0;
  local_18[3] = (undefined *)0x0;
  local_18[4] = (undefined *)0xd;
  local_18[1] = (undefined *)local_11c;
  iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc4) + 0x50c) + 4))
                    (*(undefined4 *)(param_1 + 200),1,local_18,0);
  *(int *)(param_1 + 0xd0) = iVar2;
  return iVar2 != 0;
}

