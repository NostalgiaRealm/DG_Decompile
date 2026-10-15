/*
 * _grTexCombineFunction@8 at 180002e90
 * undefined __fastcall _grTexCombineFunction@8(int param_1, int param_2)
 * Address ranges: 180002e90-180002e94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_180005c78
 */

void _grTexCombineFunction_8(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  
                    /* 0x2e90  86  _grTexCombineFunction@8
                       0x2e90  129  _guTexCombineFunction@8
                       0x2e90  243  grTexCombineFunction
                       0x2e90  286  guTexCombineFunction */
  puVar2 = FUN_180015044();
  uVar4 = 5;
  if (param_2 < 6) {
    if (param_2 == 5) {
      uVar3 = 6;
      goto LAB_180005cbb;
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
              goto LAB_180005d24;
            }
            goto LAB_180005cf4;
          }
          uVar3 = 4;
        }
LAB_180005cbb:
        uVar4 = 8;
        goto LAB_180005d24;
      }
LAB_180005cf4:
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
        goto LAB_180005d26;
      }
      goto LAB_180005cf4;
    }
    uVar3 = 7;
  }
LAB_180005d24:
  iVar1 = 0;
LAB_180005d26:
  FUN_1800176e0((longlong)puVar2,param_1,uVar3,uVar4,uVar3,uVar4,iVar1,iVar1);
  return;
}

