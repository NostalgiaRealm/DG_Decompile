/*
 * _grTexCombineFunction@8 at 1800059d0
 * undefined __cdecl _grTexCombineFunction@8(void)
 * Address ranges: 1800059d0-180005a8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexCombineFunction_8(void)

{
  longlong lVar1;
  undefined4 extraout_w1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_w11;
  
                    /* 0x59d0  90  _grTexCombineFunction@8
                       0x59d0  133  _guTexCombineFunction@8
                       0x59d0  251  grTexCombineFunction
                       0x59d0  294  guTexCombineFunction */
  lVar1 = FUN_180017788();
  switch(extraout_w1) {
  case 0:
    uVar2 = 0;
    goto LAB_180005a6c;
  default:
    uVar2 = 1;
LAB_180005a6c:
    iVar4 = 0;
LAB_180005a70:
    uVar3 = 0;
    goto LAB_180005a74;
  case 2:
    uVar2 = 3;
    goto LAB_180005a10;
  case 3:
    uVar2 = 4;
    goto LAB_180005a10;
  case 4:
    uVar2 = 3;
    uVar3 = 1;
    break;
  case 5:
    uVar2 = 6;
LAB_180005a10:
    uVar3 = 8;
    break;
  case 6:
    uVar2 = 7;
    uVar3 = 0xc;
    break;
  case 7:
    uVar2 = 7;
    uVar3 = 4;
    break;
  case 8:
    uVar2 = 7;
    uVar3 = 0xd;
    break;
  case 9:
    uVar2 = 7;
    uVar3 = 5;
    break;
  case 10:
    uVar2 = 0;
    iVar4 = 1;
    goto LAB_180005a70;
  }
  iVar4 = 0;
LAB_180005a74:
  FUN_1800196d8(lVar1,extraout_w11,uVar2,uVar3,uVar2,uVar3,iVar4,iVar4);
  return;
}

