/*
 * FUN_180005a28 at 180005a28
 * undefined __fastcall FUN_180005a28(int param_1)
 * Address ranges: 180005a28-180005c77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005a28(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  uVar6 = 8;
  uVar4 = 8;
  if (param_1 < 9) {
    if (param_1 == 8) {
LAB_180005b2e:
      puVar1 = FUN_180015044();
      cVar8 = '\0';
      uVar5 = 0;
      uVar7 = 0;
      uVar4 = 1;
      uVar2 = 1;
      uVar3 = 5;
      goto LAB_180005c6b;
    }
    uVar4 = 0;
    uVar7 = 0;
    cVar8 = '\0';
    if (param_1 != 0) {
      if (param_1 == 1) {
        puVar1 = FUN_180015044();
        cVar8 = (char)uVar4;
        uVar3 = 1;
        uVar5 = 1;
        uVar2 = 2;
        uVar7 = uVar4;
      }
      else {
        uVar2 = 1;
        uVar3 = 1;
        if (param_1 != 2) {
          if (param_1 != 3) {
            if (param_1 == 4) {
              puVar1 = FUN_180015044();
              cVar8 = (char)uVar7;
              uVar5 = uVar2;
              uVar4 = uVar6;
            }
            else {
              uVar2 = 1;
              if (param_1 == 5) {
                puVar1 = FUN_180015044();
                cVar8 = (char)uVar7;
                uVar5 = uVar2;
                uVar4 = uVar2;
              }
              else {
                if (param_1 != 6) {
                  if (param_1 != 7) {
                    return;
                  }
                  cVar8 = '\x01';
                }
                puVar1 = FUN_180015044();
                uVar5 = 0;
                uVar4 = uVar2;
              }
            }
            uVar3 = 3;
            goto LAB_180005c6b;
          }
          cVar8 = '\x01';
        }
        puVar1 = FUN_180015044();
        uVar5 = 0;
        uVar2 = 2;
        uVar7 = uVar4;
      }
      goto LAB_180005c6b;
    }
    uVar4 = 0;
    puVar1 = FUN_180015044();
    cVar8 = (char)uVar4;
    uVar7 = uVar4;
LAB_180005b1f:
    uVar5 = 1;
    uVar2 = 2;
    uVar3 = 0;
  }
  else {
    if (param_1 == 9) {
      puVar1 = FUN_180015044();
      cVar8 = '\0';
      uVar7 = 0;
      uVar2 = 1;
      uVar5 = 1;
      uVar3 = 3;
      uVar4 = 3;
      goto LAB_180005c6b;
    }
    if (param_1 != 10) {
      if (param_1 == 0xb) {
        puVar1 = FUN_180015044();
        cVar8 = '\0';
        uVar5 = 0;
        uVar7 = 0;
        uVar2 = 1;
        uVar3 = 4;
        goto LAB_180005c6b;
      }
      if (param_1 == 0xc) {
        puVar1 = FUN_180015044();
        cVar8 = '\0';
        uVar5 = 0;
        uVar7 = 0;
        uVar2 = 1;
        uVar3 = 6;
        goto LAB_180005c6b;
      }
      if (param_1 == 0xd) {
        puVar1 = FUN_180015044();
        cVar8 = '\0';
        uVar7 = 0;
        uVar2 = 0;
        uVar3 = 7;
        uVar5 = 1;
        uVar4 = 4;
        goto LAB_180005c6b;
      }
      if (param_1 != 0xe) {
        if (param_1 == 0xf) goto LAB_180005b2e;
        if (param_1 != 0x10) {
          return;
        }
        puVar1 = FUN_180015044();
        cVar8 = '\0';
        uVar4 = 0;
        uVar7 = 1;
        goto LAB_180005b1f;
      }
    }
    puVar1 = FUN_180015044();
    cVar8 = '\0';
    uVar5 = 0;
    uVar7 = 0;
    uVar2 = 1;
    uVar3 = 4;
    uVar4 = 3;
  }
LAB_180005c6b:
  FUN_180016880((longlong)puVar1,uVar3,uVar4,uVar5,uVar2,uVar7,cVar8);
  return;
}

