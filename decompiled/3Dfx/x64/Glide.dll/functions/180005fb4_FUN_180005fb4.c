/*
 * FUN_180005fb4 at 180005fb4
 * undefined __fastcall FUN_180005fb4(int param_1, int param_2)
 * Address ranges: 180005fb4-180006080
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005fb4(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = FUN_180015384();
  uVar4 = 5;
  if (param_2 < 6) {
    if (param_2 == 5) {
      uVar3 = 6;
      goto LAB_180005ff7;
    }
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      if (param_2 != 1) {
        if (param_2 == 2) {
          uVar3 = 3;
        }
        else {
          if (param_2 != 3) {
            if (param_2 == 4) {
              uVar3 = 3;
              uVar4 = 1;
              goto LAB_180006060;
            }
            goto LAB_180006030;
          }
          uVar3 = 4;
        }
LAB_180005ff7:
        uVar4 = 8;
        goto LAB_180006060;
      }
LAB_180006030:
      uVar3 = 1;
    }
    uVar4 = 0;
  }
  else {
    if (param_2 == 6) {
      uVar4 = 0xc;
    }
    else if (param_2 == 7) {
      uVar4 = 4;
    }
    else if (param_2 == 8) {
      uVar4 = 0xd;
    }
    else if (param_2 != 9) {
      if (param_2 == 10) {
        uVar3 = 0;
        uVar4 = 0;
        iVar1 = 1;
        goto LAB_180006062;
      }
      goto LAB_180006030;
    }
    uVar3 = 7;
  }
LAB_180006060:
  iVar1 = 0;
LAB_180006062:
  FUN_180017b80((longlong)puVar2,param_1,uVar3,uVar4,uVar3,uVar4,iVar1,iVar1);
  return;
}

