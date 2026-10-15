/*
 * FUN_18005a480 at 18005a480
 * undefined8 * __cdecl FUN_18005a480(longlong param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5)
 * Address ranges: 18005a480-18005a5e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18005a480(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int local_80 [6];
  undefined4 local_68 [2];
  undefined8 local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar5 = *(longlong *)(param_1 + 8);
  lVar1 = 0;
  if (lVar5 != 0) {
    lVar1 = lVar5 + 0x6d0;
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x1b500);
  puVar3 = (undefined8 *)FUN_1800609d8(0x58);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_180067290;
    puVar3[1] = lVar1;
    puVar3[10] = uVar6;
    puVar3[8] = &PTR__guEncodeRLE16_16_180067260;
    puVar3[9] = 0;
    *(undefined4 *)(puVar3 + 2) = param_2;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = param_3;
    *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x3c) = 0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    local_68[0] = 1;
    uStack_58 = (ulonglong)*(uint *)(puVar3 + 6);
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    local_38 = 0;
    local_60 = 0x10000;
    local_40 = 0x100000000;
    local_50 = 0x1000100000001;
    uStack_48 = 0x100000000;
    if (param_4 == 2) {
      uVar6 = 0xac3;
    }
    else if (param_4 == 3) {
      uVar6 = 0x400;
    }
    else {
      uVar6 = 0;
    }
    plVar4 = *(longlong **)(puVar3[1] + (ulonglong)*(uint *)(puVar3 + 2) * 0x20);
    local_80[0] = param_4;
    (**(code **)(*plVar4 + 0xd8))
              (plVar4,local_80,param_5,local_68,uVar6,0,&DAT_180064c58,puVar3 + 9);
    if (puVar3[9] == 0) {
      FUN_180060018(puVar3);
      FUN_180060a18(puVar3);
      puVar3 = (undefined8 *)0x0;
    }
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3 + 8;
  }
  return puVar2;
}

