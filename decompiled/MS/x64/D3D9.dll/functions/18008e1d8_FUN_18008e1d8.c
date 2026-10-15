/*
 * FUN_18008e1d8 at 18008e1d8
 * char __fastcall FUN_18008e1d8(longlong param_1, longlong * param_2, int param_3, undefined8 param_4, int param_5, char param_6)
 * Address ranges: 18008e1d8-18008e2e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18008e1d8(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,int param_5,
                  char param_6)

{
  char cVar1;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  longlong lStack_98;
  int local_90 [12];
  undefined1 local_60 [8];
  uint local_58;
  uint local_54;
  
  if (param_2 == (longlong *)0x0) {
    return '\0';
  }
  (**(code **)(*param_2 + 0x50))(param_2,local_60);
  local_a0 = 0;
  lStack_98 = 0;
  local_a4 = 5;
  if (param_6 != '\0') {
    local_a4 = 9;
  }
  if (local_a4 != 4) {
    if (local_a4 == 5) {
      lStack_98 = (ulonglong)local_54 << 0x20;
    }
    else if (local_a4 != 9) goto LAB_18008e25a;
  }
  local_a0 = 0xffffffff00000000;
LAB_18008e25a:
  local_90[7] = 5;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[10] = 0;
  local_90[0] = param_5;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[1] = 4;
  local_90[2] = 0;
  local_90[3] = 0;
  *(longlong **)(param_1 + 0x18) = param_2;
  local_a8 = param_3;
  cVar1 = FUN_18008dd60(param_1,-(ulonglong)(param_3 != 0) & (ulonglong)&local_a8,0,
                        -(ulonglong)(param_5 != 0) & (ulonglong)local_90,local_58,local_54,'\0');
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
  }
  return cVar1;
}

