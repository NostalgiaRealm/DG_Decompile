/*
 * FUN_18002fce8 at 18002fce8
 * undefined __fastcall FUN_18002fce8(longlong param_1)
 * Address ranges: 18002fce8-18002fe2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002fce8(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffffffffff6c;
  int *piVar4;
  undefined8 in_stack_ffffffffffffff98;
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  GdiFlush();
  piVar4 = local_48;
  local_40 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) + -1,
                      (int)*(undefined8 *)(param_1 + 0x2c) + -1);
  uVar3 = *(undefined4 *)(param_1 + 0x88);
  local_48[0] = 0;
  local_48[1] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
            (*(longlong **)(param_1 + 0x10),0,0,*(undefined8 *)(param_1 + 0x80));
  *(undefined1 *)(param_1 + 0x8d) = 0;
  plVar2 = *(longlong **)(param_1 + 8U);
  iVar1 = *(int *)(plVar2[1] + 0xd2);
  if (iVar1 == 2) {
    local_28 = 1;
  }
  else if (iVar1 == 3) {
    local_28 = 2;
  }
  else if (iVar1 == 4) {
    local_28 = 3;
  }
  else {
    local_28 = 0;
  }
  local_38 = *(undefined8 *)(param_1 + 0x98);
  local_48[1] = *(undefined4 *)(param_1 + 0x2c);
  local_48[0] = *(undefined4 *)(param_1 + 0xa0);
  local_40 = CONCAT44(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  local_24 = 2;
  local_20 = 2;
  local_30 = 0;
  local_18 = 0;
  FUN_180031628(*(longlong **)(param_1 + 0x90),&local_38,plVar2,
                -(ulonglong)(param_1 != 0) & (ulonglong)(param_1 + 8U),
                CONCAT44(in_stack_ffffffffffffff6c,uVar3),piVar4,(tagPOINT)0x0,(undefined8 *)0x0,
                (RECT *)(param_1 + 0xa8),0,in_stack_ffffffffffffff98,0,local_48);
  return;
}

