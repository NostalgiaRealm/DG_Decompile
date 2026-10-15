/*
 * FUN_10005ca0 at 10005ca0
 * undefined FUN_10005ca0(void)
 * Address ranges: 10005ca0-10005d23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10005ca0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int extraout_w11;
  ulonglong extraout_x12;
  int extraout_w13;
  undefined1 auVar3 [12];
  
  if (param_2 < *(uint *)(param_1 + 0x4c)) {
    auVar3 = FUN_100306a0();
    iVar1 = 0x101389d0;
    if ((auVar3._0_8_ & 0xff) == 0) {
      iVar1 = 0x101389c4;
    }
    iVar2 = extraout_w11;
    if ((extraout_x12 & 4) != 0) {
      iVar2 = extraout_w11 + 1;
    }
    iVar2 = *(int *)(iVar1 + *(int *)(*(int *)(extraout_w13 + 0x48) + auVar3._8_4_ * 4) * 0x228) *
            iVar2;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

