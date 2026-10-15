/*
 * FUN_18000b090 at 18000b090
 * undefined8 * __fastcall FUN_18000b090(undefined8 * param_1, undefined4 param_2)
 * Address ranges: 18000b090-18000b3fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18000b090(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  puVar1 = param_1 + 0x14fe;
  puVar2 = param_1 + 0xef6;
  puVar3 = param_1 + 0x854;
  puVar4 = param_1 + 0x8ee;
  FUN_1800111b4(param_1,param_2,param_1 + 0x6cd,puVar3,puVar4,puVar2,puVar1);
  *(undefined4 *)(param_1 + 0x667) = param_2;
  param_1[0x666] = 0;
  *param_1 = &PTR_FUN_180063aa8;
  param_1[0x668] = 0;
  param_1[0x53d] = &PTR_FUN_180063dc8;
  param_1[0x669] = 0;
  *(undefined4 *)(param_1 + 0x66a) = 0;
  param_1[0x66b] = 0;
  param_1[0x66c] = 0;
  param_1[0x66d] = 0;
  param_1[0x66e] = 0;
  param_1[0x66f] = 0;
  param_1[0x670] = 0;
  param_1[0x671] = 0;
  param_1[0x672] = 0;
  param_1[0x673] = 0;
  *(undefined4 *)(param_1 + 0x674) = 0xffffffff;
  param_1[0x6ce] = param_1;
  param_1[0x6cf] = 0;
  *(undefined4 *)(param_1 + 0x6d3) = 1;
  param_1[0x6d4] = 0;
  *(undefined4 *)(param_1 + 0x6d5) = 0;
  *(undefined4 *)(param_1 + 0x6f2) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3794) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3796) = 0;
  param_1[0x6f3] = 0;
  param_1[0x6f4] = 0;
  param_1[0x6d0] = 0;
  param_1[0x6d1] = 0;
  param_1[0x6d2] = 0;
  FUN_180060f94((undefined1 *)(param_1 + 0x6d6),0,0x70);
  FUN_180060f94((undefined1 *)(param_1 + 0x6e4),0,0x70);
  param_1[0x6f5] = param_1;
  param_1[0x6cd] = &PTR__grErrorSetCallback_4_1800647e8;
  lVar7 = 7;
  puVar5 = param_1 + 0x6f6;
  do {
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 0x2e;
  } while (lVar7 != 0);
  param_1[0x852] = 0;
  *(undefined4 *)(param_1 + 0x853) = 0;
  FUN_180060f94((undefined1 *)(param_1 + 0x838),0,0xb8);
  param_1[0x84f] = 0;
  param_1[0x850] = 0;
  param_1[0x851] = 0;
  FUN_180012690(puVar3,param_1);
  param_1[0x8a4] = param_1;
  *puVar3 = &PTR_FUN_1800648b0;
  *(undefined4 *)(param_1 + 0x8af) = 0;
  *(undefined1 *)((longlong)param_1 + 0x457c) = 0;
  param_1[0x8b0] = 0;
  param_1[0x8b1] = 0;
  *(undefined4 *)(param_1 + 0x8b2) = 0;
  uVar6 = thunk_FUN_180060a9c(0xc000);
  param_1[0x8b3] = uVar6;
  param_1[0x8b4] = 0x400;
  param_1[0x8b5] = param_1 + 0x8b2;
  param_1[0x8b6] = 0;
  param_1[0x8b7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x472c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4744) = 0x3f800000;
  param_1[0x8e9] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x4754) = 0x3f800000;
  param_1[0x8ec] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x476c) = 0x3f800000;
  param_1[0x8e4] = 0;
  *(undefined4 *)(param_1 + 0x8e5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4734) = 0;
  *(undefined8 *)((longlong)param_1 + 0x473c) = 0;
  *(undefined4 *)(param_1 + 0x8ea) = 0;
  *(undefined4 *)((longlong)param_1 + 0x475c) = 0;
  *(undefined4 *)(param_1 + 0x8ed) = 0;
  *(undefined4 *)(param_1 + 0x89a) = 0xffffffff;
  FUN_18001b660((longlong)puVar3);
  *(undefined4 *)((longlong)param_1 + 0x4514) = 0;
  param_1[0x8ac] = 0;
  param_1[0x8ad] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44d4) = 0;
  param_1[0x89c] = 0;
  param_1[0x89d] = 0;
  param_1[0x89e] = 0;
  param_1[0x8a0] = 0;
  param_1[0x8a1] = 0;
  *(undefined1 *)(param_1 + 0x89f) = 0;
  FUN_18002135c(puVar4,param_1,param_1 + 0x5b2,0);
  FUN_18002135c(puVar2,param_1,param_1 + 0x5e6,1);
  FUN_18002135c(puVar1,param_1,param_1 + 0x61a,2);
  param_1[0x1b09] = 0;
  param_1[0x1b0a] = 0;
  param_1[0x1b06] = puVar4;
  param_1[0x1b07] = puVar2;
  param_1[0x1b08] = puVar1;
  return param_1;
}

