/*
 * FUN_100111aa at 100111aa
 * undefined __fastcall FUN_100111aa(void * param_1)
 * Address ranges: 100111aa-10011230
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100111aa(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar5 = *(int *)((int)param_1 + 0x68);
  iVar1 = FUN_1000245c(iVar5);
  uVar2 = FUN_10002564(iVar5);
  uVar3 = FUN_100025a7(extraout_ECX);
  uVar4 = FUN_10002344(extraout_ECX_00);
  FUN_100254c4(param_1,*(int *)((int)param_1 + 0x7c),*(uint *)((int)param_1 + 0x80),
               (short)*(undefined4 *)((int)param_1 + 0x84),uVar4,iVar1,uVar2,uVar3,extraout_ECX_01,1
              );
  *(undefined1 *)((int)param_1 + 0x1f) = 1;
  iVar5 = FUN_10025699(*(int *)((int)param_1 + 0x7c),*(uint *)((int)param_1 + 0x80),
                       *(int *)((int)param_1 + 0x84),uVar4,iVar1,uVar2,uVar3,
                       *(uint *)((int)param_1 + 0x10),*(int *)((int)param_1 + 0x14));
  *(int *)((int)param_1 + 0x78) = iVar5;
  return;
}

