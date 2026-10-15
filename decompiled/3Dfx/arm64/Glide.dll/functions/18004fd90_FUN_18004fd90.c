/*
 * FUN_18004fd90 at 18004fd90
 * bool __cdecl FUN_18004fd90(longlong param_1, longlong param_2, undefined8 * param_3, int param_4, undefined8 param_5)
 * Address ranges: 18004fd90-18004fe53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18004fd90(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  int iStack_24;
  undefined4 local_20;
  
  if (param_4 == 0) {
    iStack_24 = 0;
  }
  else {
    iStack_24 = *(int *)(&DAT_1800631f0 + (longlong)param_4 * 4);
    if ((iStack_24 - 3U < 2) && (*(char *)(param_1 + 0x313) != '\0')) {
      uVar1 = 1;
      local_20 = 0x802;
      goto LAB_18004fdec;
    }
  }
  uVar1 = 0;
  local_20 = 2;
LAB_18004fdec:
  local_50 = param_3[2];
  local_28 = 1;
  uStack_58 = param_3[1];
  local_60 = *param_3;
  local_44 = 1;
  local_48 = *(undefined4 *)(param_3 + 3);
  *(undefined1 *)(param_2 + 0xd6c) = uVar1;
  local_3c = 0x200000060;
  local_30 = param_5;
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x50))
            (*(longlong **)(param_1 + 0x688),
             *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x18c0 + 0x6b0),
             &local_60,param_2 + 8);
  return *(longlong *)(param_2 + 8) != 0;
}

