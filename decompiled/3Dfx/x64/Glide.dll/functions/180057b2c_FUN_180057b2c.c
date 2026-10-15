/*
 * FUN_180057b2c at 180057b2c
 * ulonglong __fastcall FUN_180057b2c(longlong param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5)
 * Address ranges: 180057b2c-180057c8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180057b2c(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,
                       undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 in_stack_ffffffffffffff60;
  int local_88 [6];
  undefined4 local_70 [2];
  undefined8 local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x1b500);
  puVar3 = (undefined8 *)FUN_18005db9c(0x58);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[1] = -(ulonglong)(lVar1 != 0) & lVar1 + 0x6d0U;
    *(undefined4 *)(puVar3 + 2) = param_2;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = param_3;
    *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x3c) = 0;
    *puVar3 = &PTR_FUN_180065280;
    puVar3[8] = &PTR_LAB_180065250;
    puVar3[9] = 0;
    puVar3[10] = uVar2;
  }
  if (puVar3 != (undefined8 *)0x0) {
    local_60 = (ulonglong)*(uint *)(puVar3 + 6);
    local_70[0] = 1;
    local_58 = 1;
    local_4c = 1;
    local_44 = 1;
    uVar4 = 0;
    local_68 = 0x10000;
    local_54 = 0x10001;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    if (param_4 == 2) {
      uVar4 = 0xac3;
    }
    else if (param_4 == 3) {
      uVar4 = 0x400;
    }
    local_88[0] = param_4;
    FUN_180046244(puVar3[1],(ulonglong)*(uint *)(puVar3 + 2),local_88,param_5,local_70,uVar4,
                  in_stack_ffffffffffffff58,in_stack_ffffffffffffff60,puVar3 + 9);
    if (puVar3[9] != 0) goto LAB_180057c6e;
    FUN_18005cd3c(puVar3);
    FUN_18005dbc0(puVar3);
  }
  puVar3 = (undefined8 *)0x0;
LAB_180057c6e:
  return -(ulonglong)(puVar3 != (undefined8 *)0x0) & (ulonglong)(puVar3 + 8);
}

