/*
 * FUN_1007037f at 1007037f
 * undefined __stdcall FUN_1007037f(int param_1, undefined4 param_2, int * param_3)
 * Address ranges: 1007037f-10070482
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007037f(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  uint uVar4;
  uint extraout_EDX_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_1c;
  byte local_15;
  undefined3 uStack_14;
  byte local_11;
  
  FUN_100cfed0((int *)(param_1 + 0xec),0,0x1ec);
  FUN_10070307(param_1);
  local_3c = 0;
  puVar5 = (undefined4 *)(param_1 + 300);
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_40 = 0xffffffff;
  local_30 = 0xffffffff;
  local_2c = 0xffffffff;
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  puVar5 = &local_40;
  puVar6 = (undefined4 *)(param_1 + 0x450);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar7 = 0;
  local_11 = 1;
  uVar4 = extraout_EDX;
  do {
    _local_15 = CONCAT31(uStack_14,local_11);
    cVar1 = *(char *)(uVar7 + 0x10 + *(int *)(param_1 + 0x10));
    uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar1);
    if (cVar1 != '\0') {
      if (*(char *)(uVar7 + *(int *)(param_1 + 0x10)) != -1) {
        bVar2 = FUN_100701b0(param_1,param_3,uVar7,uVar4,0);
        local_11 = bVar2 & local_11;
        uVar4 = extraout_EDX_00;
      }
      _local_15 = CONCAT31(uStack_14,local_11);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x10);
  local_1c = local_1c & 0xffffff00;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(uint *)(param_1 + 0x220) = local_1c;
  FUN_10070221(param_1,param_3,-1);
  cVar1 = *(char *)(*(int *)(param_1 + 0x10) + 0x4a6c);
  if (cVar1 == '\x02') {
    FUN_100693f5(param_1);
  }
  else if (cVar1 == '\x03') {
    FUN_100696d9(param_1,extraout_ECX,param_3,(char)_local_15);
  }
  FUN_10070183(param_1);
  return;
}

