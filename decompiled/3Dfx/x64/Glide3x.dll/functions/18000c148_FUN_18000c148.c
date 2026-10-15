/*
 * FUN_18000c148 at 18000c148
 * undefined __fastcall FUN_18000c148(longlong param_1)
 * Address ranges: 18000c148-18000c226
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000c148(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong local_res10;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar2 = 0;
  do {
    local_3c = 3;
    local_34 = 1;
    local_30 = 8;
    local_1c = 0;
    local_18 = 0x7f7fffff;
    local_2c = 0;
    uStack_24 = 0;
    local_48 = *(undefined4 *)(&DAT_180063a58 + (ulonglong)(uVar2 & 3) * 4);
    local_44 = (uVar2 & 4 | 2) >> 1;
    local_40 = (uVar2 & 8 | 4) >> 2;
    (**(code **)(**(longlong **)(param_1 + 0x3398) + 0x48))
              (*(longlong **)(param_1 + 0x3398),&local_res10);
    local_res10 = local_res10 + (ulonglong)(uVar2 * *(int *)(param_1 + 0x3350));
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0x3330) + 0x6d0 +
              (ulonglong)*(uint *)(param_1 + 0x3338) * 0x20);
    (**(code **)(*plVar1 + 0xb0))(plVar1,&local_48);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}

