/*
 * FUN_10004276 at 10004276
 * undefined __stdcall FUN_10004276(void)
 * Address ranges: 10004276-10004349
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004276(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 local_18;
  undefined4 local_14;
  
  if (DAT_10059790 != '\0') {
    local_18 = 0x14;
    uVar3 = 0;
    do {
      if ((&DAT_1005977c)[uVar3] != 0) {
        uVar7 = 0;
        uVar5 = uVar3;
        puVar2 = FUN_10012ab2();
        FUN_10013b0b(puVar2,uVar7,uVar5);
      }
      if ((&DAT_10059770)[uVar3] != 0) {
        uVar7 = 1;
        uVar5 = uVar3;
        puVar2 = FUN_10012ab2();
        FUN_10013b0b(puVar2,uVar7,uVar5);
      }
      if ((&DAT_1005977c)[uVar3] != 0) {
        puVar9 = &local_18;
        uVar4 = 0;
        uVar5 = uVar3;
        uVar7 = DAT_10059768;
        uVar6 = DAT_1005976c;
        iVar8 = DAT_10059764;
        puVar2 = FUN_10012ab2();
        bVar1 = FUN_10013ac7(puVar2,uVar4,uVar5,uVar7,uVar6,iVar8,puVar9);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          (&DAT_1005977c)[uVar3] = local_14;
        }
      }
      if ((&DAT_10059770)[uVar3] != 0) {
        puVar9 = &local_18;
        uVar4 = 1;
        uVar5 = uVar3;
        uVar7 = DAT_10059768;
        uVar6 = DAT_1005976c;
        iVar8 = DAT_10059764;
        puVar2 = FUN_10012ab2();
        bVar1 = FUN_10013ac7(puVar2,uVar4,uVar5,uVar7,uVar6,iVar8,puVar9);
        if (CONCAT31(extraout_var_00,bVar1) != 0) {
          (&DAT_10059770)[uVar3] = local_14;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
  }
  return;
}

