/*
 * _guColorCombineFunction@4 at 180002b98
 * undefined __fastcall _guColorCombineFunction@4(int param_1)
 * Address ranges: 180002b98-180002b9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_180005d64
 */

void _guColorCombineFunction_4(int param_1)

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
                    /* 0x2b98  112  _guColorCombineFunction@4
                       0x2b98  273  guColorCombineFunction */
  uVar4 = 8;
  if (param_1 < 9) {
    if (param_1 == 8) {
LAB_180005e6a:
      puVar1 = FUN_180015384();
      cVar8 = '\0';
      uVar5 = 0;
      uVar7 = 0;
      uVar4 = 1;
      uVar2 = 1;
      uVar3 = 5;
      goto LAB_180005fa7;
    }
    uVar4 = 0;
    uVar7 = 0;
    cVar8 = '\0';
    if (param_1 != 0) {
      if (param_1 == 1) {
        puVar1 = FUN_180015384();
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
              puVar1 = FUN_180015384();
              cVar8 = (char)uVar7;
              uVar5 = uVar2;
              uVar4 = uVar6;
            }
            else {
              uVar2 = 1;
              if (param_1 == 5) {
                puVar1 = FUN_180015384();
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
                puVar1 = FUN_180015384();
                uVar5 = 0;
                uVar4 = uVar2;
              }
            }
            uVar3 = 3;
            goto LAB_180005fa7;
          }
          cVar8 = '\x01';
        }
        puVar1 = FUN_180015384();
        uVar5 = 0;
        uVar2 = 2;
        uVar7 = uVar4;
      }
      goto LAB_180005fa7;
    }
    uVar4 = 0;
    puVar1 = FUN_180015384();
    cVar8 = (char)uVar4;
    uVar7 = uVar4;
LAB_180005e5b:
    uVar5 = 1;
    uVar2 = 2;
    uVar3 = 0;
  }
  else {
    if (param_1 == 9) {
      puVar1 = FUN_180015384();
      cVar8 = '\0';
      uVar7 = 0;
      uVar2 = 1;
      uVar5 = 1;
      uVar3 = 3;
      uVar4 = 3;
      goto LAB_180005fa7;
    }
    if (param_1 != 10) {
      if (param_1 == 0xb) {
        puVar1 = FUN_180015384();
        cVar8 = '\0';
        uVar5 = 0;
        uVar7 = 0;
        uVar2 = 1;
        uVar3 = 4;
        goto LAB_180005fa7;
      }
      if (param_1 == 0xc) {
        puVar1 = FUN_180015384();
        cVar8 = '\0';
        uVar5 = 0;
        uVar7 = 0;
        uVar2 = 1;
        uVar3 = 6;
        goto LAB_180005fa7;
      }
      if (param_1 == 0xd) {
        puVar1 = FUN_180015384();
        cVar8 = '\0';
        uVar7 = 0;
        uVar2 = 0;
        uVar3 = 7;
        uVar5 = 1;
        uVar4 = 4;
        goto LAB_180005fa7;
      }
      if (param_1 != 0xe) {
        if (param_1 == 0xf) goto LAB_180005e6a;
        if (param_1 != 0x10) {
          return;
        }
        puVar1 = FUN_180015384();
        cVar8 = '\0';
        uVar4 = 0;
        uVar7 = 1;
        goto LAB_180005e5b;
      }
    }
    puVar1 = FUN_180015384();
    cVar8 = '\0';
    uVar5 = 0;
    uVar7 = 0;
    uVar2 = 1;
    uVar3 = 4;
    uVar4 = 3;
  }
LAB_180005fa7:
  FUN_180016d20((longlong)puVar1,uVar3,uVar4,uVar5,uVar2,uVar7,cVar8);
  return;
}

