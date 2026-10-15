/*
 * FUN_180015cac at 180015cac
 * ulonglong __fastcall FUN_180015cac(longlong param_1, undefined4 * param_2)
 * Address ranges: 180015cac-180015d1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180015cac(longlong param_1,undefined4 *param_2)

{
  BOOL BVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_1 + 0xf9) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x68))
              (*(longlong **)(param_1 + 0x80),&local_28,*(undefined8 *)(param_1 + 0x88));
    *param_2 = local_28;
    param_2[1] = uStack_24;
    param_2[2] = uStack_20;
    param_2[3] = uStack_1c;
    param_2[4] = local_18;
    param_2[5] = uStack_14;
    param_2[6] = uStack_10;
    param_2[7] = uStack_c;
    BVar1 = SetRect((LPRECT)(param_2 + 8),0,0,*(int *)(param_1 + 0x90),*(int *)(param_1 + 0x94));
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
  }
  else {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  return uVar2;
}

