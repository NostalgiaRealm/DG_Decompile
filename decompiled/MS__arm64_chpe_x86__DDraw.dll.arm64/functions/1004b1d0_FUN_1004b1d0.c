/*
 * FUN_1004b1d0 at 1004b1d0
 * undefined FUN_1004b1d0(void)
 * Address ranges: 1004b1d0-1004b2ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1004b1d0(int param_1,int param_2,int param_3,int param_4,undefined8 *param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar2 = 0x80070057;
  if ((param_4 != 0) && ((param_6 & 0xffffffcc) == 0)) {
    iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
    if (iVar1 == 0) {
      FUN_10001c10(0);
    }
    uVar2 = 0x80004001;
    if (*(int *)(param_1 + 0x104) == 0) {
      local_50 = 0;
      iVar1 = *(int *)(param_4 + 0x15c);
      iVar3 = *(int *)(param_4 + 0x158);
      if (param_5 != (undefined8 *)0x0) {
        uStack_48 = param_5[1];
        local_50 = *param_5;
        iVar3 = (int)((ulonglong)uStack_48 >> 0x20);
        iVar1 = (int)uStack_48;
      }
      local_58 = (iVar1 - (int)local_50) + param_2;
      iStack_54 = (iVar3 - local_50._4_4_) + param_3;
      local_60 = param_2;
      iStack_5c = param_3;
      uVar2 = FUN_1004a9a0(param_1,&local_60,param_4,param_5,
                           (param_6 & 2 |
                           (param_6 & 1 | (param_6 & 0x10 | (param_6 & 0x20) << 2) << 5) << 3) <<
                           0xc | 0x200,0);
    }
    (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  }
  return uVar2;
}

