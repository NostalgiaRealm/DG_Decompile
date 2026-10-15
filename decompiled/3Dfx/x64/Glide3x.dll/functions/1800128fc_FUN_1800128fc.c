/*
 * FUN_1800128fc at 1800128fc
 * undefined __fastcall FUN_1800128fc(longlong * param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 1800128fc-180012a0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800128fc(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_1800144d0((longlong *)param_1[0x660]);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  if ((((param_2 == 4) && (param_3 == 0)) && (param_4 == 4)) && (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x567) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2b3c) =
       *(undefined4 *)(&DAT_180064740 + (longlong)param_2 * 4);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(&DAT_180064700 + (longlong)param_3 * 4);
  *(undefined4 *)((longlong)param_1 + 0x2b44) = 1;
  *(undefined4 *)(param_1 + 0x56a) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c79) = 1;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(uint *)(param_1 + 0x569) = (param_4 == 4) + 1;
  *(uint *)((longlong)param_1 + 0x2b4c) = (param_5 == 4) + 1;
  *(uint *)(param_1 + 0x57c) = (param_3 == 0xf) + 1;
  uVar1 = *(uint *)((longlong)param_1 + 0x2be4) | 1;
  if (param_3 != 0xf) {
    uVar1 = *(uint *)((longlong)param_1 + 0x2be4) & 0xfffffffe;
  }
  *(uint *)((longlong)param_1 + 0x2cac) = *(uint *)((longlong)param_1 + 0x2cac) & 0xffff0000;
  *(uint *)((longlong)param_1 + 0x2be4) = uVar1;
  uVar1 = 0;
  if (param_4 == 4) {
    uVar1 = 0x400;
  }
  uVar3 = 0;
  if (param_5 == 4) {
    uVar3 = 4;
  }
  *(uint *)((longlong)param_1 + 0x2cac) = *(uint *)((longlong)param_1 + 0x2cac) | uVar1 | uVar3;
  return;
}

