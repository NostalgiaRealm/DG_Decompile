/*
 * FUN_1800e8998 at 1800e8998
 * undefined8 * __fastcall FUN_1800e8998(undefined8 param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined8 param_6)
 * Address ranges: 1800e8998-1800e8acc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800e8998(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 in_stack_ffffffffffffff60;
  int local_88 [6];
  undefined4 local_70 [2];
  undefined8 local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0x58);
  puVar4 = (undefined8 *)0x0;
  puVar3 = puVar4;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = param_2;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = param_3;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x3c) = 0;
    *puVar1 = &PTR_FUN_180106f58;
    puVar1[8] = &PTR_LAB_180106f28;
    puVar1[10] = param_6;
    puVar1[9] = 0;
    puVar3 = puVar1;
  }
  puVar1 = puVar4;
  if (puVar3 != (undefined8 *)0x0) {
    local_60 = (ulonglong)*(uint *)(puVar3 + 6);
    local_70[0] = 1;
    local_58 = 1;
    local_4c = 1;
    local_44 = 1;
    uVar2 = 0;
    local_68 = 0x10000;
    local_54 = 0x10001;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    if (param_4 == 2) {
      uVar2 = 0xac3;
    }
    else if (param_4 == 3) {
      uVar2 = 0x400;
    }
    local_88[0] = param_4;
    FUN_1800e1fc8(puVar3[1],(ulonglong)*(uint *)(puVar3 + 2),local_88,param_5,local_70,uVar2,0,
                  in_stack_ffffffffffffff60,puVar3 + 9);
    puVar1 = puVar3;
    if (puVar3[9] == 0) {
      FUN_1800e892c(puVar3);
      FUN_1800fbcf0(puVar3);
      puVar1 = puVar4;
    }
  }
  return puVar1;
}

