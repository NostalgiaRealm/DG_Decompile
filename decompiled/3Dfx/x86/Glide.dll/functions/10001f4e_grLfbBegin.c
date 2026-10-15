/*
 * grLfbBegin at 10001f4e
 * undefined __stdcall grLfbBegin(void)
 * Address ranges: 10001f4e-10001f52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbBegin,0
 */

/* __stdcall grLfbBegin,0 */

void grLfbBegin(void)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
                    /* 0x1f4e  50  _grLfbBegin@0 */
  if (DAT_10059790 == '\0') {
    uStack_18 = 0x14;
    uVar3 = 0;
    do {
      if ((&DAT_1005977c)[uVar3] != 0) {
        puVar9 = &uStack_18;
        uVar4 = 0;
        uVar5 = uVar3;
        uVar6 = DAT_10059768;
        uVar7 = DAT_1005976c;
        iVar8 = DAT_10059764;
        puVar2 = FUN_10012ab2();
        bVar1 = FUN_10013ac7(puVar2,uVar4,uVar5,uVar6,uVar7,iVar8,puVar9);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          (&DAT_1005977c)[uVar3] = uStack_14;
        }
      }
      if ((&DAT_10059770)[uVar3] != 0) {
        puVar9 = &uStack_18;
        uVar4 = 1;
        uVar5 = uVar3;
        uVar6 = DAT_10059768;
        uVar7 = DAT_1005976c;
        iVar8 = DAT_10059764;
        puVar2 = FUN_10012ab2();
        bVar1 = FUN_10013ac7(puVar2,uVar4,uVar5,uVar6,uVar7,iVar8,puVar9);
        if (CONCAT31(extraout_var_00,bVar1) != 0) {
          (&DAT_10059770)[uVar3] = uStack_14;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    DAT_10059790 = '\x01';
  }
  return;
}

