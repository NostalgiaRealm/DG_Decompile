/*
 * FUN_1800647ac at 1800647ac
 * undefined8 __fastcall FUN_1800647ac(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 1800647ac-18006494f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800647ac(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int local_78;
  int iStack_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  
  uVar5 = 0;
  local_78 = 0x4e47534f;
  iStack_74 = 0;
  local_70 = 0;
  local_6c = CONCAT44(local_6c._4_4_,8);
  local_48 = 1;
  local_50 = 0x210;
  iVar6 = (uint)(*(char *)(param_3 + 0x55) != -1) + (uint)(*(char *)(param_3 + 0x56) != -1) +
          (uint)(*(char *)(param_3 + 0x54) != -1) + (uint)(*(char *)(param_3 + 0x53) != -1) +
          (uint)(*(char *)(param_3 + 0x52) != -1);
  iVar4 = iVar6 * 0x18;
  local_60 = (undefined8 *)thunk_FUN_1800fbccc(0x210);
  local_58 = local_60;
  FUN_1800edd90((longlong *)&local_60,(undefined8 *)&local_78,0x10);
  local_78 = iVar4 + 8;
  local_70 = 0;
  local_6c = 3;
  local_64 = 0xf;
  do {
    if (*(char *)(param_3 + 0x52 + uVar5) != -1) {
      local_6c = CONCAT44((int)*(char *)(param_3 + 0x52 + uVar5),(undefined4)local_6c);
      iStack_74 = (int)uVar5;
      FUN_1800edd90((longlong *)&local_60,(undefined8 *)&local_78,0x18);
    }
    uVar3 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar3;
  } while (uVar3 < 4);
  local_78 = iVar4 + 0x12;
  uVar5 = 10;
  iStack_74 = 0;
  local_70 = 0;
  local_6c = 0xffffffff00000003;
  local_64 = 0xe01;
  if (*(char *)(param_3 + 0x56) != -1) {
    FUN_1800edd90((longlong *)&local_60,(undefined8 *)&local_78,0x18);
    uVar5 = 0x13;
  }
  FUN_1800edd90((longlong *)&local_60,(undefined8 *)s_SV_TARGET_180111c70,uVar5);
  FUN_1800edd90((longlong *)&local_60,(undefined8 *)&DAT_180102818,
                (ulonglong)(-((int)local_58 - (int)local_60) & 3));
  puVar1 = local_60;
  *(int *)((longlong)local_60 + 4) = ((int)local_58 - (int)local_60) + -8;
  *(int *)(local_60 + 1) = iVar6;
  FUN_1800edd90(param_2,local_60,(longlong)local_58 - (longlong)local_60);
  uVar2 = FUN_1800fbcf0(puVar1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

