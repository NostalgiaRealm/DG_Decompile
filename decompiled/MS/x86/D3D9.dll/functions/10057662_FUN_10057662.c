/*
 * FUN_10057662 at 10057662
 * undefined __thiscall FUN_10057662(void * this, uint param_1, uint param_2, int * param_3)
 * Address ranges: 10057662-100576ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10057662(void *this,uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  (**(code **)(*(int *)this + 0xec))(0);
  piVar3 = param_3;
  piVar5 = (int *)((int)this + param_1 * 0x10 + 0x5500);
  for (iVar1 = (param_2 - param_1) * 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  uVar6 = 8;
  if (param_1 < 9) {
    uVar6 = param_1;
  }
  uVar2 = uVar6;
  uVar4 = 8;
  if (param_2 < 9) {
    uVar4 = param_2;
  }
  while (uVar2 < uVar4) {
    auVar7 = minps(*(undefined1 (*) [16])(param_3 + (uVar2 - uVar6) * 4),_DAT_100d9770);
    auVar7 = maxps(auVar7,_DAT_100d9890);
    *(undefined1 (*) [16])((int)this + uVar2 * 0x10 + 0x5480) = auVar7;
    uVar2 = uVar2 + 1;
  }
  *(undefined1 *)((int)this + 0xf696) = 1;
  return;
}

