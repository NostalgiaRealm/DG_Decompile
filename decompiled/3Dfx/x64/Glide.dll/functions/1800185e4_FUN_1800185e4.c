/*
 * FUN_1800185e4 at 1800185e4
 * undefined8 * __fastcall FUN_1800185e4(undefined8 * param_1, undefined4 param_2)
 * Address ranges: 1800185e4-180018935
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800185e4(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  puVar1 = param_1 + 0x139a;
  puVar2 = param_1 + 0xd92;
  puVar3 = param_1 + 0x78a;
  FUN_180022b3c(param_1,param_2,param_1 + 0x69d,param_1 + 0x76c,puVar3,puVar2,puVar1);
  *(undefined4 *)(param_1 + 0x637) = param_2;
  param_1[0x636] = 0;
  *param_1 = &PTR_FUN_180062cc8;
  param_1[0x638] = 0;
  param_1[0x52e] = &PTR_FUN_180063000;
  param_1[0x639] = 0;
  *(undefined4 *)(param_1 + 0x63a) = 0;
  param_1[0x63b] = 0;
  param_1[0x63c] = 0;
  param_1[0x63d] = 0;
  param_1[0x63e] = 0;
  param_1[0x63f] = 0;
  param_1[0x640] = 0;
  param_1[0x641] = 0;
  param_1[0x642] = 0;
  param_1[0x643] = 0;
  *(undefined4 *)(param_1 + 0x644) = 0xffffffff;
  param_1[0x69e] = param_1;
  param_1[0x69f] = 0;
  *(undefined4 *)(param_1 + 0x6a3) = 1;
  param_1[0x6a4] = 0;
  *(undefined4 *)(param_1 + 0x6a5) = 0;
  *(undefined4 *)(param_1 + 0x6c2) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3614) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3616) = 0;
  param_1[0x6c3] = 0;
  param_1[0x6c4] = 0;
  param_1[0x6a0] = 0;
  param_1[0x6a1] = 0;
  param_1[0x6a2] = 0;
  FUN_18005f814((undefined1 *)(param_1 + 0x6a6),0,0x70);
  FUN_18005f814((undefined1 *)(param_1 + 0x6b4),0,0x70);
  param_1[0x6c5] = param_1;
  param_1[0x69d] = &PTR_ConvertAndDownloadRLE_180063980;
  lVar6 = 3;
  puVar4 = param_1 + 0x6c6;
  do {
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 0x2e;
  } while (lVar6 != 0);
  param_1[0x76a] = 0;
  *(undefined4 *)(param_1 + 0x76b) = 0;
  FUN_18005f814((undefined1 *)(param_1 + 0x750),0,0xb8);
  param_1[0x767] = 0;
  param_1[0x768] = 0;
  param_1[0x769] = 0;
  param_1[0x76e] = 0;
  *(undefined4 *)(param_1 + 0x76f) = 0;
  param_1[0x770] = 0;
  param_1[0x771] = 0;
  param_1[0x772] = 0;
  *(undefined1 *)(param_1 + 0x773) = 0;
  param_1[0x774] = 0;
  param_1[0x775] = 0;
  param_1[0x76c] = &PTR_FUN_180063a48;
  param_1[0x76d] = param_1;
  param_1[0x776] = 0;
  *(undefined4 *)(param_1 + 0x777) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3bbc) = 0;
  param_1[0x778] = param_1;
  *(undefined4 *)(param_1 + 0x781) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c0c) = 0;
  param_1[0x782] = 0;
  param_1[0x783] = 0;
  *(undefined4 *)(param_1 + 0x784) = 0;
  uVar5 = thunk_FUN_18005db9c(0xc000);
  param_1[0x785] = uVar5;
  param_1[0x786] = 0x400;
  param_1[0x787] = param_1 + 0x784;
  param_1[0x788] = 0;
  param_1[0x789] = 0;
  *(undefined4 *)(param_1 + 0x76e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3bb4) = 0;
  param_1[0x77e] = 0;
  param_1[0x77f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b74) = 0;
  param_1[0x770] = 0;
  param_1[0x771] = 0;
  param_1[0x772] = 0;
  param_1[0x774] = 0;
  param_1[0x775] = 0;
  *(undefined1 *)(param_1 + 0x773) = 0;
  FUN_18002eea0(puVar3,param_1,param_1 + 0x59e,0);
  FUN_18002eea0(puVar2,param_1,param_1 + 0x5ce,1);
  FUN_18002eea0(puVar1,param_1,param_1 + 0x5fe,2);
  param_1[0x19a5] = 0;
  param_1[0x19a6] = 0;
  param_1[0x19a2] = puVar3;
  param_1[0x19a3] = puVar2;
  param_1[0x19a4] = puVar1;
  return param_1;
}

