/*
 * FUN_10004758 at 10004758
 * undefined __fastcall FUN_10004758(uint param_1)
 * Address ranges: 10004758-10004805
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10004758(uint param_1)

{
  undefined *this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  local_8 = param_1 & 0xffffff00;
  uVar5 = local_8;
  local_8._1_3_ = (undefined3)(param_1 >> 8);
  switch(param_1) {
  case 0:
    uVar5 = 0;
    goto LAB_10004773;
  case 1:
    local_8 = 0;
    uVar3 = 1;
    goto LAB_1000478b;
  case 3:
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar5 = local_8;
  case 2:
    local_8 = uVar5;
    uVar3 = 0;
LAB_1000478b:
    uVar5 = 0;
    uVar4 = 2;
    uVar2 = 0;
    uVar1 = 1;
    break;
  case 4:
    local_8 = 0;
    uVar3 = 1;
    uVar2 = 8;
    goto LAB_10004798;
  case 5:
    local_8 = 0;
    uVar3 = 1;
    goto LAB_100047a2;
  case 7:
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar5 = local_8;
  case 6:
    local_8 = uVar5;
    uVar3 = 0;
LAB_100047a2:
    uVar2 = 1;
    goto LAB_10004798;
  case 8:
  case 0xf:
    local_8 = 0;
    uVar5 = 0;
    uVar4 = 1;
    uVar3 = 0;
    uVar2 = 1;
    uVar1 = 5;
    break;
  case 9:
    local_8 = 0;
    uVar3 = 1;
    uVar2 = 3;
LAB_10004798:
    uVar5 = 0;
    uVar4 = 1;
    uVar1 = 3;
    break;
  case 10:
  case 0xe:
    uVar2 = 3;
    goto LAB_100047cf;
  case 0xb:
    uVar2 = 8;
LAB_100047cf:
    local_8 = 0;
    uVar5 = 0;
    uVar4 = 1;
    uVar3 = 0;
    uVar1 = 4;
    break;
  case 0xc:
    local_8 = 0;
    uVar5 = 0;
    uVar4 = 1;
    uVar3 = 0;
    uVar2 = 8;
    uVar1 = 6;
    break;
  case 0xd:
    local_8 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = 4;
    uVar1 = 7;
    break;
  case 0x10:
    uVar5 = 1;
LAB_10004773:
    local_8 = 0;
    uVar4 = 2;
    uVar3 = 1;
    uVar2 = 0;
    uVar1 = 0;
    break;
  default:
    goto switchD_1000476a_default;
  }
  this = FUN_10012ab2();
  FUN_10013f6b(this,uVar1,uVar2,uVar3,uVar4,uVar5,local_8);
switchD_1000476a_default:
  return;
}

