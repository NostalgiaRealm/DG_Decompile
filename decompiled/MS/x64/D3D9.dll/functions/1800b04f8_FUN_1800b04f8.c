/*
 * FUN_1800b04f8 at 1800b04f8
 * undefined __fastcall FUN_1800b04f8(longlong param_1, longlong param_2)
 * Address ranges: 1800b04f8-1800b05dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b04f8(longlong param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  longlong *plVar4;
  longlong local_68 [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  longlong *plVar3;
  
  plVar4 = *(longlong **)(param_1 + 0x50);
  bVar1 = false;
  plVar3 = (longlong *)0x0;
  do {
    if (bVar1) break;
    local_68[(longlong)plVar3] = *(longlong *)(param_1 + 0x30 + (longlong)plVar3 * 8);
    if (param_2 == *(longlong *)(param_1 + 0xc460 + (longlong)plVar3 * 8)) {
      bVar1 = true;
      *(undefined8 *)(param_1 + 0xc460 + (longlong)plVar3 * 8) = 0;
      local_68[(longlong)plVar3] = 0;
    }
    uVar2 = (int)plVar3 + 1;
    plVar3 = (longlong *)(ulonglong)uVar2;
  } while (uVar2 < 4);
  if (param_2 == *(longlong *)(param_1 + 0xc480)) {
    *(undefined8 *)(param_1 + 0xc480) = 0;
    plVar4 = (longlong *)0x0;
  }
  else if (!bVar1) {
    return;
  }
  if (*(longlong *)(param_1 + 0xc460) == 0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))
              (*(longlong **)(param_1 + 0x28),4,1,&local_48,local_68);
  }
  else {
    FUN_18001b944(param_1,local_68,plVar4,'\0');
  }
  return;
}

