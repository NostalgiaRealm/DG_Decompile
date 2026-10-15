/*
 * FUN_180059a3c at 180059a3c
 * undefined __fastcall FUN_180059a3c(undefined8 param_1, longlong param_2, uint * param_3)
 * Address ranges: 180059a3c-180059b20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180059a3c(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  tagRECT local_68;
  int local_58;
  uint local_54;
  
  *param_3 = *(uint *)(param_2 + 0x18) / *(uint *)(param_2 + 0x20);
  param_3[1] = *(uint *)(param_2 + 0x1c) / *(uint *)(param_2 + 0x24);
  plVar4 = *(longlong **)(param_2 + 8);
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_58);
  FUN_180051488(plVar4,&local_68,*(int *)(param_2 + 0x2c),*(uint *)(param_2 + 0x18),
                *(uint *)(param_2 + 0x1c),*(uint *)(param_2 + 0x20),*(uint *)(param_2 + 0x24),
                local_58,local_54);
  uVar5 = local_68.right - local_68.left;
  uVar3 = local_68.bottom - local_68.top;
  param_3[2] = uVar5;
  param_3[3] = uVar3;
  param_3[4] = *(uint *)(&DAT_180063030 + (longlong)*(int *)(param_2 + 0x34) * 4);
  uVar1 = *(uint *)(param_2 + 0x18) / *(uint *)(param_2 + 0x20);
  if ((uVar1 < uVar5) ||
     (uVar2 = *(uint *)(param_2 + 0x1c) / *(uint *)(param_2 + 0x24), uVar2 < uVar3)) {
    uVar2 = uVar3 * 2 - 1;
    uVar1 = uVar5 * 2 - 1;
  }
  else {
    uVar2 = uVar2 * 2;
    uVar1 = uVar1 * 2;
  }
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  return;
}

