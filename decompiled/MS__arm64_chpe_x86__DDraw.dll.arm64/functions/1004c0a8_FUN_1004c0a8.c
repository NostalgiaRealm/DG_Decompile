/*
 * FUN_1004c0a8 at 1004c0a8
 * undefined FUN_1004c0a8(void)
 * Address ranges: 1004c0a8-1004c1df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c0a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *extraout_w9;
  undefined4 extraout_w10;
  int extraout_w11;
  undefined4 extraout_w13;
  undefined4 extraout_w14;
  int extraout_w15;
  undefined4 local_8;
  
  uVar2 = local_8;
  uVar4 = *(undefined4 *)(param_1 + 0x158);
  uVar3 = FUN_1004d7d0(param_1 + 0x150);
  local_8._0_2_ =
       CONCAT11(*(int *)(extraout_w11 + 0x1cc) - 0x19U < 2,
                (*(uint *)(extraout_w11 + 0x1b8) & 0x2001) != 0);
  local_8._3_1_ = SUB41(uVar2,3);
  local_8 = CONCAT13(local_8._3_1_,
                     CONCAT12((char)(*(uint *)(extraout_w11 + 0x1b8) >> 0xf),(undefined2)local_8)) &
            0xff01ffff;
  *(ulonglong *)(extraout_w15 + 0x6c) = CONCAT44(extraout_w13,extraout_w14);
  *(ulonglong *)(extraout_w15 + 100) = CONCAT44(uVar4,extraout_w10);
  *(ulonglong *)(extraout_w15 + 0x74) = CONCAT44(uVar3,1);
  *(uint *)(extraout_w15 + 0x7c) = local_8;
  iVar1 = *extraout_w9;
  uVar4 = *(undefined4 *)(extraout_w11 + 0x1b0);
  uVar2 = *(undefined4 *)(extraout_w11 + 0x1ac);
  uVar3 = *(undefined4 *)(extraout_w11 + 0x1a8);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(extraout_w11 + 0x1a4);
  *(undefined4 *)(iVar1 + 0x84) = uVar3;
  *(undefined4 *)(iVar1 + 0x88) = uVar2;
  *(undefined4 *)(iVar1 + 0x8c) = uVar4;
  if ((*(uint *)(extraout_w11 + 0x154) >> 0xb & 1) == 0) {
    *(undefined8 *)(*extraout_w9 + 0x9c) = 0;
  }
  else {
    iVar1 = *extraout_w9;
    uVar4 = *(undefined4 *)(extraout_w11 + 0x160);
    *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(extraout_w11 + 0x174);
    *(undefined4 *)(iVar1 + 0xa0) = uVar4;
  }
  return;
}

