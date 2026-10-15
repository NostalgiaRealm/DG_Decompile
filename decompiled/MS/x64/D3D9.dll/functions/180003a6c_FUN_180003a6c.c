/*
 * FUN_180003a6c at 180003a6c
 * undefined __fastcall FUN_180003a6c(longlong param_1, ulonglong param_2, undefined8 * param_3, undefined8 * param_4)
 * Address ranges: 180003a6c-180003b09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180003a6c(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = param_2 & 0xffffffff;
  lVar4 = uVar3 * 600;
  uVar1 = param_3[1];
  (&DAT_180112a70)[uVar3 * 0x4b] = *param_3;
  (&DAT_180112a78)[uVar3 * 0x4b] = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_3 + 0x14);
  *(undefined8 *)((longlong)&DAT_180112a78 + lVar4 + 4) = *(undefined8 *)((longlong)param_3 + 0xc);
  *(undefined8 *)((longlong)&DAT_180112a80 + lVar4 + 4) = uVar1;
  uVar1 = param_4[1];
  *(undefined8 *)(&DAT_180112a8c + lVar4) = *param_4;
  *(undefined8 *)(lVar4 + 0x180112a94) = uVar1;
  *(undefined8 *)(&DAT_180112a9c + lVar4) = param_4[2];
  (&DAT_180112aee)[lVar4] = 1;
  FUN_18002f700(param_1,param_2,*(uint *)(&DAT_180112a8c + lVar4),*(uint *)(&DAT_180112a90 + lVar4))
  ;
  uVar2 = FUN_180001fa0(param_1,*(uint *)((longlong)param_3 + 0x14));
  *(undefined4 *)(&DAT_1801123d0 + uVar3 * 0x28) = uVar2;
  (&DAT_1801123d4)[uVar3 * 0x28] = 1;
  return;
}

