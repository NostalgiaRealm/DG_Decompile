/*
 * FUN_100150c4 at 100150c4
 * undefined __fastcall FUN_100150c4(void * param_1)
 * Address ranges: 100150c4-10015101
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100150c4(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  void *pvVar5;
  int iVar6;
  
  iVar6 = 1;
  pvVar5 = param_1;
  uVar1 = FUN_10002621(*(int *)((int)param_1 + 0x68));
  uVar2 = FUN_100025c9(extraout_ECX);
  iVar3 = FUN_10002447(extraout_ECX_00);
  uVar4 = FUN_10002297(*(int *)((int)param_1 + 0x68));
  FUN_1002cb36(param_1,*(int *)((int)param_1 + 0x78),*(uint *)((int)param_1 + 0x7c),
               (short)*(undefined4 *)((int)param_1 + 0x80),uVar4,iVar3,uVar2,uVar1,pvVar5,iVar6);
  *(undefined1 *)((int)param_1 + 0x1f) = 1;
  return;
}

